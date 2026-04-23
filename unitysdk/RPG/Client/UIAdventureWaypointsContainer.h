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

#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_GETDISTANCE_OFFSET UNITYSDK_OFFSET(0xB3CD500)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB3CC1D0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_REFRESHWAYPOINTITEM_OFFSET UNITYSDK_OFFSET(0xB3CC400)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_START_OFFSET UNITYSDK_OFFSET(0xB3CC050)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_UPDATESAFEZONE_OFFSET UNITYSDK_OFFSET(0xB3CC240)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3CD7C0)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__GETARROWROTATION_OFFSET UNITYSDK_OFFSET(0xB3CD270)
#define RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__ONSETWAYPOINTSAFEZONE_OFFSET UNITYSDK_OFFSET(0xB3CD5C0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdventureWaypointsContainer_TypeDefinitionIndex = 63683;

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

		::System::Boolean RefreshWaypointItem(::UnityEngine::Transform* wpTrans, ::UnityEngine::Transform* arrowTrans, ::RPG::Client::AdventureWaypointConfig* wpConfig, ::System::Single whRatio, ::UnityEngine::Camera* camera, ::System::Boolean isBillboard)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::RPG::Client::AdventureWaypointConfig*, ::System::Single, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_REFRESHWAYPOINTITEM_OFFSET))(this, wpTrans, arrowTrans, wpConfig, whRatio, camera, isBillboard);
		}

		static ::System::Single GetDistance(::UnityEngine::Vector3 posX, ::UnityEngine::Vector3 posY)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER_GETDISTANCE_OFFSET))(posX, posY);
		}

		::UnityEngine::Quaternion _GetArrowRotation(::UnityEngine::Vector3 screenPos, ::System::Single whRatio)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__GETARROWROTATION_OFFSET))(this, screenPos, whRatio);
		}

		::System::Void _OnSetWaypointSafeZone(::System::Object* userParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADVENTUREWAYPOINTSCONTAINER__ONSETWAYPOINTSAFEZONE_OFFSET))(this, userParam);
		}
	};
}
