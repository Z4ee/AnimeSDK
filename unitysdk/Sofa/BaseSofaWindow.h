#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/System/Object.h"

class Class_1_1554F99FCC043827;
namespace Sofa { class BaseSofaControl; }
namespace Sofa { class BaseSofaWindow_SofaUIController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_1_534BBA4C76709F67;

#define SOFA_BASESOFAWINDOW_ADDENTRANCEANIMATIONENDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9466D0)
#define SOFA_BASESOFAWINDOW_ADDEXITCALLBACK_OFFSET UNITYSDK_OFFSET(0xB9467A0)
#define SOFA_BASESOFAWINDOW_ASYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0xB946840)
#define SOFA_BASESOFAWINDOW_BINDINCONTROLCLICKEVENT_OFFSET UNITYSDK_OFFSET(0xB946B50)
#define SOFA_BASESOFAWINDOW_BINDINCONTROLPRESSEVENT_OFFSET UNITYSDK_OFFSET(0xB946AE0)
#define SOFA_BASESOFAWINDOW_BINDINCONTROLRELEASEEVENT_OFFSET UNITYSDK_OFFSET(0xB946BC0)
#define SOFA_BASESOFAWINDOW_BINDMOUSEWHEELROLLEVENT_OFFSET UNITYSDK_OFFSET(0xB946A80)
#define SOFA_BASESOFAWINDOW_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB946E10)
#define SOFA_BASESOFAWINDOW_EXIT_OFFSET UNITYSDK_OFFSET(0xB946420)
#define SOFA_BASESOFAWINDOW_GETCONTINUETIME_OFFSET UNITYSDK_OFFSET(0xB946A30)
#define SOFA_BASESOFAWINDOW_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB946C90)
#define SOFA_BASESOFAWINDOW_GET_VIEWTRANSFORM_OFFSET UNITYSDK_OFFSET(0xB946670)
#define SOFA_BASESOFAWINDOW_INITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB946CB0)
#define SOFA_BASESOFAWINDOW_INSTANTIATEOBJECT_OFFSET UNITYSDK_OFFSET(0xB9468C0)
#define SOFA_BASESOFAWINDOW_ISTOPMOST_OFFSET UNITYSDK_OFFSET(0xB946C30)
#define SOFA_BASESOFAWINDOW_SAFEFIND_OFFSET UNITYSDK_OFFSET(0xB947030)
#define SOFA_BASESOFAWINDOW_SETENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xB946740)
#define SOFA_BASESOFAWINDOW_SETNAVIGATIONTARGET_OFFSET UNITYSDK_OFFSET(0xB946940)
#define SOFA_BASESOFAWINDOW_SET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xB946CA0)
#define SOFA_BASESOFAWINDOW_SHOW_OFFSET UNITYSDK_OFFSET(0xB946240)
#define SOFA_BASESOFAWINDOW__ADDCHILD_OFFSET UNITYSDK_OFFSET(0xB9470D0)
#define SOFA_BASESOFAWINDOW__ADDTICK_OFFSET UNITYSDK_OFFSET(0xB9465D0)
#define SOFA_BASESOFAWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0xB947260)
#define SOFA_BASESOFAWINDOW__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xB946FB0)
#define SOFA_BASESOFAWINDOW__ONENTRANCEANIMEND_OFFSET UNITYSDK_OFFSET(0xB9464F0)
#define SOFA_BASESOFAWINDOW__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0xB946550)
#define SOFA_BASESOFAWINDOW__ONINCONTROLEXIT_OFFSET UNITYSDK_OFFSET(0xB946480)
#define SOFA_BASESOFAWINDOW__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xB946F70)
#define SOFA_BASESOFAWINDOW__ONSTARTEXIT_OFFSET UNITYSDK_OFFSET(0xB946FF0)
#define SOFA_BASESOFAWINDOW__ONTICK_OFFSET UNITYSDK_OFFSET(0xB946590)
#define SOFA_BASESOFAWINDOW__REMOVECHILD_OFFSET UNITYSDK_OFFSET(0xB9471B0)
#define SOFA_BASESOFAWINDOW__REMOVETICK_OFFSET UNITYSDK_OFFSET(0xB946620)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaWindow_TypeDefinitionIndex = 44446;

