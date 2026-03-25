#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_823555678567D9B3_OFFSET UNITYSDK_OFFSET(0x17000FD0)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_E12977EA412CC121_OFFSET UNITYSDK_OFFSET(0x170010A0)
#define RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x17001050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckTimeRewindEntityPauseBySkillCount_TypeDefinitionIndex = 18985;

	class ByCheckTimeRewindEntityPauseBySkillCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 Count; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_823555678567D9B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_823555678567D9B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_E12977EA412CC121(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCheckTimeRewindEntityPauseBySkillCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKTIMEREWINDENTITYPAUSEBYSKILLCOUNT_METHOD_4_E12977EA412CC121_OFFSET))(a1, a2);
		}
	};
}
