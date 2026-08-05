#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_48D56DACBE4271BC;
class Class_2_DA7A3C6CAB1741CE;
class Class_2_FDFE69FE7B72463B;
class Class_4_3E4A3C01978F4EAF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_GET_ISTARGETINVIEWPORT_OFFSET UNITYSDK_OFFSET(0x16A62C40)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A62BD0)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x16A62F30)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ISINVIEWPORT_OFFSET UNITYSDK_OFFSET(0x16A640C0)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16A63930)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A63170)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A63750)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUNITSELECTED_OFFSET UNITYSDK_OFFSET(0x16A64B20)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUNITTURNSTART_OFFSET UNITYSDK_OFFSET(0x16A64880)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A64E30)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__INITAUTODISPOSEDATABIND_B__12_0_OFFSET UNITYSDK_OFFSET(0x16A64E90)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__13_0_OFFSET UNITYSDK_OFFSET(0x16A65090)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET UNITYSDK_OFFSET(0x16A652B0)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x16A65340)
#define MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16A653E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyLockOnWidgetController_TypeDefinitionIndex = 88144;

	class UIMonsterFantasyLockOnWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_4_3E4A3C01978F4EAF* _ctx; // 0x2C0
		::UnityEngine::RectTransform* _viewport; // 0x2C8
		::UnityEngine::RectTransform* _rectTrans; // 0x2D0
		::Class_2_FDFE69FE7B72463B* _root; // 0x2D8
		::Class_1_48D56DACBE4271BC* _syncHelper; // 0x2E0
		::UnityEngine::Transform* _lastFollowTarget; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_DA7A3C6CAB1741CE* get__viewModel()
		{
			return ((::Class_2_DA7A3C6CAB1741CE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Boolean get_IsTargetInViewport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_GET_ISTARGETINVIEWPORT_OFFSET))(this);
		}

		::System::Void InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnUnitTurnStart(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUNITTURNSTART_OFFSET))(this, args);
		}

		::System::Void OnUnitSelected(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ONUNITSELECTED_OFFSET))(this, args);
		}

		::System::Boolean IsInViewport(::UnityEngine::Vector3 worldPos, ::UnityEngine::Vector2& calibratedPos)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER_ISINVIEWPORT_OFFSET))(this, worldPos, calibratedPos);
		}

		::System::Void _InitAutoDisposeDataBind_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__INITAUTODISPOSEDATABIND_B__12_0_OFFSET))(this);
		}

		::System::Void _OnCreateViewModel_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER__ONCREATEVIEWMODEL_B__13_0_OFFSET))(this);
		}

		::System::Void __base_InitAutoDisposeDataBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_INITAUTODISPOSEDATABIND_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYLOCKONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
