#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_0D6706375CDAAE8C;
class Class_2_E40397A507A4393E_1;
namespace MoleMole { class MonoEffectForUI; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIHollowDamnationEliminateWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_DOFADEIN_OFFSET UNITYSDK_OFFSET(0x1881E270)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_DOFADEOUT_OFFSET UNITYSDK_OFFSET(0x1881E110)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_GETPARENTALPHA_OFFSET UNITYSDK_OFFSET(0x1881E8C0)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1881DF30)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1881DFC0)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1881DDD0)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1881E3F0)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1881E040)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1881EA40)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEIN_B__7_0_OFFSET UNITYSDK_OFFSET(0x1881EB40)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEIN_B__7_1_OFFSET UNITYSDK_OFFSET(0x1881EB50)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEOUT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1881EB20)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER__DOFADEOUT_B__6_1_OFFSET UNITYSDK_OFFSET(0x1881EB30)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1881EB60)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1881EBF0)
#define MOLEMOLE_UIHOLLOWDAMNATIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1881EC80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDamnationWidgetController_TypeDefinitionIndex = 58329;

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
