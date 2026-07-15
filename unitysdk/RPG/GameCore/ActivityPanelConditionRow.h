#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ConditionParam; }

#define RPG_GAMECORE_ACTIVITYPANELCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAFCAC0)
#define RPG_GAMECORE_ACTIVITYPANELCONDITIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFCDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelConditionRow_TypeDefinitionIndex = 10816;

	class ActivityPanelConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* PreConditions; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* GuideConditions; // 0x18
		::System::UInt32 ShopOnlyActivityModule; // 0x20
		::System::UInt32 GuideTakeMission; // 0x24
		::System::UInt32 GuideGoto; // 0x28
		::System::UInt32 ActivityGoto; // 0x2C
		::System::UInt32 ActivityOpenActivityModule; // 0x30
		::System::Boolean ActivityGotoStoryLineRestore; // 0x34
		::System::UInt32 PanelID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELCONDITIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityPanelConditionRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPanelConditionRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
