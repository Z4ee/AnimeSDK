#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_E40397A507A4393E_1;
namespace MoleMole { class MonoEffectForUI; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIHollowDamnationEliminateWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_DOFADEIN_OFFSET UNITYSDK_OFFSET(0x19F17990)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_DOFADEOUT_OFFSET UNITYSDK_OFFSET(0x19F17830)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_GETPARENTALPHA_OFFSET UNITYSDK_OFFSET(0x19F17FE0)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19F17650)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19F176E0)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F174F0)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19F17B10)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x19F17760)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F18160)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEIN_B__7_0_OFFSET UNITYSDK_OFFSET(0x19F18260)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEIN_B__7_1_OFFSET UNITYSDK_OFFSET(0x19F18270)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEOUT_B__6_0_OFFSET UNITYSDK_OFFSET(0x19F18240)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEOUT_B__6_1_OFFSET UNITYSDK_OFFSET(0x19F18250)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19F18280)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19F18310)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19F183A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDamnationWidgetController_TypeDefinitionIndex = 57080;

	class UIHollowDamnationWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E40397A507A4393E_1* _view; // 0x2C0
		::MoleMole::UIHollowDamnationEliminateWidgetController* parent; // 0x2C8
		::System::Single alpha; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::MonoEffectForUI*>* effects; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void DoFadeOut()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_DOFADEOUT_OFFSET))(this);
		}

		::System::Void DoFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_DOFADEIN_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_1_0D6706375CDAAE8C* bless, ::System::Boolean isInHollow, ::System::Boolean isArpeggio)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, bless, isInHollow, isArpeggio);
		}

		::System::Single GetParentAlpha()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_GETPARENTALPHA_OFFSET))(this);
		}

		::System::Single _DoFadeOut_b__6_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEOUT_B__6_0_OFFSET))(this);
		}

		::System::Void _DoFadeOut_b__6_1(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEOUT_B__6_1_OFFSET))(this, v);
		}

		::System::Single _DoFadeIn_b__7_0()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEIN_B__7_0_OFFSET))(this);
		}

		::System::Void _DoFadeIn_b__7_1(::System::Single v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEIN_B__7_1_OFFSET))(this, v);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
