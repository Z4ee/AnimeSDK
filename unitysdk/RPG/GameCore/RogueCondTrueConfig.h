#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDTRUECONFIG_METHOD_6_67BC343C6C6FB9C0_OFFSET UNITYSDK_OFFSET(0x175ECE20)
#define RPG_GAMECORE_ROGUECONDTRUECONFIG_METHOD_6_EAFC963C5BFB84C4_OFFSET UNITYSDK_OFFSET(0x175ECC60)
#define RPG_GAMECORE_ROGUECONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175ECD60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondTrueConfig_TypeDefinitionIndex = 18143;

	class RogueCondTrueConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_EAFC963C5BFB84C4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTRUECONFIG_METHOD_6_EAFC963C5BFB84C4_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_67BC343C6C6FB9C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTRUECONFIG_METHOD_6_67BC343C6C6FB9C0_OFFSET))(a1, a2);
		}
	};
}
