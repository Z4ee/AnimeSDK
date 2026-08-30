#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_51BF044C917274D3_OFFSET UNITYSDK_OFFSET(0x1DB4FDD0)
#define RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_A03742B01D32EA5F_OFFSET UNITYSDK_OFFSET(0x1DB4FE10)
#define RPG_GAMECORE_SERVANTPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4FE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantPreloadConfig_TypeDefinitionIndex = 16168;

	class ServantPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_51BF044C917274D3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_51BF044C917274D3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A03742B01D32EA5F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ServantPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ServantPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG_METHOD_3_A03742B01D32EA5F_OFFSET))(a1, a2);
		}
	};
}
