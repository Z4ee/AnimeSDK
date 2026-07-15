#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_METHOD_6_407E4F3B288AA239_OFFSET UNITYSDK_OFFSET(0x1D176720)
#define RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_METHOD_6_E5F2E81BEB5A5935_OFFSET UNITYSDK_OFFSET(0x1D1766D0)
#define RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D176710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamFormulaNotRequiredBuffCountConfig_TypeDefinitionIndex = 19061;

	class RogueParamFormulaNotRequiredBuffCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_E5F2E81BEB5A5935(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_METHOD_6_E5F2E81BEB5A5935_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_407E4F3B288AA239(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamFormulaNotRequiredBuffCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULANOTREQUIREDBUFFCOUNTCONFIG_METHOD_6_407E4F3B288AA239_OFFSET))(a1, a2);
		}
	};
}
