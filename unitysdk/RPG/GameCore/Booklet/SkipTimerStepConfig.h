#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_METHOD_3_3E353653C3058846_OFFSET UNITYSDK_OFFSET(0x194E4710)
#define RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_METHOD_3_838BA6A004A2ED4C_OFFSET UNITYSDK_OFFSET(0x194E4770)
#define RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x194E4760)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int SkipTimerStepConfig_TypeDefinitionIndex = 23621;

	class SkipTimerStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::RPG::GameCore::Booklet::StepConfig* Step; // 0x10
		::System::Single Seconds; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E353653C3058846(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SkipTimerStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SkipTimerStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_METHOD_3_3E353653C3058846_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_838BA6A004A2ED4C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::SkipTimerStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::SkipTimerStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_SKIPTIMERSTEPCONFIG_METHOD_3_838BA6A004A2ED4C_OFFSET))(a1, a2);
		}
	};
}
