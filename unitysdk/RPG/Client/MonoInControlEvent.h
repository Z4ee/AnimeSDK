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

#define RPG_CLIENT_MONOINCONTROLEVENT_ADDCOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x18C4B520)
#define RPG_CLIENT_MONOINCONTROLEVENT_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x18C4F740)
#define RPG_CLIENT_MONOINCONTROLEVENT_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0x18C4F810)
#define RPG_CLIENT_MONOINCONTROLEVENT_GET_OFFSET UNITYSDK_OFFSET(0x18C4C910)
#define RPG_CLIENT_MONOINCONTROLEVENT_HASCOMBOACTIONWASRELEASEDORLEAVING_OFFSET UNITYSDK_OFFSET(0x18C4B400)
#define RPG_CLIENT_MONOINCONTROLEVENT_INIT_OFFSET UNITYSDK_OFFSET(0x18C4CA00)
#define RPG_CLIENT_MONOINCONTROLEVENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18C4F580)
#define RPG_CLIENT_MONOINCONTROLEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18C4F4E0)
#define RPG_CLIENT_MONOINCONTROLEVENT_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x18C4F520)
#define RPG_CLIENT_MONOINCONTROLEVENT_REMOVECOMBOCONTROL_OFFSET UNITYSDK_OFFSET(0x18C4B690)
#define RPG_CLIENT_MONOINCONTROLEVENT_SPAWNED_OFFSET UNITYSDK_OFFSET(0x18C4F700)
#define RPG_CLIENT_MONOINCONTROLEVENT_UPDATE_OFFSET UNITYSDK_OFFSET(0x18C4CA50)
#define RPG_CLIENT_MONOINCONTROLEVENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C4F830)
#define RPG_CLIENT_MONOINCONTROLEVENT__CLEAR_OFFSET UNITYSDK_OFFSET(0x18C4F650)
#define RPG_CLIENT_MONOINCONTROLEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18C4F820)
#define RPG_CLIENT_MONOINCONTROLEVENT__ISCANNAVIGATION_OFFSET UNITYSDK_OFFSET(0x18C4F300)
#define RPG_CLIENT_MONOINCONTROLEVENT__ISCANTONEXTZOOM_OFFSET UNITYSDK_OFFSET(0x18C4DE20)
#define RPG_CLIENT_MONOINCONTROLEVENT__ISCANTOPREVZOOM_OFFSET UNITYSDK_OFFSET(0x18C4E5D0)
#define RPG_CLIENT_MONOINCONTROLEVENT__ISCANTOZOOM_OFFSET UNITYSDK_OFFSET(0x18C4EEE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoInControlEvent_TypeDefinitionIndex = 58606;

	class MonoInControlEvent : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_InControlEventUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(MonoInControlEvent_TypeDefinitionIndex)->GetStaticField(0xED80);
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

		static ::RPG::Client::MonoInControlEvent* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::MonoInControlEvent*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_GET_OFFSET))(a1);
		}

		::System::Void Init(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_INIT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_UPDATE_OFFSET))(this);
		}

		::System::Boolean _IsCanToZoom(::InControl::InputControlType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__ISCANTOZOOM_OFFSET))(this, a1);
		}

		::System::Boolean _IsCanToNextZoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__ISCANTONEXTZOOM_OFFSET))(this);
		}

		::System::Boolean _IsCanToPrevZoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__ISCANTOPREVZOOM_OFFSET))(this);
		}

		::System::Boolean _IsCanNavigation(::InControl::InputControlType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::InControl::InputControlType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT__ISCANNAVIGATION_OFFSET))(this, a1);
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

		::System::Void AddComboControl(::RPG::Client::MonoInControlButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInControlButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_ADDCOMBOCONTROL_OFFSET))(this, a1);
		}

		::System::Void RemoveComboControl(::RPG::Client::MonoInControlButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoInControlButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOINCONTROLEVENT_REMOVECOMBOCONTROL_OFFSET))(this, a1);
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
