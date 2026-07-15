#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_18_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16D9B570)
#define CLASS_1_97E659ED8D5D259C_18_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x16D9B590)
#define CLASS_1_97E659ED8D5D259C_18_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x16D9B5B0)
#define CLASS_1_97E659ED8D5D259C_18_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16D9B580)
#define CLASS_1_97E659ED8D5D259C_18_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x16D9B5A0)
#define CLASS_1_97E659ED8D5D259C_18_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x16D9B5C0)
#define CLASS_1_97E659ED8D5D259C_18__CTOR_OFFSET UNITYSDK_OFFSET(0x16D9B5D0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_18_TypeDefinitionIndex = 71166;

class Class_1_97E659ED8D5D259C_18 : public ::System::Object
{
public:
	::System::UInt32 _InstanceID_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x14
	::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_LittleGameEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_GET_LITTLEGAMEENTITYID_OFFSET))(this);
	}

	::System::Void set_LittleGameEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_18_SET_LITTLEGAMEENTITYID_OFFSET))(this, a1);
	}
};
