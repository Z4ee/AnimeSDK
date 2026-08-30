#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRIGGERROGUEAVATARPICK_METHOD_3_646D18BE63393E89_OFFSET UNITYSDK_OFFSET(0x1D293740)
#define RPG_GAMECORE_TRIGGERROGUEAVATARPICK_METHOD_3_CD52F6B0B7158E5C_OFFSET UNITYSDK_OFFSET(0x1D293780)
#define RPG_GAMECORE_TRIGGERROGUEAVATARPICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D293770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueAvatarPick_TypeDefinitionIndex = 22017;

	class TriggerRogueAvatarPick : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean TargetIsOwner; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 GroupPropID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEAVATARPICK__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_646D18BE63393E89(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueAvatarPick*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueAvatarPick*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEAVATARPICK_METHOD_3_646D18BE63393E89_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_CD52F6B0B7158E5C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueAvatarPick* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueAvatarPick*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEAVATARPICK_METHOD_3_CD52F6B0B7158E5C_OFFSET))(a1, a2);
		}
	};
}
