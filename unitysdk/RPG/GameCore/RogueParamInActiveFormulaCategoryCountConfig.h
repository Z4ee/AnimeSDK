#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_6_AB6EE4C3AA1BF501_OFFSET UNITYSDK_OFFSET(0x1D176790)
#define RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_6_F6475C0DAB0C7265_OFFSET UNITYSDK_OFFSET(0x1D1767E0)
#define RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1767D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamInActiveFormulaCategoryCountConfig_TypeDefinitionIndex = 19059;

	class RogueParamInActiveFormulaCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AB6EE4C3AA1BF501(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_6_AB6EE4C3AA1BF501_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_F6475C0DAB0C7265(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamInActiveFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMINACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_6_F6475C0DAB0C7265_OFFSET))(a1, a2);
		}
	};
}
