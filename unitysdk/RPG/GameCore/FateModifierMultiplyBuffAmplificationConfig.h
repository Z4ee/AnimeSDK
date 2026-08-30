#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_METHOD_3_3E3A2EC5C2F3335D_OFFSET UNITYSDK_OFFSET(0x1D08DAB0)
#define RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_METHOD_3_D76632C6C9424399_OFFSET UNITYSDK_OFFSET(0x1D08DA60)
#define RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D08DAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMultiplyBuffAmplificationConfig_TypeDefinitionIndex = 19044;

	class FateModifierMultiplyBuffAmplificationConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D76632C6C9424399(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_METHOD_3_D76632C6C9424399_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E3A2EC5C2F3335D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_METHOD_3_3E3A2EC5C2F3335D_OFFSET))(a1, a2);
		}
	};
}
