#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_METHOD_6_0F3375444DD7F5CA_OFFSET UNITYSDK_OFFSET(0x1E545FF0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_METHOD_6_1514FE74A3B4B626_OFFSET UNITYSDK_OFFSET(0x1E546040)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E546030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaStyleGiftExcelValueConfig_TypeDefinitionIndex = 19631;

	class RogueParamRoguePersonaStyleGiftExcelValueConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0F3375444DD7F5CA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_METHOD_6_0F3375444DD7F5CA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1514FE74A3B4B626(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRoguePersonaStyleGiftExcelValueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONASTYLEGIFTEXCELVALUECONFIG_METHOD_6_1514FE74A3B4B626_OFFSET))(a1, a2);
		}
	};
}
