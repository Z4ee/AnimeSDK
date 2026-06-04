#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYPANELSINGLEREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x193F5800)
#define RPG_GAMECORE_ACTIVITYPANELSINGLEREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x193F59A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelSingleRewardRow_TypeDefinitionIndex = 10782;

	class ActivityPanelSingleRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 ActivityID; // 0x18
		::System::UInt32 AvatarID; // 0x1C
		::System::UInt32 GotoID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELSINGLEREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityPanelSingleRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPanelSingleRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELSINGLEREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
