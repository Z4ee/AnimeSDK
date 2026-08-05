#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_912CABDA75E684D1.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class Class_2_60638234271CCDB8_26;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x1148E0A0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1148D290)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_HIDEALL_OFFSET UNITYSDK_OFFSET(0x1148D640)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1148D4C0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1148D550)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1148D2A0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1148D2F0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1148D5C0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1148E1D0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER__REFRESHVIEW_G__REFRESHSTATE_7_0_OFFSET UNITYSDK_OFFSET(0x1148DC60)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1148E240)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1148E2D0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1148E2E0)
#define MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1148E2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovMain3DModelController_TypeDefinitionIndex = 42907;

	class UIZenkovMain3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		::Class_2_60638234271CCDB8_26* _view; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void HideAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_HIDEALL_OFFSET))(this);
		}

		::UnityEngine::Transform* GetObject(::System::String* key)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER_GETOBJECT_OFFSET))(this, key);
		}

		::System::Void _RefreshView_g__RefreshState_7_0(::Enum_3_912CABDA75E684D1 buildType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_912CABDA75E684D1))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER__REFRESHVIEW_G__REFRESHSTATE_7_0_OFFSET))(this, buildType);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVMAIN3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
