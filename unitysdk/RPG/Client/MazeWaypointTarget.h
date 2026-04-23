#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class WaypointIdentifier; }
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MAZEWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA87D020)
#define RPG_CLIENT_MAZEWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET UNITYSDK_OFFSET(0xA87CE50)
#define RPG_CLIENT_MAZEWAYPOINTTARGET_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0xA87CD20)
#define RPG_CLIENT_MAZEWAYPOINTTARGET_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xA87CD10)
#define RPG_CLIENT_MAZEWAYPOINTTARGET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xA87CF90)
#define RPG_CLIENT_MAZEWAYPOINTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA87D0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MazeWaypointTarget_TypeDefinitionIndex = 63677;

	class MazeWaypointTarget : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* TargetEntity; // 0x10
		::UnityEngine::GameObject* TargetObject; // 0x18
		::RPG::Client::WaypointIdentifier* WaypointIdentifier; // 0x20
		::RPG::Client::Billboard::BillboardIdentifier* _BillboardIdentifier; // 0x28
		::UnityEngine::Transform* TargetTransform; // 0x30
		::System::UInt32 InstanceID; // 0x38
		::UnityEngine::Vector3 TargetPos; // 0x3C
		::System::Boolean IsGameObject; // 0x48
		::System::UInt32 GroupID; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET__CTOR_OFFSET))(this);
		}

		::RPG::Client::WaypointIdentifier* get_Identifier()
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_GET_IDENTIFIER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_GETTARGETPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetEntityPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_ISVISIBLE_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardIdentifier* GetBillboardIdentifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAZEWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET))(this);
		}
	};
}
