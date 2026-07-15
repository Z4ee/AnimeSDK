#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityValueGetterConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_METHOD_3_91BD87ECEDAAEFF3_OFFSET UNITYSDK_OFFSET(0x1BCBD660)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_METHOD_3_D8FCB628D798156F_OFFSET UNITYSDK_OFFSET(0x1BCBD600)
#define RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCBD650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityValueGetterContextConfig_TypeDefinitionIndex = 20592;

	class LittleGameAbilityValueGetterContextConfig : public ::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig
	{
	public:
		::System::String* Key; // 0x10
		::RPG::GameCore::FixPoint DefaultValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D8FCB628D798156F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterContextConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterContextConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_METHOD_3_D8FCB628D798156F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_91BD87ECEDAAEFF3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityValueGetterContextConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityValueGetterContextConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYVALUEGETTERCONTEXTCONFIG_METHOD_3_91BD87ECEDAAEFF3_OFFSET))(a1, a2);
		}
	};
}
