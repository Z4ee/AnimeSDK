#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureWolfGunSpecialTargetConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_METHOD_3_04040BA040946164_OFFSET UNITYSDK_OFFSET(0x1EE8BE30)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_METHOD_3_D3393B7B5C0476A0_OFFSET UNITYSDK_OFFSET(0x1EE8BDA0)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE8BD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetRuanMeiConfig_TypeDefinitionIndex = 17688;

	class RogueAdventureWolfGunSpecialTargetRuanMeiConfig : public ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04040BA040946164(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetRuanMeiConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetRuanMeiConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_METHOD_3_04040BA040946164_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D3393B7B5C0476A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetRuanMeiConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetRuanMeiConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETRUANMEICONFIG_METHOD_3_D3393B7B5C0476A0_OFFSET))(a1, a2);
		}
	};
}
