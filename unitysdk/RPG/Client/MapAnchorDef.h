#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_CLIENT_MAPANCHORDEF_GET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0x174CB0C0)
#define RPG_CLIENT_MAPANCHORDEF_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x174CB0E0)
#define RPG_CLIENT_MAPANCHORDEF_GET_NAME_OFFSET UNITYSDK_OFFSET(0x174CB150)
#define RPG_CLIENT_MAPANCHORDEF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x174CB100)
#define RPG_CLIENT_MAPANCHORDEF_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x174CB130)
#define RPG_CLIENT_MAPANCHORDEF_SET_GROUPINSTANCEID_OFFSET UNITYSDK_OFFSET(0x174CB0D0)
#define RPG_CLIENT_MAPANCHORDEF_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x174CB0F0)
#define RPG_CLIENT_MAPANCHORDEF_SET_NAME_OFFSET UNITYSDK_OFFSET(0x174CB160)
#define RPG_CLIENT_MAPANCHORDEF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x174CB120)
#define RPG_CLIENT_MAPANCHORDEF_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0x174CB140)
#define RPG_CLIENT_MAPANCHORDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x174CB170)

namespace RPG::Client
{
	inline static constexpr unsigned int MapAnchorDef_TypeDefinitionIndex = 62161;

	class MapAnchorDef : public ::System::Object
	{
	public:
		::System::String* _Name_k__BackingField; // 0x10
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x18
		::System::UInt32 _GroupInstanceID_k__BackingField; // 0x24
		::System::UInt32 _InstanceID_k__BackingField; // 0x28
		::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 get_GroupInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_GROUPINSTANCEID_OFFSET))(this);
		}

		::System::Void set_GroupInstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_GROUPINSTANCEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_ROTATION_OFFSET))(this);
		}

		::System::Void set_Rotation(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_ROTATION_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPANCHORDEF_SET_NAME_OFFSET))(this, a1);
		}
	};
}
