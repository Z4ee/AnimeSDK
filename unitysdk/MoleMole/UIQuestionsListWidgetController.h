#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1129FC54D000F956;
class Class_2_719AB4D2FEFA4E3C;
class Class_2_D87A2A277909F333;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET UNITYSDK_OFFSET(0x188616C0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18861A80)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18862B50)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSELECTSTAGE_OFFSET UNITYSDK_OFFSET(0x18862C60)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET UNITYSDK_OFFSET(0x18861950)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18861C70)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18861B10)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18861740)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18861A10)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_STAGECOMPARISON_OFFSET UNITYSDK_OFFSET(0x18862EC0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x188628B0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18862F50)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18863030)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x188630C0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18863150)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x188631F0)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18863280)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18863310)
#define MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET UNITYSDK_OFFSET(0x188633A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsListWidgetController_TypeDefinitionIndex = 86754;

	class UIQuestionsListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1129FC54D000F956* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_2_719AB4D2FEFA4E3C*>* _stageList; // 0x2C8
		::Class_2_D87A2A277909F333* _model; // 0x2D0
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* activityRewardBtn; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::MoleMole::UIQuestionsAnswerPageController* get_parentController()
		{
			return ((::MoleMole::UIQuestionsAnswerPageController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_GET_PARENTCONTROLLER_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSetCreateFunc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSETCREATEFUNC_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32& selectIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, gamepadModule, selectIndex);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnSelectStage(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_ONSELECTSTAGE_OFFSET))(this, index);
		}

		::System::Int32 StageComparison(::Class_2_719AB4D2FEFA4E3C* x, ::Class_2_719AB4D2FEFA4E3C* y)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_719AB4D2FEFA4E3C*, ::Class_2_719AB4D2FEFA4E3C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER_STAGECOMPARISON_OFFSET))(this, x, y);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Boolean __base_TryOverrideSelectOnFocus(::MoleMole::MonoGamepadModule* P0, ::System::Int32& P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSLISTWIDGETCONTROLLER___BASE_TRYOVERRIDESELECTONFOCUS_OFFSET))(this, P0, P1);
		}
	};
}
