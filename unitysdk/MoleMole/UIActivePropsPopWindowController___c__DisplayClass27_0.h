#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_3BB4FDB082E23A99;
namespace MoleMole { class UIActivePropsPopWindowController; }

#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC1510)
#define MOLEMOLE_UIACTIVEPROPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS27_0__SENDFAVORITECSREQ_B__0_OFFSET UNITYSDK_OFFSET(0x18BC1520)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsPopWindowController___c__DisplayClass27_0_TypeDefinitionIndex = 72306;

	class UIActivePropsPopWindowController___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::Class_2_3BB4FDB082E23A99* buddyData; // 0x10
		::MoleMole::UIActivePropsPopWindowController* __4__this; // 0x18

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
