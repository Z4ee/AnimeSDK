#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0E7EF0781F9BE53A_7;

#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9BAAD0)
#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__SENDEVENT_B__0_OFFSET UNITYSDK_OFFSET(0x1D9BAAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsDialogPopWindowController___c__DisplayClass16_0_TypeDefinitionIndex = 89324;

	class UIBallGameOptionsDialogPopWindowController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::Class_3_0E7EF0781F9BE53A_7* getbullet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendEvent_b__0(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_0__SENDEVENT_B__0_OFFSET))(this, id);
		}
	};
}
