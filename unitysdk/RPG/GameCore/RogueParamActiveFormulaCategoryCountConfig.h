#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_6_2BCB69497C3BC872_OFFSET UNITYSDK_OFFSET(0x1E545500)
#define RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_6_CB1E60757F16118E_OFFSET UNITYSDK_OFFSET(0x1E545550)
#define RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E545540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamActiveFormulaCategoryCountConfig_TypeDefinitionIndex = 19593;

	class RogueParamActiveFormulaCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2BCB69497C3BC872(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_6_2BCB69497C3BC872_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_CB1E60757F16118E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamActiveFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMACTIVEFORMULACATEGORYCOUNTCONFIG_METHOD_6_CB1E60757F16118E_OFFSET))(a1, a2);
		}
	};
}
