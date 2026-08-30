#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/BaseRaycaster.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_TUTORIALRAYCASTER_GET_EVENTCAMERA_OFFSET UNITYSDK_OFFSET(0x1B115800)
#define RPG_CLIENT_TUTORIALRAYCASTER_GET_SORTORDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1B115830)
#define RPG_CLIENT_TUTORIALRAYCASTER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1B115890)
#define RPG_CLIENT_TUTORIALRAYCASTER_SETTARGET_OFFSET UNITYSDK_OFFSET(0x1B115840)
#define RPG_CLIENT_TUTORIALRAYCASTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B115A80)

namespace RPG::Client
{
	inline static constexpr unsigned int TutorialRaycaster_TypeDefinitionIndex = 69000;

	class TutorialRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster
	{
	public:
		::UnityEngine::GameObject* OLNPJAIGPJL; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALRAYCASTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Camera* get_eventCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALRAYCASTER_GET_EVENTCAMERA_OFFSET))(this);
		}

		::System::Int32 get_sortOrderPriority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALRAYCASTER_GET_SORTORDERPRIORITY_OFFSET))(this);
		}

		::System::Void SetTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALRAYCASTER_SETTARGET_OFFSET))(this, a1);
		}

		::System::Void Raycast(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TUTORIALRAYCASTER_RAYCAST_OFFSET))(this, a1, a2);
		}
	};
}
