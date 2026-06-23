#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_90F2E0A39C190236.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TurnBattleEntityUnit; }

#define MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173AB540)
#define MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__GETSKILLFILTER_B__0_OFFSET UNITYSDK_OFFSET(0x173AB550)

namespace MoleMole
{
	inline static constexpr unsigned int TurnBattleEntityUnit___c__DisplayClass38_0_TypeDefinitionIndex = 53175;

	class TurnBattleEntityUnit___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::MoleMole::TurnBattleEntityUnit* __4__this; // 0x10
		::Struct_2_90F2E0A39C190236 skill; // 0x18
		::System::Boolean ignoreBlock; // 0x40
		::System::Boolean ignoreRange; // 0x41

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetSkillFilter_b__0(::MoleMole::TurnBattleEntityUnit* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TURNBATTLEENTITYUNIT___C__DISPLAYCLASS38_0__GETSKILLFILTER_B__0_OFFSET))(this, target);
		}
	};
}
