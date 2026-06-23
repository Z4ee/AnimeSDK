#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_6BC87267F41C82C6_7;
class Class_3_1FE4CD675C5ACADB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_GET_CONTENTROOT_OFFSET UNITYSDK_OFFSET(0x14C1D470)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_INITROW_OFFSET UNITYSDK_OFFSET(0x14C1DA00)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C1D890)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C1D930)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C1D490)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C1D670)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14C1D750)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_RESETVIEW_OFFSET UNITYSDK_OFFSET(0x14C1D9B0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_SET_CONTENTROOT_OFFSET UNITYSDK_OFFSET(0x14C1D480)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C1DE80)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET UNITYSDK_OFFSET(0x14C1DEE0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C1DEF0)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C1DF40)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C1DF80)
#define MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C1DFC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDataFixGameWidgetController_TypeDefinitionIndex = 60898;

	class UIDataFixGameWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_6BC87267F41C82C6_7* _view; // 0x2C0
		::Class_3_1FE4CD675C5ACADB* _model; // 0x2C8
		::UnityEngine::Transform* _ContentRoot_k__BackingField; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ContentRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_GET_CONTENTROOT_OFFSET))(this);
		}

		::System::Void set_ContentRoot(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_SET_CONTENTROOT_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ResetView(::System::Boolean isReal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_RESETVIEW_OFFSET))(this, isReal);
		}

		::System::Void RefreshView(::System::Boolean isReal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, isReal);
		}

		::System::Boolean InitRow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER_INITROW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_0(::System::Boolean win, ::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER__ONUIINIT_B__6_0_OFFSET))(this, win, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDATAFIXGAMEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
