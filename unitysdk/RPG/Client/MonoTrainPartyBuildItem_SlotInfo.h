#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoTrainPartyBuildItem_TagType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoTrainPartyBuildItem_SlotExtInfo; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xAA02F20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItem_SlotInfo_TypeDefinitionIndex = 63512;

	class MonoTrainPartyBuildItem_SlotInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* anchor; // 0x10
		::RPG::Client::MonoTrainPartyBuildItem_TagType tags; // 0x18
		::Il2CppArray<::RPG::Client::MonoTrainPartyBuildItem_SlotExtInfo*>* extInfos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTINFO__CTOR_OFFSET))(this);
		}
	};
}
