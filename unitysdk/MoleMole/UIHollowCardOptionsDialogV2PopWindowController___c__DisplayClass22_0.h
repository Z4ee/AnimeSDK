#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x167C3F80)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__PLAYVIEWREFRESH_B__0_OFFSET UNITYSDK_OFFSET(0x167C3F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogV2PopWindowController___c__DisplayClass22_0_TypeDefinitionIndex = 79818;

	class UIHollowCardOptionsDialogV2PopWindowController___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::UnityEngine::Animation* anim; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _PlayViewRefresh_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS22_0__PLAYVIEWREFRESH_B__0_OFFSET))(this);
		}
	};
}
