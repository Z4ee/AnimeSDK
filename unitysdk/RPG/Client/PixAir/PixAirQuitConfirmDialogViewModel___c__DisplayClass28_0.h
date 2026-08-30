#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirModule; }

#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xDB206D0)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xDB1FC40)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirQuitConfirmDialogViewModel___c__DisplayClass28_0_TypeDefinitionIndex = 78905;

	class PixAirQuitConfirmDialogViewModel___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirModule* module; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Create_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_0__CREATE_B__0_OFFSET))(this);
		}
	};
}
