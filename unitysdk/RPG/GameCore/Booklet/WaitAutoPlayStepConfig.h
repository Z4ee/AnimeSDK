#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_METHOD_3_B9F63E55C4A0D277_OFFSET UNITYSDK_OFFSET(0x18712620)
#define RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_METHOD_3_E5AB140482044886_OFFSET UNITYSDK_OFFSET(0x18712460)
#define RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18712450)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int WaitAutoPlayStepConfig_TypeDefinitionIndex = 23787;

	class WaitAutoPlayStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B9F63E55C4A0D277(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_METHOD_3_B9F63E55C4A0D277_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E5AB140482044886(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::Booklet::WaitAutoPlayStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_WAITAUTOPLAYSTEPCONFIG_METHOD_3_E5AB140482044886_OFFSET))(a1, a2);
		}
	};
}
