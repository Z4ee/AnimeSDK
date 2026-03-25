#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UINPCWarningTipsContainer_Waypoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_GET_OFFSET UNITYSDK_OFFSET(0xA710880)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_GIVEBACK_OFFSET UNITYSDK_OFFSET(0xA7109B0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_NEW_OFFSET UNITYSDK_OFFSET(0xA711570)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_PRELOAD_OFFSET UNITYSDK_OFFSET(0xA711180)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xA711120)

namespace RPG::Client
{
	inline static constexpr unsigned int UINPCWarningTipsContainer_WaypointPool_TypeDefinitionIndex = 56465;

	class UINPCWarningTipsContainer_WaypointPool : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::RPG::Client::UINPCWarningTipsContainer_Waypoint*>* Waypoints; // 0x10
		::UnityEngine::Object* Prefab; // 0x18
		::System::String* PrefabPath; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL__CTOR_OFFSET))(this);
		}

		::RPG::Client::UINPCWarningTipsContainer_Waypoint* Get(::UnityEngine::Transform* transform)
		{
			return ((::RPG::Client::UINPCWarningTipsContainer_Waypoint*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_GET_OFFSET))(this, transform);
		}

		::System::Void GiveBack(::RPG::Client::UINPCWarningTipsContainer_Waypoint* waypoint)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UINPCWarningTipsContainer_Waypoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_GIVEBACK_OFFSET))(this, waypoint);
		}

		::System::Void Preload(::System::Int32 count, ::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_PRELOAD_OFFSET))(this, count, transform);
		}

		::RPG::Client::UINPCWarningTipsContainer_Waypoint* New(::UnityEngine::Transform* transform)
		{
			return ((::RPG::Client::UINPCWarningTipsContainer_Waypoint*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_NEW_OFFSET))(this, transform);
		}
	};
}
