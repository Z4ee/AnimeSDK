#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERPHASEUICONFIG_METHOD_2_F9435E94D978FDAB_OFFSET UNITYSDK_OFFSET(0x1CF9BCA0)
#define RPG_GAMECORE_CHARACTERPHASEUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF9BEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPhaseUIConfig_TypeDefinitionIndex = 16332;

	class CharacterPhaseUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 CharacterHUDOffset; // 0x10
		::RPG::MVector3 BuffPanelOffset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F9435E94D978FDAB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPhaseUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPhaseUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEUICONFIG_METHOD_2_F9435E94D978FDAB_OFFSET))(a1, a2);
		}
	};
}
