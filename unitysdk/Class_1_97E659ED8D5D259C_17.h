#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_17_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16886A40)
#define CLASS_1_97E659ED8D5D259C_17_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x16886A60)
#define CLASS_1_97E659ED8D5D259C_17_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x16886A50)
#define CLASS_1_97E659ED8D5D259C_17_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x16886A70)
#define CLASS_1_97E659ED8D5D259C_17__CTOR_OFFSET UNITYSDK_OFFSET(0x16886A80)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_17_TypeDefinitionIndex = 71164;

class Class_1_97E659ED8D5D259C_17 : public ::System::Object
{
public:
	::System::UInt32 _InstanceID_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_17__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_17_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_17_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_17_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_17_SET_INSTANCEID_OFFSET))(this, a1);
	}
};
