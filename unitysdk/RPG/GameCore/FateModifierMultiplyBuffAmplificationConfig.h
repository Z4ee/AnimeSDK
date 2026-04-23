#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_METHOD_3_2404A62095C102E4_OFFSET UNITYSDK_OFFSET(0x188D66D0)
#define RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_METHOD_3_3E3A2EC5C2F3335D_OFFSET UNITYSDK_OFFSET(0x188D5870)
#define RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x188D5820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateModifierMultiplyBuffAmplificationConfig_TypeDefinitionIndex = 18312;

	class FateModifierMultiplyBuffAmplificationConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2404A62095C102E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_METHOD_3_2404A62095C102E4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3E3A2EC5C2F3335D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FateModifierMultiplyBuffAmplificationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERMULTIPLYBUFFAMPLIFICATIONCONFIG_METHOD_3_3E3A2EC5C2F3335D_OFFSET))(a1, a2);
		}
	};
}
