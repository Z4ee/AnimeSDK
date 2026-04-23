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

#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ADDAREA_OFFSET UNITYSDK_OFFSET(0xB3E2A40)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_BINDDRAGENTERCALLBACK_OFFSET UNITYSDK_OFFSET(0xB3E2C40)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB3E2CE0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB3E2C90)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0xB3E2DF0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__CANDRAG_OFFSET UNITYSDK_OFFSET(0xB3E2D30)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E3BD0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__ENDDRAG_OFFSET UNITYSDK_OFFSET(0xB3E2FD0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__ISLINESEGMENTSINTERSECT_OFFSET UNITYSDK_OFFSET(0xB3E39B0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__REACHTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xB3E3020)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__STARTDRAG_OFFSET UNITYSDK_OFFSET(0xB3E30B0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__TRIGGERDRAGENTER_OFFSET UNITYSDK_OFFSET(0xB3E3950)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__UPDATEDRAG_OFFSET UNITYSDK_OFFSET(0xB3E33F0)
#define RPG_CLIENT_UIDRAGENTEREVENTTRIGGER___ISLINESEGMENTSINTERSECT_G__CROSSPRODUCT_11_0_OFFSET UNITYSDK_OFFSET(0xB3E3B80)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragEnterEventTrigger_TypeDefinitionIndex = 67274;

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

		::System::Void AddArea(::UnityEngine::GameObject* gameObject, ::System::Object* userObjectData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_ADDAREA_OFFSET))(this, gameObject, userObjectData);
		}

		::System::Void BindDragEnterCallback(::System::Action_1<::System::Object*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER_BINDDRAGENTERCALLBACK_OFFSET))(this, callback);
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

		::System::Void _StartDrag(::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__STARTDRAG_OFFSET))(this, position);
		}

		::System::Void _UpdateDrag(::UnityEngine::Vector2 mousePosition)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__UPDATEDRAG_OFFSET))(this, mousePosition);
		}

		::System::Void _TriggerDragEnter(::System::Object* userObjectData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__TRIGGERDRAGENTER_OFFSET))(this, userObjectData);
		}

		static ::System::Boolean _IsLineSegmentsIntersect(::UnityEngine::Vector2 line1Start, ::UnityEngine::Vector2 line1End, ::UnityEngine::Vector2 line2Start, ::UnityEngine::Vector2 line2End)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__ISLINESEGMENTSINTERSECT_OFFSET))(line1Start, line1End, line2Start, line2End);
		}

		::System::Boolean _ReachThreshold(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER__REACHTHRESHOLD_OFFSET))(this, start, end);
		}

		static ::System::Single __IsLineSegmentsIntersect_g__CrossProduct_11_0(::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::UnityEngine::Vector2 p3)
		{
			return ((::System::Single(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGENTEREVENTTRIGGER___ISLINESEGMENTSINTERSECT_G__CROSSPRODUCT_11_0_OFFSET))(p1, p2, p3);
		}
	};
}
