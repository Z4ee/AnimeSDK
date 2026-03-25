#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_METHOD_6_A2B5E8EEFDA54AD1_OFFSET UNITYSDK_OFFSET(0x1764BEA0)
#define RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_METHOD_6_AEDEDD1635BEB627_OFFSET UNITYSDK_OFFSET(0x1764BBF0)
#define RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1764BD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamPersonaCompositionTypeNumByCardCountConfig_TypeDefinitionIndex = 18203;

	class RogueParamPersonaCompositionTypeNumByCardCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AEDEDD1635BEB627(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamPersonaCompositionTypeNumByCardCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamPersonaCompositionTypeNumByCardCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_METHOD_6_AEDEDD1635BEB627_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A2B5E8EEFDA54AD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamPersonaCompositionTypeNumByCardCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamPersonaCompositionTypeNumByCardCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMPERSONACOMPOSITIONTYPENUMBYCARDCOUNTCONFIG_METHOD_6_A2B5E8EEFDA54AD1_OFFSET))(a1, a2);
		}
	};
}
