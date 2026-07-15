#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEOVERRIDECONFIG_METHOD_2_596EE3A0C2270DCD_OFFSET UNITYSDK_OFFSET(0x1BA95550)
#define RPG_GAMECORE_FIVEDIMEVILSMILESTATEOVERRIDECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA95690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEvilSmileStateOverrideConfig_TypeDefinitionIndex = 17849;

	class FiveDimEvilSmileStateOverrideConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimEvilSmileState StateType; // 0x10
		::System::Single StateTime; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEOVERRIDECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_596EE3A0C2270DCD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimEvilSmileStateOverrideConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimEvilSmileStateOverrideConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVILSMILESTATEOVERRIDECONFIG_METHOD_2_596EE3A0C2270DCD_OFFSET))(a1, a2);
		}
	};
}
