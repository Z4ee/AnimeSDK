#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::PixAir { class PixAirModule; }

#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0xC3E7AC0)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E6E70)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirQuitConfirmDialogViewModel___c__DisplayClass28_0_TypeDefinitionIndex = 73708;

	class PixAirQuitConfirmDialogViewModel___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::PixAir::PixAirModule* module; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_0__CREATE_B__0_OFFSET))(this);
		}
	};
}
