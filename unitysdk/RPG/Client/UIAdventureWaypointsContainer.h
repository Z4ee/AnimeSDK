#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class AdventureWaypointConfig; }
namespace RPG::Client { class UIAdventureWaypointsSafeZone; }
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0xCB2DED0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xCB2CB60)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_REFRESHWAYPOINTITEM_OFFSET UNITYSDK_OFFSET(0xCB2CDC0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_START_OFFSET UNITYSDK_OFFSET(0xCB2C9D0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_UPDATESAFEZONE_OFFSET UNITYSDK_OFFSET(0xCB2CC00)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB2E190)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__GETARROWROTATION_OFFSET UNITYSDK_OFFSET(0xCB2DC40)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__ONSETWAYPOINTSAFEZONE_OFFSET UNITYSDK_OFFSET(0xCB2DF90)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureWaypointsContainer_TypeDefinitionIndex = 64604;

	class UIAdventureWaypointsContainer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::UIAdventureWaypointsSafeZone* SafeZone; // 0x18
		::UnityEngine::RectTransform* _CanvasRect; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_START_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_ONDESTROY_OFFSET))(this);
		}

		::System::Void UpdateSafeZone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_UPDATESAFEZONE_OFFSET))(this);
		}

		::System::Boolean RefreshWaypointItem(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::RPG::Client::AdventureWaypointConfig* a3, ::System::Single a4, ::UnityEngine::Camera* a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::Client::AdventureWaypointConfig*, ::System::Single, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_REFRESHWAYPOINTITEM_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Single GetDistance(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_GETDISTANCE_OFFSET))(a1, a2);
		}

		::UnityEngine::Quaternion _GetArrowRotation(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__GETARROWROTATION_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetWaypointSafeZone(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__ONSETWAYPOINTSAFEZONE_OFFSET))(this, a1);
		}
	};
}
