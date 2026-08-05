#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_07DBFDAAE3D530EE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x18875620)
#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18875610)
#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x188756C0)
#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18875730)
#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x188757F0)
#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18875AC0)
#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER___BASE_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0x18875AD0)
#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x18875B60)
#define MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18875C00)

namespace MoleMole
{
	inline static constexpr unsigned int UISocialCircleManagePageController_TypeDefinitionIndex = 51773;

	class UISocialCircleManagePageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::Class_2_07DBFDAAE3D530EE* get__viewModel()
		{
			return ((::Class_2_07DBFDAAE3D530EE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::UnityEngine::Transform* __base_GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER___BASE_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISOCIALCIRCLEMANAGEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
