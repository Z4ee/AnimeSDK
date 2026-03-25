#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputControlType.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class MonoInControlButton; }
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOINCONTROLEVENT_ADDCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x9D08C30)
#define RPG_CLIENT_MONOINCONTROLEVENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x9D0CC80)
#define RPG_CLIENT_MONOINCONTROLEVENT_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x9D0CD50)
#define RPG_CLIENT_MONOINCONTROLEVENT_GET_OFFSET UNITYSDK_OFFSET(0x9D0A030)
#define RPG_CLIENT_MONOINCONTROLEVENT_HASCOMBOACTIONWASRELEASEDORLEAVING_OFFSET UNITYSDK_OFFSET(0x9D08AE0)
#define RPG_CLIENT_MONOINCONTROLEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x9D0A120)
#define RPG_CLIENT_MONOINCONTROLEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9D0CAC0)
#define RPG_CLIENT_MONOINCONTROLEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9D0CA20)
#define RPG_CLIENT_MONOINCONTROLEVENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x9D0CA60)
#define RPG_CLIENT_MONOINCONTROLEVENT_REMOVECOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x9D08DA0)
#define RPG_CLIENT_MONOINCONTROLEVENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x9D0CC40)
#define RPG_CLIENT_MONOINCONTROLEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x9D0A170)
#define RPG_CLIENT_MONOINCONTROLEVENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D0CD70)
#define RPG_CLIENT_MONOINCONTROLEVENT__CLEAR_OFFSET UNITYSDK_OFFSET(0x9D0CB90)
#define RPG_CLIENT_MONOINCONTROLEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x9D0CD60)
#define RPG_CLIENT_MONOINCONTROLEVENT__ISCANNAVIGATION_OFFSET UNITYSDK_OFFSET(0x9D0C840)
#define RPG_CLIENT_MONOINCONTROLEVENT__ISCANTONEXTZOOM_OFFSET UNITYSDK_OFFSET(0x9D0B690)
#define RPG_CLIENT_MONOINCONTROLEVENT__ISCANTOPREVZOOM_OFFSET UNITYSDK_OFFSET(0x9D0BCB0)
#define RPG_CLIENT_MONOINCONTROLEVENT__ISCANTOZOOM_OFFSET UNITYSDK_OFFSET(0x9D0C420)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlEvent_TypeDefinitionIndex = 49747;

	class MonoInControlEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_InControlEventUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(MonoInControlEvent_TypeDefinitionIndex)->GetStaticField(0x11300);
		}
		::System::Collections::Generic::List_1<::RPG::Client::MonoInControlTip*>* _MonoInControlTipList; // 0x18
		::System::Boolean _IsCurrentClick; // 0x20
		::RPG::Client::UIController* _Controller; // 0x28
		::System::Single _LeftStickX; // 0x30
		::System::Single _LeftStickY; // 0x34
		::UnityEngine::GameObject* _SelectedObject; // 0x38
		::System::Int32 _LastActiveCount; // 0x40
		::System::String* _MouseScrollWheel; // 0x48
		::System::Collections::Generic::HashSet_1<::RPG::Client::MonoInControlButton*>* _ComboControls; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__CCTOR_OFFSET))();
		}

		static ::RPG::Client::MonoInControlEvent* Get(::UnityEngine::Transform* target)
		{
			return ((::RPG::Client::MonoInControlEvent*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_GET_OFFSET))(target);
		}

		::System::Void Init(::RPG::Client::UIController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_INIT_OFFSET))(this, controller);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_UPDATE_OFFSET))(this);
		}

		::System::Boolean _IsCanToZoom(::InControl::InputControlType inputControlType)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__ISCANTOZOOM_OFFSET))(this, inputControlType);
		}

		::System::Boolean _IsCanToNextZoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__ISCANTONEXTZOOM_OFFSET))(this);
		}

		::System::Boolean _IsCanToPrevZoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__ISCANTOPREVZOOM_OFFSET))(this);
		}

		::System::Boolean _IsCanNavigation(::InControl::InputControlType inputControlType)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__ISCANNAVIGATION_OFFSET))(this, inputControlType);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__CLEAR_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_DESPAWNED_OFFSET))(this);
		}

		::System::Void AddComboControl(::RPG::Client::MonoInControlButton* control)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInControlButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_ADDCOMBOCONTROL_OFFSET))(this, control);
		}

		::System::Void RemoveComboControl(::RPG::Client::MonoInControlButton* control)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInControlButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_REMOVECOMBOCONTROL_OFFSET))(this, control);
		}

		::System::Boolean HasComboActionWasReleasedOrLeaving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_HASCOMBOACTIONWASRELEASEDORLEAVING_OFFSET))(this);
		}

		::RPG::Client::UIController* get_Controller()
		{
			return ((::RPG::Client::UIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_GET_CONTROLLER_OFFSET))(this);
		}
	};
}
