#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A1EDFD8801F68886;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class WaypointIdentifier; }
namespace RPG::Client::Billboard { class BillboardIdentifier; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_CREATE_OFFSET UNITYSDK_OFFSET(0xD09CD80)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xD09CBC0)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET UNITYSDK_OFFSET(0xD09C980)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0xD09C5F0)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xD09C5E0)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__BORNPOSITION_OFFSET UNITYSDK_OFFSET(0xD09C910)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__GAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0xD09C810)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0xD09C890)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xD09CB80)
#define RPG_CLIENT_FIVEDIMWAYPOINTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xD09CEB0)

namespace RPG::Client
{
	inline static constexpr unsigned int FiveDimWaypointTarget_TypeDefinitionIndex = 69038;

	class FiveDimWaypointTarget : public ::System::Object
	{
	public:
		::Class_1_A1EDFD8801F68886* _FiveDimEntityCheatSheet; // 0x10
		::RPG::Client::WaypointIdentifier* _Identifier_k__BackingField; // 0x18
		::UnityEngine::Transform* _TargetTransform; // 0x20
		::System::UInt32 _ContainerInstanceID; // 0x28
		::System::UInt32 _ContainerGroupID; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::Class_1_A1EDFD8801F68886* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_A1EDFD8801F68886*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::WaypointIdentifier* get_Identifier()
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET_IDENTIFIER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETTARGETPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetEntityPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_ISVISIBLE_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardIdentifier* GetBillboardIdentifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET))(this);
		}

		static ::RPG::Client::FiveDimWaypointTarget* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::FiveDimWaypointTarget*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::UInt32 get__LittleGameEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__LITTLEGAMEENTITYID_OFFSET))(this);
		}

		::UnityEngine::Vector3 get__BornPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__BORNPOSITION_OFFSET))(this);
		}

		::RPG::Client::FiveDimGameInstance* get__GameInstance()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FIVEDIMWAYPOINTTARGET_GET__GAMEINSTANCE_OFFSET))(this);
		}
	};
}
