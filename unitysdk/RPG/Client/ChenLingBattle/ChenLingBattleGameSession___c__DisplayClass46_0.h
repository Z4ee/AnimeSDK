#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class IEntity; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB5B36A0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS46_0__GETBUILDINGBYEFFECTUNIQUEID_B__0_OFFSET UNITYSDK_OFFSET(0xB5BA7C0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass46_0_TypeDefinitionIndex = 70908;

	class ChenLingBattleGameSession___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::UInt64 effectUniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuildingByEffectUniqueID_b__0(::RPG::Client::ChenLingBattle::IEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS46_0__GETBUILDINGBYEFFECTUNIQUEID_B__0_OFFSET))(this, a1);
		}
	};
}
