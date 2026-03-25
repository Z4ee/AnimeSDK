#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMELEVELMETACONFIG_METHOD_2_E44174D0E0A92B9B_OFFSET UNITYSDK_OFFSET(0x1735E670)
#define RPG_GAMECORE_LITTLEGAMELEVELMETACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1735E6B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelMetaConfig_TypeDefinitionIndex = 17358;

	class LittleGameLevelMetaConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELMETACONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_E44174D0E0A92B9B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameLevelMetaConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameLevelMetaConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELMETACONFIG_METHOD_2_E44174D0E0A92B9B_OFFSET))(a1, a2);
		}
	};
}
