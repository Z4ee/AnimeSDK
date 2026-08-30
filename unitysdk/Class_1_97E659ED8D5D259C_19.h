#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_19_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x17E26270)
#define CLASS_1_97E659ED8D5D259C_19_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x17E26290)
#define CLASS_1_97E659ED8D5D259C_19_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x17E26280)
#define CLASS_1_97E659ED8D5D259C_19_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x17E262A0)
#define CLASS_1_97E659ED8D5D259C_19__CTOR_OFFSET UNITYSDK_OFFSET(0x17E262B0)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_19_TypeDefinitionIndex = 74463;

class Class_1_97E659ED8D5D259C_19 : public ::System::Object
{
public:
	::System::UInt32 _InstanceID_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_19__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_19_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_19_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_19_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97E659ED8D5D259C_19_SET_INSTANCEID_OFFSET))(this, a1);
	}
};
