#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCONFIG_METHOD_2_B072661D47046B81_OFFSET UNITYSDK_OFFSET(0x1EEF7D80)
#define RPG_GAMECORE_ROGUEMODIFIERCONFIG_METHOD_2_C3038A93A49112AD_OFFSET UNITYSDK_OFFSET(0x1EEF7DE0)
#define RPG_GAMECORE_ROGUEMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEF7590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierConfig_TypeDefinitionIndex = 17719;

	class RogueModifierConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_B072661D47046B81(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG_METHOD_2_B072661D47046B81_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C3038A93A49112AD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCONFIG_METHOD_2_C3038A93A49112AD_OFFSET))(a1, a2);
		}
	};
}
