#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDoubleElitePageController; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17F891B0)
#define MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__0_OFFSET UNITYSDK_OFFSET(0x17F891C0)
#define MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__1_OFFSET UNITYSDK_OFFSET(0x17F89280)
#define MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__2_OFFSET UNITYSDK_OFFSET(0x17F89410)
#define MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__3_OFFSET UNITYSDK_OFFSET(0x17F89430)
#define MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__5_OFFSET UNITYSDK_OFFSET(0x17F89450)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleElitePageController___c__DisplayClass18_0_TypeDefinitionIndex = 47227;

	class UIDoubleElitePageController___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDoubleElitePageController* __4__this; // 0x10
		::System::Int32 initSelectItemIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__0_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__1_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__2_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__3_OFFSET))(this, args);
		}

		::System::Void _OnUIOpen_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEELITEPAGECONTROLLER___C__DISPLAYCLASS18_0__ONUIOPEN_B__5_OFFSET))(this);
		}
	};
}
