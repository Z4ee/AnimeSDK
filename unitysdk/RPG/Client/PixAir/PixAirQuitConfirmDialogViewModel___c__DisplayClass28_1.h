#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIManager; }
namespace System { class Action; }

#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_1__CREATE_B__5_OFFSET UNITYSDK_OFFSET(0xC3E7D10)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_1__CREATE_B__6_OFFSET UNITYSDK_OFFSET(0xC3E7E40)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_1__CREATE_B__7_OFFSET UNITYSDK_OFFSET(0xC3E7E30)
#define RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0xC3E73F0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirQuitConfirmDialogViewModel___c__DisplayClass28_1_TypeDefinitionIndex = 73709;

	class PixAirQuitConfirmDialogViewModel___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::System::Action* __9__7; // 0x10
		::RPG::Client::UIManager* uiManager; // 0x18
		::System::Boolean streamingFinished; // 0x20
		::System::Single transferStartTime; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_1__CREATE_B__5_OFFSET))(this);
		}

		::System::Void _Create_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_1__CREATE_B__7_OFFSET))(this);
		}

		::System::Boolean _Create_b__6()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRQUITCONFIRMDIALOGVIEWMODEL___C__DISPLAYCLASS28_1__CREATE_B__6_OFFSET))(this);
		}
	};
}
