#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBubbleTips; }
namespace System { class String; }

#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FEC870)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONUIDESTROY_B__0_OFFSET UNITYSDK_OFFSET(0x19FEC880)
#define MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONUIDESTROY_B__1_OFFSET UNITYSDK_OFFSET(0x19FEC890)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardOptionsDialogV2PopWindowController___c__DisplayClass33_0_TypeDefinitionIndex = 48368;

	class UIHollowCardOptionsDialogV2PopWindowController___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::MoleMole::UIBubbleTips* tip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::String* _OnUIDestroy_b__0(::System::String* str)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONUIDESTROY_B__0_OFFSET))(this, str);
		}

		::System::Void _OnUIDestroy_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDOPTIONSDIALOGV2POPWINDOWCONTROLLER___C__DISPLAYCLASS33_0__ONUIDESTROY_B__1_OFFSET))(this);
		}
	};
}
