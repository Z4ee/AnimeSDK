#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_D22621BB0528DB79_OFFSET UNITYSDK_OFFSET(0x1B729250)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_FB94E5661557FC12_OFFSET UNITYSDK_OFFSET(0x1B729290)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B729280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPreloadConfig_TypeDefinitionIndex = 15698;

	class CharacterPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_D22621BB0528DB79(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPreloadConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPreloadConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_D22621BB0528DB79_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FB94E5661557FC12(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG_METHOD_3_FB94E5661557FC12_OFFSET))(a1, a2);
		}
	};
}
