#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskVoid.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_F1797C052F758016;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_BINDDATA_OFFSET UNITYSDK_OFFSET(0x11BEBF70)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x11BEB5F0)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11BEB600)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x11BEC390)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11BEBC00)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11BEC2F0)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11BEBCC0)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11BEB670)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11BEB700)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_PLAYINNERHIDEANIM_OFFSET UNITYSDK_OFFSET(0x11BEC680)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_PLAYINNERSHOWANIM_OFFSET UNITYSDK_OFFSET(0x11BEC550)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x11BEC7D0)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER__PLAYINNERHIDEANIM_OFFSET UNITYSDK_OFFSET(0x11BEC740)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER__PLAYINNERSHOWANIM_OFFSET UNITYSDK_OFFSET(0x11BEC600)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONACTIVECHANGED_OFFSET UNITYSDK_OFFSET(0x11BEC7E0)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x11BEC870)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x11BEC910)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x11BEC9D0)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x11BEC9E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZipLineHintChildWindowController_TypeDefinitionIndex = 52729;

	class UIZipLineHintChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Threading::CancellationTokenSource* _source; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_F1797C052F758016* get__viewModel()
		{
			return ((::Class_2_F1797C052F758016*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void BindData(::System::UInt32 handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_BINDDATA_OFFSET))(this, handle);
		}

		::System::Void OnLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONLATEUPDATE_OFFSET))(this);
		}

		::System::Void OnActiveChanged(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_ONACTIVECHANGED_OFFSET))(this, active);
		}

		::System::Void PlayInnerShowAnim(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_PLAYINNERSHOWANIM_OFFSET))(this, onFinish);
		}

		::System::Void PlayInnerHideAnim(::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER_PLAYINNERHIDEANIM_OFFSET))(this, onFinish);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid _PlayInnerShowAnim(::System::Action* onFinish)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER__PLAYINNERSHOWANIM_OFFSET))(this, onFinish);
		}

		::Cysharp::Threading::Tasks::UniTaskVoid _PlayInnerHideAnim(::System::Action* onFinish)
		{
			return ((::Cysharp::Threading::Tasks::UniTaskVoid(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER__PLAYINNERHIDEANIM_OFFSET))(this, onFinish);
		}

		::System::Void __base_OnActiveChanged(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONACTIVECHANGED_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
