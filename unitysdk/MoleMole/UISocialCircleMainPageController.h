#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_B703A6361B6C6F93;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x15E8FA20)
#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15E8F8E0)
#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15E8F8F0)
#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15E8F960)
#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E8FAC0)
#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E8FCA0)
#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER___BASE_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x15E8FCB0)
#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x15E8FD40)
#define MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15E8FDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleMainPageController_TypeDefinitionIndex = 49056;

	class UISocialCircleMainPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_B703A6361B6C6F93* get__viewModel()
		{
			return ((::Class_2_B703A6361B6C6F93*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::UnityEngine::Transform* GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::UnityEngine::Transform* __base_GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER___BASE_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}
	};
}
