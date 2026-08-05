#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_32A0EFF1A7EE9716;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18858420)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18858430)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188584A0)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18858870)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x188589E0)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18858770)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18858940)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18858540)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18858AE0)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18858AF0)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x18858B90)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18858C20)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18858C50)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18858CF0)
#define MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18858D00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHouseRhythmEntrancePageController_TypeDefinitionIndex = 56659;

	class UIHouseRhythmEntrancePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_32A0EFF1A7EE9716* get__viewModel()
		{
			return ((::Class_2_32A0EFF1A7EE9716*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUSERHYTHMENTRANCEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
