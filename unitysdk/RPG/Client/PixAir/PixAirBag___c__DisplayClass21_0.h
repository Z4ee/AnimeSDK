#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirSlot; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__DISPLAYCLASS21_0__ADDNEWEQUIP_B__0_OFFSET UNITYSDK_OFFSET(0x1C82FCA0)
#define RPG_CLIENT_PIXAIR_PIXAIRBAG___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C82DE80)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBag___c__DisplayClass21_0_TypeDefinitionIndex = 78843;

	class PixAirBag___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _AddNewEquip_b__0(::RPG::Client::PixAir::PixAirSlot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirSlot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAG___C__DISPLAYCLASS21_0__ADDNEWEQUIP_B__0_OFFSET))(this, a1);
		}
	};
}
