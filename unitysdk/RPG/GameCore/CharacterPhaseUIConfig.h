#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHARACTERPHASEUICONFIG_METHOD_2_0227718FFE2BF4FD_OFFSET UNITYSDK_OFFSET(0x1D548EE0)
#define RPG_GAMECORE_CHARACTERPHASEUICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D549200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPhaseUIConfig_TypeDefinitionIndex = 16505;

	class CharacterPhaseUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 CharacterHUDOffset; // 0x10
		::RPG::MVector3 BuffPanelOffset; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEUICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_0227718FFE2BF4FD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::CharacterPhaseUIConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::CharacterPhaseUIConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPHASEUICONFIG_METHOD_2_0227718FFE2BF4FD_OFFSET))(a1, a2);
		}
	};
}
