#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirEquipItemViewModel; }

#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDAEA370)
#define RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL___C__DISPLAYCLASS1_0__GETEQUIPITEM_B__0_OFFSET UNITYSDK_OFFSET(0xDAEA3C0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirBagEquipsViewModel___c__DisplayClass1_0_TypeDefinitionIndex = 78769;

	class PixAirBagEquipsViewModel___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Int32 slotIndex; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetEquipItem_b__0(::RPG::Client::PixAir::PixAirEquipItemViewModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PixAir::PixAirEquipItemViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRBAGEQUIPSVIEWMODEL___C__DISPLAYCLASS1_0__GETEQUIPITEM_B__0_OFFSET))(this, a1);
		}
	};
}
