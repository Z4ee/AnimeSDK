#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_813743369E0E31B2_1_GET_CHESTID_OFFSET UNITYSDK_OFFSET(0x1232F010)
#define CLASS_1_813743369E0E31B2_1_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1232F030)
#define CLASS_1_813743369E0E31B2_1_GET_GPVALUE_OFFSET UNITYSDK_OFFSET(0x1232F0D0)
#define CLASS_1_813743369E0E31B2_1_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1232F050)
#define CLASS_1_813743369E0E31B2_1_GET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1232F0B0)
#define CLASS_1_813743369E0E31B2_1_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1232F070)
#define CLASS_1_813743369E0E31B2_1_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x1232F090)
#define CLASS_1_813743369E0E31B2_1_SET_CHESTID_OFFSET UNITYSDK_OFFSET(0x1232F020)
#define CLASS_1_813743369E0E31B2_1_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x1232F040)
#define CLASS_1_813743369E0E31B2_1_SET_GPVALUE_OFFSET UNITYSDK_OFFSET(0x1232F0E0)
#define CLASS_1_813743369E0E31B2_1_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1232F060)
#define CLASS_1_813743369E0E31B2_1_SET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x1232F0C0)
#define CLASS_1_813743369E0E31B2_1_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1232F080)
#define CLASS_1_813743369E0E31B2_1_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x1232F0A0)
#define CLASS_1_813743369E0E31B2_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1232F0F0)

inline static constexpr unsigned int Class_1_813743369E0E31B2_1_TypeDefinitionIndex = 68884;

class Class_1_813743369E0E31B2_1 : public ::System::Object
{
public:
	::System::String* _GroupProperty_k__BackingField; // 0x10
	::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x18
	::System::UInt32 _ChestID_k__BackingField; // 0x1C
	::System::UInt32 _GPValue_k__BackingField; // 0x20
	::System::UInt32 _GroupID_k__BackingField; // 0x24
	::System::UInt32 _InstanceID_k__BackingField; // 0x28
	::System::UInt32 _FloorID_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ChestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_CHESTID_OFFSET))(this);
	}

	::System::Void set_ChestID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_CHESTID_OFFSET))(this, value);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_FLOORID_OFFSET))(this, value);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_GROUPID_OFFSET))(this, value);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_INSTANCEID_OFFSET))(this, value);
	}

	::System::UInt32 get_LittleGameEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_LITTLEGAMEENTITYID_OFFSET))(this);
	}

	::System::Void set_LittleGameEntityID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_LITTLEGAMEENTITYID_OFFSET))(this, value);
	}

	::System::String* get_GroupProperty()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_GROUPPROPERTY_OFFSET))(this);
	}

	::System::Void set_GroupProperty(::System::String* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_GROUPPROPERTY_OFFSET))(this, value);
	}

	::System::UInt32 get_GPValue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_GET_GPVALUE_OFFSET))(this);
	}

	::System::Void set_GPValue(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_813743369E0E31B2_1_SET_GPVALUE_OFFSET))(this, value);
	}
};
