#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_METHOD_3_2DEBA61B6FB32E5E_OFFSET UNITYSDK_OFFSET(0x19662090)
#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_METHOD_3_33DF889EA063DBFF_OFFSET UNITYSDK_OFFSET(0x19662010)
#define RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x19662060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStorySwitchBackgroundAnim_TypeDefinitionIndex = 19801;

	class ClockParkStorySwitchBackgroundAnim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 Index; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_33DF889EA063DBFF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_METHOD_3_33DF889EA063DBFF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2DEBA61B6FB32E5E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkStorySwitchBackgroundAnim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYSWITCHBACKGROUNDANIM_METHOD_3_2DEBA61B6FB32E5E_OFFSET))(a1, a2);
		}
	};
}
