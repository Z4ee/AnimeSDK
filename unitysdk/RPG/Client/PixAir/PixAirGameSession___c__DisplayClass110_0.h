#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipInstance; }

#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION___C__DISPLAYCLASS110_0__CHECKEQUIPCANLEVELUP_G__LEVELUPPREDICATE_0_OFFSET UNITYSDK_OFFSET(0x1A0C8CD0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION___C__DISPLAYCLASS110_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C6A80)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameSession___c__DisplayClass110_0_TypeDefinitionIndex = 75326;

	class PixAirGameSession___c__DisplayClass110_0 : public ::System::Object
	{
	public:
		::System::UInt32 level; // 0x10
		::System::UInt32 equipID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION___C__DISPLAYCLASS110_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _CheckEquipCanLevelUp_g__LevelUpPredicate_0(::RPG::Client::PixAir::PixAirEquipInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMESESSION___C__DISPLAYCLASS110_0__CHECKEQUIPCANLEVELUP_G__LEVELUPPREDICATE_0_OFFSET))(this, a1);
		}
	};
}
