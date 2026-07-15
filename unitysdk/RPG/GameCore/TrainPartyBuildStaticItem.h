#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperation.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue; }
namespace RPG::GameCore { class TrainPartyBuildItemSlot; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYBUILDSTATICITEM_METHOD_2_20EC186DBF8E8E62_OFFSET UNITYSDK_OFFSET(0x1C15E590)
#define RPG_GAMECORE_TRAINPARTYBUILDSTATICITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C15E930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyBuildStaticItem_TypeDefinitionIndex = 15628;

	class TrainPartyBuildStaticItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::String* UniqueName; // 0x18
		::RPG::MVector3 LocalPosition; // 0x20
		::RPG::MVector3 LocalRotation; // 0x2C
		::RPG::MVector3 LocalScale; // 0x38
		::Il2CppArray<::RPG::GameCore::TrainPartyBuildItemSlot*>* Slots; // 0x48
		::System::String* BindFloorCustomString; // 0x50
		::System::Int32 BindFloorCustomValue; // 0x58
		::RPG::GameCore::LogicOperation BindDynamicLogic; // 0x5C
		::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* BindDynamicValue; // 0x60
		::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* BindDynamicValueExt; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDSTATICITEM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_20EC186DBF8E8E62(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyBuildStaticItem*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyBuildStaticItem*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYBUILDSTATICITEM_METHOD_2_20EC186DBF8E8E62_OFFSET))(a1, a2);
		}
	};
}
