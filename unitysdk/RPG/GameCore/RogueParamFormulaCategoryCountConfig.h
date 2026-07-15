#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG_METHOD_6_905A1819997000F4_OFFSET UNITYSDK_OFFSET(0x1D1766C0)
#define RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG_METHOD_6_AF067B7E05305178_OFFSET UNITYSDK_OFFSET(0x1D176670)
#define RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1766B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamFormulaCategoryCountConfig_TypeDefinitionIndex = 19060;

	class RogueParamFormulaCategoryCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AF067B7E05305178(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamFormulaCategoryCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamFormulaCategoryCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG_METHOD_6_AF067B7E05305178_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_905A1819997000F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamFormulaCategoryCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamFormulaCategoryCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMFORMULACATEGORYCOUNTCONFIG_METHOD_6_905A1819997000F4_OFFSET))(a1, a2);
		}
	};
}
