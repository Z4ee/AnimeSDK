#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatCommunicateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::DiceCombat { class DiceCombatCommunicateData; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCD3CD80)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS36_0__GETCOMMUNICATEDATAS_B__0_OFFSET UNITYSDK_OFFSET(0xCD44520)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatUtil___c__DisplayClass36_0_TypeDefinitionIndex = 75626;

	class DiceCombatUtil___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::DiceCombatCommunicateType type; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetCommunicateDatas_b__0(::RPG::Client::DiceCombat::DiceCombatCommunicateData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatCommunicateData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATUTIL___C__DISPLAYCLASS36_0__GETCOMMUNICATEDATAS_B__0_OFFSET))(this, a1);
		}
	};
}
