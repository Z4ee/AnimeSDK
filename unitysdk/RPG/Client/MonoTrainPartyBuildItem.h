#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoTrainPartyBuildItem_ItemType.h"
#include "unitysdk/RPG/Client/MonoTrainPartyBuildItem_TagType.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoTrainPartyBuildItem_SlotInfo; }
namespace RPG::Client { class TrainPartyBuildItemDynamicBindValue; }
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue; }
namespace System { class String; }

#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM_CONVERTDYNAMICBINDVALUE_1_OFFSET UNITYSDK_OFFSET(0xC150F10)
#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM_CONVERTDYNAMICBINDVALUE_OFFSET UNITYSDK_OFFSET(0xC150DC0)
#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM_GETUNIQUEKEY_OFFSET UNITYSDK_OFFSET(0xC150CD0)
#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xC151060)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItem_TypeDefinitionIndex = 64429;

	class MonoTrainPartyBuildItem : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::UInt32 id; // 0x18
		::RPG::Client::MonoTrainPartyBuildItem_ItemType type; // 0x1C
		::System::String* uniqueName; // 0x20
		::System::String* guid; // 0x28
		::Il2CppArray<::RPG::Client::MonoTrainPartyBuildItem_SlotInfo*>* slots; // 0x30
		::RPG::Client::MonoTrainPartyBuildItem_TagType tags; // 0x38
		::System::String* bindFloorCustomString; // 0x40
		::System::Int32 bindFloorCustomValue; // 0x48
		::RPG::GameCore::LogicOperation dynamicLogic; // 0x4C
		::RPG::Client::TrainPartyBuildItemDynamicBindValue* dynamicBindValue; // 0x50
		::RPG::Client::TrainPartyBuildItemDynamicBindValue* dynamicBindValueExt; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM__CTOR_OFFSET))(this);
		}

		::System::String* GetUniqueKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM_GETUNIQUEKEY_OFFSET))(this);
		}

		static ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* ConvertDynamicBindValue(::RPG::Client::TrainPartyBuildItemDynamicBindValue* a1)
		{
			return ((::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*(*)(::RPG::Client::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM_CONVERTDYNAMICBINDVALUE_OFFSET))(a1);
		}

		static ::RPG::Client::TrainPartyBuildItemDynamicBindValue* ConvertDynamicBindValue_1(::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a1)
		{
			return ((::RPG::Client::TrainPartyBuildItemDynamicBindValue*(*)(::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM_CONVERTDYNAMICBINDVALUE_1_OFFSET))(a1);
		}
	};
}
