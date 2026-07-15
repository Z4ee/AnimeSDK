#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_METHOD_3_07AF2EEA168D27CB_OFFSET UNITYSDK_OFFSET(0x1CFBF3B0)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_METHOD_3_5C21D8CDEF39D3CF_OFFSET UNITYSDK_OFFSET(0x1CFBF400)
#define RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFBF3F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierChangePropDestructGenerateNumberConfig_TypeDefinitionIndex = 17244;

	class RogueModifierChangePropDestructGenerateNumberConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_07AF2EEA168D27CB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePropDestructGenerateNumberConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePropDestructGenerateNumberConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_METHOD_3_07AF2EEA168D27CB_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_5C21D8CDEF39D3CF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueModifierChangePropDestructGenerateNumberConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueModifierChangePropDestructGenerateNumberConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERCHANGEPROPDESTRUCTGENERATENUMBERCONFIG_METHOD_3_5C21D8CDEF39D3CF_OFFSET))(a1, a2);
		}
	};
}
