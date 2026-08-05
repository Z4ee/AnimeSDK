#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_5D815FFCA3E848A1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_CLEARSAVEBOTTOMTIPS_OFFSET UNITYSDK_OFFSET(0x1938F480)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x1938F6C0)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1938ECD0)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1938ECE0)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1938ED50)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1938F300)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1938F070)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1938F3E0)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1938EDF0)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1938F7D0)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x1938F7E0)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1938F870)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1938F910)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1938F9A0)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1938F9B0)
#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1938FA70)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaOptPageController_TypeDefinitionIndex = 90305;

	class UIGachaOptPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean _skipNextShowRefresh; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_5D815FFCA3E848A1* get__viewModel()
		{
			return ((::Class_2_5D815FFCA3E848A1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void ClearSaveBottomTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_CLEARSAVEBOTTOMTIPS_OFFSET))(this);
		}

		::UnityEngine::Transform* GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* __base_GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
