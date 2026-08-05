#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_7D1C8BC7CF6694EC;

#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E770600)
#define MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_1__SENDEVENT_B__1_OFFSET UNITYSDK_OFFSET(0x1E7734D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameOptionsDialogPopWindowController___c__DisplayClass16_1_TypeDefinitionIndex = 93221;

	class UIBallGameOptionsDialogPopWindowController___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::Class_3_7D1C8BC7CF6694EC* upgradeBullet; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Void _SendEvent_b__1(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEOPTIONSDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS16_1__SENDEVENT_B__1_OFFSET))(this, id);
		}
	};
}
