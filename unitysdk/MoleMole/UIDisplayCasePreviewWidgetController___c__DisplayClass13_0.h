#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_57F7F2BF8C55D6B6;
namespace MoleMole { class UIDisplayCasePreviewWidgetController; }

#define MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x170B81B0)
#define MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_B__0_OFFSET UNITYSDK_OFFSET(0x170B81C0)
#define MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_B__1_OFFSET UNITYSDK_OFFSET(0x170B83F0)
#define MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_G__ONFAIL_2_OFFSET UNITYSDK_OFFSET(0x170B8280)

namespace MoleMole
{
	inline static constexpr unsigned int UIDisplayCasePreviewWidgetController___c__DisplayClass13_0_TypeDefinitionIndex = 40255;

	class UIDisplayCasePreviewWidgetController___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDisplayCasePreviewWidgetController* __4__this; // 0x10
		::System::Int32 idx; // 0x18
		::System::UInt32 friendId; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchFriend_b__0(::Class_1_57F7F2BF8C55D6B6* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_57F7F2BF8C55D6B6*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_B__0_OFFSET))(this, info);
		}

		::System::Void _SwitchFriend_b__1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_B__1_OFFSET))(this, _);
		}

		::System::Void _SwitchFriend_g__OnFail_2(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDISPLAYCASEPREVIEWWIDGETCONTROLLER___C__DISPLAYCLASS13_0__SWITCHFRIEND_G__ONFAIL_2_OFFSET))(this, id);
		}
	};
}
