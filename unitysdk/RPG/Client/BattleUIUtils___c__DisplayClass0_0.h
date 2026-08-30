#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD70D00)
#define RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS0_0__ISENTITYHAVESHIELDBUFF_B__0_OFFSET UNITYSDK_OFFSET(0x1BD78800)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleUIUtils___c__DisplayClass0_0_TypeDefinitionIndex = 72008;

	class BattleUIUtils___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::Boolean find; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _IsEntityHaveShieldBuff_b__0(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEUIUTILS___C__DISPLAYCLASS0_0__ISENTITYHAVESHIELDBUFF_B__0_OFFSET))(this, a1);
		}
	};
}
