#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_FA28679E575F1833;
namespace DG::Tweening { class Sequence; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_FADEOUTRABBUDDYPOWERCHANGETIPSHANDLE_OFFSET UNITYSDK_OFFSET(0x1578C7B0)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET UNITYSDK_OFFSET(0x1578B5E0)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1578B5F0)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1578B660)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1578BD90)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1578B700)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1578BD20)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1578C800)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER__ONFADEPLAYFINISH_B__9_2_OFFSET UNITYSDK_OFFSET(0x1578C860)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1578C870)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1578C910)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1578C920)
#define MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1578C9C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDepositoryUpTipsWidgetController_TypeDefinitionIndex = 42330;

	class UIRABDepositoryUpTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::DG::Tweening::Sequence* _scroll; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IgnoreFading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_GET_IGNOREFADING_OFFSET))(this);
		}

		::Class_2_FA28679E575F1833* get__viewModel()
		{
			return ((::Class_2_FA28679E575F1833*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void FadeOutRABBuddyPowerChangeTipsHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER_FADEOUTRABBUDDYPOWERCHANGETIPSHANDLE_OFFSET))(this, obj);
		}

		::System::Void _OnFadePlayFinish_b__9_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER__ONFADEPLAYFINISH_B__9_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDEPOSITORYUPTIPSWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}
	};
}
