#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_A0E178FC9445316D_1_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x13611960)
#define CLASS_1_A0E178FC9445316D_1_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x13611980)
#define CLASS_1_A0E178FC9445316D_1_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x13611930)
#define CLASS_1_A0E178FC9445316D_1_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x13611970)
#define CLASS_1_A0E178FC9445316D_1_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x13611990)
#define CLASS_1_A0E178FC9445316D_1_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x13611950)
#define CLASS_1_A0E178FC9445316D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x136119A0)

inline static constexpr unsigned int Class_1_A0E178FC9445316D_1_TypeDefinitionIndex = 69642;

class Class_1_A0E178FC9445316D_1 : public ::System::Object
{
public:
	::System::UInt32 _GroupID_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x14
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_1__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_1_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_1_SET_POSITION_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_1_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_1_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_1_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A0E178FC9445316D_1_SET_INSTANCEID_OFFSET))(this, a1);
	}
};
