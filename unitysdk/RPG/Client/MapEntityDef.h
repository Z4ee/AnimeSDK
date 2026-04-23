#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityType.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A9C466B0994F2417;
namespace RPG::GameCore { class LevelGraphValueSource; }

#define RPG_CLIENT_MAPENTITYDEF_GET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xA7F2500)
#define RPG_CLIENT_MAPENTITYDEF_GET_GROUPANDINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7D6320)
#define RPG_CLIENT_MAPENTITYDEF_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7F2400)
#define RPG_CLIENT_MAPENTITYDEF_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7F2420)
#define RPG_CLIENT_MAPENTITYDEF_GET_ISLOCAL_OFFSET UNITYSDK_OFFSET(0xA7F2520)
#define RPG_CLIENT_MAPENTITYDEF_GET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA7F2530)
#define RPG_CLIENT_MAPENTITYDEF_GET_LOCALENTITYID_OFFSET UNITYSDK_OFFSET(0xA7F2460)
#define RPG_CLIENT_MAPENTITYDEF_GET_OWNERGROUPDEF_OFFSET UNITYSDK_OFFSET(0xA7F23F0)
#define RPG_CLIENT_MAPENTITYDEF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA7F2480)
#define RPG_CLIENT_MAPENTITYDEF_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA7F24B0)
#define RPG_CLIENT_MAPENTITYDEF_GET_SCALE_OFFSET UNITYSDK_OFFSET(0xA7F24D0)
#define RPG_CLIENT_MAPENTITYDEF_GET_SERVERENTITIYID_OFFSET UNITYSDK_OFFSET(0xA7F2440)
#define RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNPOSITION_OFFSET UNITYSDK_OFFSET(0xA7F2220)
#define RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNROTATION_OFFSET UNITYSDK_OFFSET(0xA7F2280)
#define RPG_CLIENT_MAPENTITYDEF_SETCLASSIFYTYPE_OFFSET UNITYSDK_OFFSET(0xA7F2550)
#define RPG_CLIENT_MAPENTITYDEF_SET_ENTITYTYPE_OFFSET UNITYSDK_OFFSET(0xA7F2510)
#define RPG_CLIENT_MAPENTITYDEF_SET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7F2410)
#define RPG_CLIENT_MAPENTITYDEF_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7F2430)
#define RPG_CLIENT_MAPENTITYDEF_SET_ISNEW_OFFSET UNITYSDK_OFFSET(0xA7F2540)
#define RPG_CLIENT_MAPENTITYDEF_SET_LOCALENTITYID_OFFSET UNITYSDK_OFFSET(0xA7F2470)
#define RPG_CLIENT_MAPENTITYDEF_SET_OWNERGROUPDEF_OFFSET UNITYSDK_OFFSET(0xA7F23E0)
#define RPG_CLIENT_MAPENTITYDEF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA7F24A0)
#define RPG_CLIENT_MAPENTITYDEF_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA7F24C0)
#define RPG_CLIENT_MAPENTITYDEF_SET_SCALE_OFFSET UNITYSDK_OFFSET(0xA7F24F0)
#define RPG_CLIENT_MAPENTITYDEF_SET_SERVERENTITIYID_OFFSET UNITYSDK_OFFSET(0xA7F2450)
#define RPG_CLIENT_MAPENTITYDEF__APPLYGROUPINITOVERRIDEENTITYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xA7F2100)
#define RPG_CLIENT_MAPENTITYDEF__CTOR_OFFSET UNITYSDK_OFFSET(0xA7F2080)
#define RPG_CLIENT_MAPENTITYDEF__TRYGETGROUPINITOVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0xA7F22E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapEntityDef_TypeDefinitionIndex = 57296;

	class MapEntityDef : public ::System::Object
	{
	public:
		::Class_1_A9C466B0994F2417* _OwnerGroupDef_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x18
		::System::UInt32 _GroupInstanceID_k__BackingField; // 0x24
		::System::UInt32 _InstanceID_k__BackingField; // 0x28
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x2C
		::RPG::Client::MapEntityType _EntityType_k__BackingField; // 0x3C
		::System::UInt32 _LocalEntityID_k__BackingField; // 0x40
		::UnityEngine::Vector3 _Scale_k__BackingField; // 0x44
		::System::UInt32 _ServerEntitiyID_k__BackingField; // 0x50
		::System::Boolean _IsNew_k__BackingField; // 0x54

		::System::Void _ctor(::Class_1_A9C466B0994F2417* ownerGroupDef, ::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF__CTOR_OFFSET))(this, ownerGroupDef, groupInstanceID, instanceID, position, rotation, scale);
		}

		::System::Void OverrideBornPosition(::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNPOSITION_OFFSET))(this, position);
		}

		::System::Void OverrideBornRotation(::UnityEngine::Quaternion rot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_OVERRIDEBORNROTATION_OFFSET))(this, rot);
		}

		::System::Void _ApplyGroupInitOverrideEntityTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF__APPLYGROUPINITOVERRIDEENTITYTRANSFORM_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* _TryGetGroupInitOverrideValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF__TRYGETGROUPINITOVERRIDEVALUESOURCE_OFFSET))(this);
		}

		::System::Void set_OwnerGroupDef(::Class_1_A9C466B0994F2417* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_OWNERGROUPDEF_OFFSET))(this, value);
		}

		::Class_1_A9C466B0994F2417* get_OwnerGroupDef()
		{
			return ((::Class_1_A9C466B0994F2417*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_OWNERGROUPDEF_OFFSET))(this);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::Void set_GroupInstanceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_GROUPINSTANCEID_OFFSET))(this, value);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_INSTANCEID_OFFSET))(this, value);
		}

		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> get_GroupAndInstanceID()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_GROUPANDINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_ServerEntitiyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_SERVERENTITIYID_OFFSET))(this);
		}

		::System::Void set_ServerEntitiyID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_SERVERENTITIYID_OFFSET))(this, value);
		}

		::System::UInt32 get_LocalEntityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_LOCALENTITYID_OFFSET))(this);
		}

		::System::Void set_LocalEntityID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_LOCALENTITYID_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_ROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Scale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_SCALE_OFFSET))(this, value);
		}

		::RPG::Client::MapEntityType get_EntityType()
		{
			return ((::RPG::Client::MapEntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ENTITYTYPE_OFFSET))(this);
		}

		::System::Void set_EntityType(::RPG::Client::MapEntityType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapEntityType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_ENTITYTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_IsLocal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ISLOCAL_OFFSET))(this);
		}

		::System::Boolean get_IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_GET_ISNEW_OFFSET))(this);
		}

		::System::Void set_IsNew(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SET_ISNEW_OFFSET))(this, value);
		}

		::System::Void SetClassifyType(::RPG::GameCore::EntityClassifyType t)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityClassifyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPENTITYDEF_SETCLASSIFYTYPE_OFFSET))(this, t);
		}
	};
}
