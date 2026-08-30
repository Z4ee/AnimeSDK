#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class WaypointIdentifier; }
namespace RPG::Client::Billboard { class BillboardIdentifier; }

#define RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_CREATE_OFFSET UNITYSDK_OFFSET(0xD0AC380)
#define RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET UNITYSDK_OFFSET(0xD0AC290)
#define RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET UNITYSDK_OFFSET(0xD0AC170)
#define RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_GETTARGETPOS_OFFSET UNITYSDK_OFFSET(0xD0AC0D0)
#define RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xD0AC0C0)
#define RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0xD0AC250)
#define RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xD0AC650)

namespace RPG::Client
{
	inline static constexpr unsigned int FourRotateVoxelWaypointTarget_TypeDefinitionIndex = 69039;

	class FourRotateVoxelWaypointTarget : public ::System::Object
	{
	public:
		::RPG::Client::WaypointIdentifier* _Identifier_k__BackingField; // 0x10
		::UnityEngine::Vector3 _BornPosition; // 0x18
		::System::UInt32 _LittleGameEntityID; // 0x24
		::System::UInt32 _ContainerGroupID; // 0x28
		::System::UInt32 _ContainerInstanceID; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::Client::WaypointIdentifier* get_Identifier()
		{
			return ((::RPG::Client::WaypointIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_GET_IDENTIFIER_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_GETTARGETPOS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTargetEntityPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_GETTARGETENTITYPOS_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_ISVISIBLE_OFFSET))(this);
		}

		::RPG::Client::Billboard::BillboardIdentifier* GetBillboardIdentifier()
		{
			return ((::RPG::Client::Billboard::BillboardIdentifier*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_GETBILLBOARDIDENTIFIER_OFFSET))(this);
		}

		static ::RPG::Client::FourRotateVoxelWaypointTarget* Create(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::RPG::Client::FourRotateVoxelWaypointTarget*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FOURROTATEVOXELWAYPOINTTARGET_CREATE_OFFSET))(a1, a2, a3);
		}
	};
}
