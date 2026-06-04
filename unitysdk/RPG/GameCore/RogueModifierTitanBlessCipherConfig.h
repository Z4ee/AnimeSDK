#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_METHOD_3_1E0B2D4B06C58A9C_OFFSET UNITYSDK_OFFSET(0x19B9D250)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_METHOD_3_39958D0243EA67A5_OFFSET UNITYSDK_OFFSET(0x19B9D180)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B9D200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierTitanBlessCipherConfig_TypeDefinitionIndex = 16882;

	class RogueModifierTitanBlessCipherConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_39958D0243EA67A5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTitanBlessCipherConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTitanBlessCipherConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_METHOD_3_39958D0243EA67A5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1E0B2D4B06C58A9C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierTitanBlessCipherConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierTitanBlessCipherConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_METHOD_3_1E0B2D4B06C58A9C_OFFSET))(a1, a2);
		}
	};
}
