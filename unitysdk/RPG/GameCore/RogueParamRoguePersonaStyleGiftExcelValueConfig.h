#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_METHOD_6_1514FE74A3B4B626_OFFSET UNITYSDK_OFFSET(0x18D5CD90)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_METHOD_6_A5CC3E5FADFCD0D0_OFFSET UNITYSDK_OFFSET(0x18D5CAE0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5CC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaStyleGiftExcelValueConfig_TypeDefinitionIndex = 18849;

	class RogueParamRoguePersonaStyleGiftExcelValueConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A5CC3E5FADFCD0D0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_METHOD_6_A5CC3E5FADFCD0D0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1514FE74A3B4B626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_METHOD_6_1514FE74A3B4B626_OFFSET))(a1, a2);
		}
	};
}
