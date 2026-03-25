#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1B7044A592B17773_13_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10ABE7E0)
#define CLASS_1_1B7044A592B17773_13_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10ABE800)
#define CLASS_1_1B7044A592B17773_13_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x10ABE820)
#define CLASS_1_1B7044A592B17773_13_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x10ABE7F0)
#define CLASS_1_1B7044A592B17773_13_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x10ABE810)
#define CLASS_1_1B7044A592B17773_13_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x10ABE830)
#define CLASS_1_1B7044A592B17773_13__CTOR_OFFSET UNITYSDK_OFFSET(0x10ABE840)

inline static constexpr unsigned int Class_1_1B7044A592B17773_13_TypeDefinitionIndex = 61324;

class Class_1_1B7044A592B17773_13 : public ::System::Object
{
public:
	::System::UInt32 _InstanceID_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x14
	::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_13__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_13_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_13_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_13_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_13_SET_INSTANCEID_OFFSET))(this, value);
	}

	::System::UInt32 get_LittleGameEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_13_GET_LITTLEGAMEENTITYID_OFFSET))(this);
	}

	::System::Void set_LittleGameEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1B7044A592B17773_13_SET_LITTLEGAMEENTITYID_OFFSET))(this, value);
	}
};
