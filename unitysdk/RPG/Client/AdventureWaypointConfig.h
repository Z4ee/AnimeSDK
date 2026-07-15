#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureWaypointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IWayPointTarget; }
namespace System { class String; }

#define RPG_CLIENT_ADVENTUREWAYPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x182D6A80)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureWaypointConfig_TypeDefinitionIndex = 66002;

	class AdventureWaypointConfig : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::IWayPointTarget* Target; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::UInt64 CreateTime; // 0x28
		::System::Single ShowRangeMin; // 0x30
		::RPG::Client::AdventureWaypointType WaypointType; // 0x34
		::System::Single ShowRangeMax; // 0x38
		::System::Boolean IsTeleport; // 0x3C
		::System::Boolean IsNew; // 0x3D
		::System::Boolean IsInMinRange; // 0x3E
		::UnityEngine::Vector3 Offset; // 0x40
		::System::Single ToShowAnimTime; // 0x4C
		::UnityEngine::Vector2 Offset2D; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREWAYPOINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
