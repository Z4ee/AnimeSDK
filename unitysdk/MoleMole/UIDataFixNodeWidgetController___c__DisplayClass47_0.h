#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D0F2373931CC685D_1.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIDataFixNodeWidgetController; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18045240)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_B__6_OFFSET UNITYSDK_OFFSET(0x180476D0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_B__7_OFFSET UNITYSDK_OFFSET(0x18047720)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__HASCOLORCHANGED_4_OFFSET UNITYSDK_OFFSET(0x18045CE0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETCOLOR_2_OFFSET UNITYSDK_OFFSET(0x18045E30)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETENDSTATE_5_OFFSET UNITYSDK_OFFSET(0x18046C90)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETNODECOLOR_1_OFFSET UNITYSDK_OFFSET(0x18045FE0)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETNULLCOLOR_0_OFFSET UNITYSDK_OFFSET(0x18045250)
#define MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETUNCONNECTCOLOR_3_OFFSET UNITYSDK_OFFSET(0x18046AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixNodeWidgetController___c__DisplayClass47_0_TypeDefinitionIndex = 50800;

	class UIDataFixNodeWidgetController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::MoleMole::UIDataFixNodeWidgetController* __4__this; // 0x10
		::Enum_3_D0F2373931CC685D_1 flowDir; // 0x18
		::System::Single speed; // 0x1C
		::System::Boolean needAnim; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetTermColor_g__SetNullColor_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETNULLCOLOR_0_OFFSET))(this);
		}

		::System::Boolean _SetTermColor_g__SetNodeColor_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETNODECOLOR_1_OFFSET))(this);
		}

		::System::Boolean _SetTermColor_g__SetColor_2(::UnityEngine::UI::Image* img, ::System::Int32 c)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETCOLOR_2_OFFSET))(this, img, c);
		}

		::System::Boolean _SetTermColor_g__SetUnconnectColor_3(::UnityEngine::UI::Image* img, ::System::Int32 c)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETUNCONNECTCOLOR_3_OFFSET))(this, img, c);
		}

		::System::Boolean _SetTermColor_g__HasColorChanged_4(::UnityEngine::UI::Image* img, ::System::Int32 newColor, ::System::Boolean isConnect)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__HASCOLORCHANGED_4_OFFSET))(this, img, newColor, isConnect);
		}

		::System::Void _SetTermColor_g__SetEndState_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_G__SETENDSTATE_5_OFFSET))(this);
		}

		::System::Single _SetTermColor_b__6()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_B__6_OFFSET))(this);
		}

		::System::Void _SetTermColor_b__7(::System::Single x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXNODEWIDGETCONTROLLER___C__DISPLAYCLASS47_0__SETTERMCOLOR_B__7_OFFSET))(this, x);
		}
	};
}
