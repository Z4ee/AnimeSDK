#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ChenLingBattle { class IEntity; }

#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS46_0__CTOR_OFFSET UNITYSDK_OFFSET(0x932E8A0)
#define RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS46_0__GETBUILDINGBYEFFECTUNIQUEID_B__0_OFFSET UNITYSDK_OFFSET(0x9333CC0)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int ChenLingBattleGameSession___c__DisplayClass46_0_TypeDefinitionIndex = 62097;

	class ChenLingBattleGameSession___c__DisplayClass46_0 : public ::System::Object
	{
	public:
		::System::UInt64 effectUniqueID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS46_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetBuildingByEffectUniqueID_b__0(::RPG::Client::ChenLingBattle::IEntity* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChenLingBattle::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_CHENLINGBATTLEGAMESESSION___C__DISPLAYCLASS46_0__GETBUILDINGBYEFFECTUNIQUEID_B__0_OFFSET))(this, x);
		}
	};
}
