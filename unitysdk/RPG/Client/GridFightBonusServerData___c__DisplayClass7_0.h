#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightOrbEntityData; }

#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x97E4C10)
#define RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA___C__DISPLAYCLASS7_0__ISBATTLEBONUSCONTAINSORB_B__0_OFFSET UNITYSDK_OFFSET(0x97E4F60)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBonusServerData___c__DisplayClass7_0_TypeDefinitionIndex = 52335;

	class GridFightBonusServerData___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::UInt32 uid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _IsBattleBonusContainsOrb_b__0(::RPG::Client::GridFightOrbEntityData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightOrbEntityData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBONUSSERVERDATA___C__DISPLAYCLASS7_0__ISBATTLEBONUSCONTAINSORB_B__0_OFFSET))(this, x);
		}
	};
}
