#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_MAPANCHORDEF_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7D6F50)
#define RPG_CLIENT_MAPANCHORDEF_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7D6F70)
#define RPG_CLIENT_MAPANCHORDEF_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA7D6FE0)
#define RPG_CLIENT_MAPANCHORDEF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xA7D6F90)
#define RPG_CLIENT_MAPANCHORDEF_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA7D6FC0)
#define RPG_CLIENT_MAPANCHORDEF_SET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7D6F60)
#define RPG_CLIENT_MAPANCHORDEF_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA7D6F80)
#define RPG_CLIENT_MAPANCHORDEF_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA7D6FF0)
#define RPG_CLIENT_MAPANCHORDEF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xA7D6FB0)
#define RPG_CLIENT_MAPANCHORDEF_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xA7D6FD0)
#define RPG_CLIENT_MAPANCHORDEF__CTOR_OFFSET UNITYSDK_OFFSET(0xA7D7000)

namespace RPG::Client
{
	inline static constexpr unsigned int MapAnchorDef_TypeDefinitionIndex = 57270;

	class MapAnchorDef : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x18
		::System::UInt32 _InstanceID_k__BackingField; // 0x28
		::System::UInt32 _GroupInstanceID_k__BackingField; // 0x2C
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x30

		::System::Void _ctor(::System::UInt32 groupID, ::System::UInt32 instanceID, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF__CTOR_OFFSET))(this, groupID, instanceID, position, rotation, name);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::Void set_GroupInstanceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_GROUPINSTANCEID_OFFSET))(this, value);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_INSTANCEID_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_ROTATION_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_NAME_OFFSET))(this, value);
		}
	};
}
