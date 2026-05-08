#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4DA7BFFCF976F7D7;
namespace MoleMole { class UIActivePropsPopWindowController; }

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15A89650)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__SENDFAVORITECSREQ_B__0_OFFSET UNITYSDK_OFFSET(0x15A89660)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 71979;

	class UIActivePropsPopWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::MoleMole::UIActivePropsPopWindowController* __4__this; // 0x10
		::Class_2_4DA7BFFCF976F7D7* buddyData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendFavoriteCsReq_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__SENDFAVORITECSREQ_B__0_OFFSET))(this);
		}
	};
}
