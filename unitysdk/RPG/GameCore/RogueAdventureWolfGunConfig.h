#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_METHOD_3_219C9848C2FA3E65_OFFSET UNITYSDK_OFFSET(0x19B0D3B0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_METHOD_3_C754234C2E2689E9_OFFSET UNITYSDK_OFFSET(0x19B0CB60)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0CB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunConfig_TypeDefinitionIndex = 17012;

	class RogueAdventureWolfGunConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_219C9848C2FA3E65(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_METHOD_3_219C9848C2FA3E65_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C754234C2E2689E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNCONFIG_METHOD_3_C754234C2E2689E9_OFFSET))(a1, a2);
		}
	};
}
