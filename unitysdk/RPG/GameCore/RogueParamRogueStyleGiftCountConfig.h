#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUESTYLEGIFTCOUNTCONFIG_METHOD_6_755621183930E1E7_OFFSET UNITYSDK_OFFSET(0x18D5D050)
#define RPG_GAMECORE_ROGUEPARAMROGUESTYLEGIFTCOUNTCONFIG_METHOD_6_AED8C93D05F90931_OFFSET UNITYSDK_OFFSET(0x18D5CDA0)
#define RPG_GAMECORE_ROGUEPARAMROGUESTYLEGIFTCOUNTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5CF20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueStyleGiftCountConfig_TypeDefinitionIndex = 18843;

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
