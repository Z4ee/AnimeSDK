#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_97E659ED8D5D259C_18_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA98C330)
#define CLASS_1_97E659ED8D5D259C_18_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA98C350)
#define CLASS_1_97E659ED8D5D259C_18_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0xA98C370)
#define CLASS_1_97E659ED8D5D259C_18_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA98C340)
#define CLASS_1_97E659ED8D5D259C_18_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA98C360)
#define CLASS_1_97E659ED8D5D259C_18_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0xA98C380)
#define CLASS_1_97E659ED8D5D259C_18__CTOR_OFFSET UNITYSDK_OFFSET(0xA98C390)

inline static constexpr unsigned int Class_1_97E659ED8D5D259C_18_TypeDefinitionIndex = 69643;

class Class_1_97E659ED8D5D259C_18 : public ::System::Object
{
public:
	::System::UInt32 _InstanceID_k__BackingField; // 0x10
	::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x14
	::System::UInt32 _GroupID_k__BackingField; // 0x18

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
