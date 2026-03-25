#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_813743369E0E31B2_3_GET_CHESTID_OFFSET UNITYSDK_OFFSET(0xA1A63A0)
#define CLASS_1_813743369E0E31B2_3_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA1A63C0)
#define CLASS_1_813743369E0E31B2_3_GET_GPVALUE_OFFSET UNITYSDK_OFFSET(0xA1A6460)
#define CLASS_1_813743369E0E31B2_3_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA1A63E0)
#define CLASS_1_813743369E0E31B2_3_GET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1A6440)
#define CLASS_1_813743369E0E31B2_3_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA1A6400)
#define CLASS_1_813743369E0E31B2_3_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0xA1A6420)
#define CLASS_1_813743369E0E31B2_3_SET_CHESTID_OFFSET UNITYSDK_OFFSET(0xA1A63B0)
#define CLASS_1_813743369E0E31B2_3_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA1A63D0)
#define CLASS_1_813743369E0E31B2_3_SET_GPVALUE_OFFSET UNITYSDK_OFFSET(0xA1A6470)
#define CLASS_1_813743369E0E31B2_3_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xA1A63F0)
#define CLASS_1_813743369E0E31B2_3_SET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0xA1A6450)
#define CLASS_1_813743369E0E31B2_3_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xA1A6410)
#define CLASS_1_813743369E0E31B2_3_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0xA1A6430)
#define CLASS_1_813743369E0E31B2_3__CTOR_OFFSET UNITYSDK_OFFSET(0xA1A6480)

inline static constexpr unsigned int Class_1_813743369E0E31B2_3_TypeDefinitionIndex = 61378;

class Class_1_813743369E0E31B2_3 : public ::System::Object
{
public:
	::System::String* _GroupProperty_k__BackingField; // 0x10
	::System::UInt32 _InstanceID_k__BackingField; // 0x18
	::System::UInt32 _ChestID_k__BackingField; // 0x1C
	::System::UInt32 _FloorID_k__BackingField; // 0x20
	::System::UInt32 _GPValue_k__BackingField; // 0x24
	::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x28
	::System::UInt32 _GroupID_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ChestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_GET_CHESTID_OFFSET))(this);
	}

	::System::Void set_ChestID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_SET_CHESTID_OFFSET))(this, value);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_SET_FLOORID_OFFSET))(this, value);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_SET_INSTANCEID_OFFSET))(this, value);
	}

	::System::UInt32 get_LittleGameEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_GET_LITTLEGAMEENTITYID_OFFSET))(this);
	}

	::System::Void set_LittleGameEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_SET_LITTLEGAMEENTITYID_OFFSET))(this, value);
	}

	::System::String* get_GroupProperty()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_GET_GROUPPROPERTY_OFFSET))(this);
	}

	::System::Void set_GroupProperty(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_SET_GROUPPROPERTY_OFFSET))(this, value);
	}

	::System::UInt32 get_GPValue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_GET_GPVALUE_OFFSET))(this);
	}

	::System::Void set_GPValue(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_3_SET_GPVALUE_OFFSET))(this, value);
	}
};