	class BaseSofaWindow : public ::System::Object
	{
	public:
		::Sofa::BaseSofaWindow_SofaUIController* _UIController; // 0x10
		::System::Action* _EntranceAnimEndCallback; // 0x18
		::System::Object* _DataContext; // 0x20
		::Class_1_1554F99FCC043827* _Config; // 0x28
		::System::Collections::Generic::List_1<::Sofa::BaseSofaControl*>* _ChildUIControls; // 0x30
		::System::Single _OpenTime; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void Show(::System::Boolean isAsync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SHOW_OFFSET))(this, isAsync);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_EXIT_OFFSET))(this);
		}

		::System::Void _OnInControlExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONINCONTROLEXIT_OFFSET))(this);
		}

		::System::Void _OnEntranceAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONENTRANCEANIMEND_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONTICK_OFFSET))(this);
		}

		::System::Void _AddTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ADDTICK_OFFSET))(this);
		}

		::System::Void _RemoveTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__REMOVETICK_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ViewTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_GET_VIEWTRANSFORM_OFFSET))(this);
		}

		::System::Void AddEntranceAnimationEndCallback(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_ADDENTRANCEANIMATIONENDCALLBACK_OFFSET))(this, action);
		}

		::System::Void SetEnterCallback(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SETENTERCALLBACK_OFFSET))(this, action);
		}

		::System::Void AddExitCallback(::System::Action* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_ADDEXITCALLBACK_OFFSET))(this, action);
		}

		::System::Void AsyncLoadPrefab(::System::String* path, ::System::Action_1<::UnityEngine::GameObject*>* callback, ::UnityEngine::Transform* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_ASYNCLOADPREFAB_OFFSET))(this, path, callback, parent);
		}

		::UnityEngine::GameObject* InstantiateObject(::UnityEngine::GameObject* original, ::UnityEngine::Transform* parent, ::System::Boolean worldPositionStays)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Boolean))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_INSTANTIATEOBJECT_OFFSET))(this, original, parent, worldPositionStays);
		}

		::System::Void SetNavigationTarget(::UnityEngine::GameObject* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SETNAVIGATIONTARGET_OFFSET))(this, target);
		}

		::System::Int32 GetContinueTime()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_GETCONTINUETIME_OFFSET))(this);
		}

		::System::Void BindMouseWheelRollEvent(::System::Action_1<::System::Single>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDMOUSEWHEELROLLEVENT_OFFSET))(this, callback);
		}

		::System::Void BindInControlPressEvent(::InControl::InputControlType type, ::System::Action_1<::System::Single>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDINCONTROLPRESSEVENT_OFFSET))(this, type, callback);
		}

		::System::Void BindInControlClickEvent(::InControl::InputControlType type, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDINCONTROLCLICKEVENT_OFFSET))(this, type, callback);
		}

		::System::Void BindInControlReleaseEvent(::InControl::InputControlType type, ::System::Action_1<::System::Single>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputControlType, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDINCONTROLRELEASEEVENT_OFFSET))(this, type, callback);
		}

		::System::Boolean IsTopmost(::System::Boolean includeDialog)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_ISTOPMOST_OFFSET))(this, includeDialog);
		}

		::System::Object* get_DataContext()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_GET_DATACONTEXT_OFFSET))(this);
		}

		::System::Void set_DataContext(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SET_DATACONTEXT_OFFSET))(this, value);
		}

		::System::Void InitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_INITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void BindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_BINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnStartExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ONSTARTEXIT_OFFSET))(this);
		}

		::UnityEngine::Transform* SafeFind(::System::String* path, ::System::Boolean outputError)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW_SAFEFIND_OFFSET))(this, path, outputError);
		}

		::System::Void _AddChild(::Sofa::BaseSofaControl* child)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__ADDCHILD_OFFSET))(this, child);
		}

		::System::Void _RemoveChild(::Sofa::BaseSofaControl* child)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFAWINDOW__REMOVECHILD_OFFSET))(this, child);
		}
	};
}
