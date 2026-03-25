#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1B7044A592B17773_12_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x89C8390)
#define CLASS_1_1B7044A592B17773_12_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x89C83B0)
#define CLASS_1_1B7044A592B17773_12_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x89C83A0)
#define CLASS_1_1B7044A592B17773_12_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x89C83C0)
#define CLASS_1_1B7044A592B17773_12__CTOR_OFFSET UNITYSDK_OFFSET(0x89C83D0)

inline static constexpr unsigned int Class_1_1B7044A592B17773_12_TypeDefinitionIndex = 61322;

class Class_1_1B7044A592B17773_12 : public ::System::Object
{
public:
	::System::UInt32 _GroupID_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_12__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_12_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_12_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_12_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_12_SET_INSTANCEID_OFFSET))(this, value);
	}
};
