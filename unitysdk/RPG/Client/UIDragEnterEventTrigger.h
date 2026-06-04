#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class UIDragEnterEventTrigger_InnerAreaInfo; }
namespace System { class Object; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ADDAREA_OFFSET UNITYSDK_OFFSET(0xCB43B40)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_BINDDRAGENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xCB43DC0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCB43E60)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCB43E10)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xCB43F70)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__CANDRAG_OFFSET UNITYSDK_OFFSET(0xCB43EB0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB44D20)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__ENDDRAG_OFFSET UNITYSDK_OFFSET(0xCB44160)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__ISLINESEGMENTSINTERSECT_OFFSET UNITYSDK_OFFSET(0xCB44B20)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__REACHTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xCB441B0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__STARTDRAG_OFFSET UNITYSDK_OFFSET(0xCB44240)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__TRIGGERDRAGENTER_OFFSET UNITYSDK_OFFSET(0xCB44AB0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0xCB44580)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER___ISLINESEGMENTSINTERSECT_G__CROSSPRODUCT_11_0_OFFSET UNITYSDK_OFFSET(0xCB44CD0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragEnterEventTrigger_TypeDefinitionIndex = 68226;

	class UIDragEnterEventTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single StartDragThreshold; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::UIDragEnterEventTrigger_InnerAreaInfo*>* _AreaInfoList; // 0x20
		::System::Action_1<::System::Object*>* _OnDragEnter; // 0x28
		::System::Nullable_1<::UnityEngine::Vector2> _LastMousePosition; // 0x30
		::System::Boolean _IsDragging; // 0x3C
		::System::Type* _DragEventType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void AddArea(::UnityEngine::GameObject* a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ADDAREA_OFFSET))(this, a1, a2);
		}

		::System::Void BindDragEnterCallback(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_BINDDRAGENTERCALLBACK_OFFSET))(this, a1);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean _CanDrag()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__CANDRAG_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_UPDATE_OFFSET))(this);
		}

		::System::Void _EndDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__ENDDRAG_OFFSET))(this);
		}

		::System::Void _StartDrag(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__STARTDRAG_OFFSET))(this, a1);
		}

		::System::Void _UpdateDrag(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__UPDATEDRAG_OFFSET))(this, a1);
		}

		::System::Void _TriggerDragEnter(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__TRIGGERDRAGENTER_OFFSET))(this, a1);
		}

		static ::System::Boolean _IsLineSegmentsIntersect(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__ISLINESEGMENTSINTERSECT_OFFSET))(a1, a2, a3, a4);
		}

		::System::Boolean _ReachThreshold(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__REACHTHRESHOLD_OFFSET))(this, a1, a2);
		}

		static ::System::Single __IsLineSegmentsIntersect_g__CrossProduct_11_0(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER___ISLINESEGMENTSINTERSECT_G__CROSSPRODUCT_11_0_OFFSET))(a1, a2, a3);
		}
	};
}
