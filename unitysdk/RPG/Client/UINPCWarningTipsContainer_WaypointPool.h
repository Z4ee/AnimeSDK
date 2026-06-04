#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UINPCWarningTipsContainer_Waypoint; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_GET_OFFSET UNITYSDK_OFFSET(0xCB751A0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_GIVEBACK_OFFSET UNITYSDK_OFFSET(0xCB752D0)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_NEW_OFFSET UNITYSDK_OFFSET(0xCB75E40)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_PRELOAD_OFFSET UNITYSDK_OFFSET(0xCB75A60)
#define RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0xCB75A00)

namespace RPG::Client
{
	inline static constexpr unsigned int UINPCWarningTipsContainer_WaypointPool_TypeDefinitionIndex = 64630;

	class UINPCWarningTipsContainer_WaypointPool : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<::RPG::Client::UINPCWarningTipsContainer_Waypoint*>* Waypoints; // 0x10
		::System::String* PrefabPath; // 0x18
		::UnityEngine::Object* Prefab; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL__CTOR_OFFSET))(this);
		}

		::RPG::Client::UINPCWarningTipsContainer_Waypoint* Get(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::UINPCWarningTipsContainer_Waypoint*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_GET_OFFSET))(this, a1);
		}

		::System::Void GiveBack(::RPG::Client::UINPCWarningTipsContainer_Waypoint* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UINPCWarningTipsContainer_Waypoint*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_GIVEBACK_OFFSET))(this, a1);
		}

		::System::Void Preload(::System::Int32 a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_PRELOAD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UINPCWarningTipsContainer_Waypoint* New(::UnityEngine::Transform* a1)
		{
			return ((::RPG::Client::UINPCWarningTipsContainer_Waypoint*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UINPCWARNINGTIPSCONTAINER_WAYPOINTPOOL_NEW_OFFSET))(this, a1);
		}
	};
}
