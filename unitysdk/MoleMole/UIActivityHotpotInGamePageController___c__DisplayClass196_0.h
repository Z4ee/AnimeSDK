#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS196_0__CTOR_OFFSET UNITYSDK_OFFSET(0x173C7D40)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS196_0__PLAYENDANIM_B__0_OFFSET UNITYSDK_OFFSET(0x173C7D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController___c__DisplayClass196_0_TypeDefinitionIndex = 75060;

	class UIActivityHotpotInGamePageController___c__DisplayClass196_0 : public ::System::Object
	{
	public:
		::System::Action* finishCallBack; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS196_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayEndAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER___C__DISPLAYCLASS196_0__PLAYENDANIM_B__0_OFFSET))(this);
		}
	};
}
