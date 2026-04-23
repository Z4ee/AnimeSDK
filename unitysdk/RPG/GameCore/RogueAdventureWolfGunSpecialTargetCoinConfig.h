#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureWolfGunSpecialTargetConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_METHOD_3_4AB4EC07D3FB4ADE_OFFSET UNITYSDK_OFFSET(0x18CE7A00)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_METHOD_3_A55142F5490F381A_OFFSET UNITYSDK_OFFSET(0x18CE7A50)
#define RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE7A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdventureWolfGunSpecialTargetCoinConfig_TypeDefinitionIndex = 16994;

	class RogueAdventureWolfGunSpecialTargetCoinConfig : public ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4AB4EC07D3FB4ADE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetCoinConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetCoinConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_METHOD_3_4AB4EC07D3FB4ADE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A55142F5490F381A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetCoinConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAdventureWolfGunSpecialTargetCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREWOLFGUNSPECIALTARGETCOINCONFIG_METHOD_3_A55142F5490F381A_OFFSET))(a1, a2);
		}
	};
}
