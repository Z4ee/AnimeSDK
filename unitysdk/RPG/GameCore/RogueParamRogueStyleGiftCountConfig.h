#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUESTYLEGIFTCOUNTCONFIG_METHOD_6_755621183930E1E7_OFFSET UNITYSDK_OFFSET(0x1764F5A0)
#define RPG_GAMECORE_ROGUEPARAMROGUESTYLEGIFTCOUNTCONFIG_METHOD_6_AED8C93D05F90931_OFFSET UNITYSDK_OFFSET(0x1764F2F0)
#define RPG_GAMECORE_ROGUEPARAMROGUESTYLEGIFTCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1764F470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueStyleGiftCountConfig_TypeDefinitionIndex = 18196;

	class RogueParamRogueStyleGiftCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUESTYLEGIFTCOUNTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_AED8C93D05F90931(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueStyleGiftCountConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueStyleGiftCountConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUESTYLEGIFTCOUNTCONFIG_METHOD_6_AED8C93D05F90931_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_755621183930E1E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueStyleGiftCountConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueStyleGiftCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUESTYLEGIFTCOUNTCONFIG_METHOD_6_755621183930E1E7_OFFSET))(a1, a2);
		}
	};
}
