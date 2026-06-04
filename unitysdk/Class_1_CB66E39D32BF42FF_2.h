#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB66E39D32BF42FF_2_GET_CHESTID_OFFSET UNITYSDK_OFFSET(0x13D15630)
#define CLASS_1_CB66E39D32BF42FF_2_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x13D15650)
#define CLASS_1_CB66E39D32BF42FF_2_GET_GPVALUE_OFFSET UNITYSDK_OFFSET(0x13D156F0)
#define CLASS_1_CB66E39D32BF42FF_2_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x13D15670)
#define CLASS_1_CB66E39D32BF42FF_2_GET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x13D156D0)
#define CLASS_1_CB66E39D32BF42FF_2_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x13D15690)
#define CLASS_1_CB66E39D32BF42FF_2_GET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x13D156B0)
#define CLASS_1_CB66E39D32BF42FF_2_SET_CHESTID_OFFSET UNITYSDK_OFFSET(0x13D15640)
#define CLASS_1_CB66E39D32BF42FF_2_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x13D15660)
#define CLASS_1_CB66E39D32BF42FF_2_SET_GPVALUE_OFFSET UNITYSDK_OFFSET(0x13D15700)
#define CLASS_1_CB66E39D32BF42FF_2_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x13D15680)
#define CLASS_1_CB66E39D32BF42FF_2_SET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0x13D156E0)
#define CLASS_1_CB66E39D32BF42FF_2_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x13D156A0)
#define CLASS_1_CB66E39D32BF42FF_2_SET_LITTLEGAMEENTITYID_OFFSET UNITYSDK_OFFSET(0x13D156C0)
#define CLASS_1_CB66E39D32BF42FF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13D15710)

inline static constexpr unsigned int Class_1_CB66E39D32BF42FF_2_TypeDefinitionIndex = 69696;

class Class_1_CB66E39D32BF42FF_2 : public ::System::Object
{
public:
	::System::String* _GroupProperty_k__BackingField; // 0x10
	::System::UInt32 _FloorID_k__BackingField; // 0x18
	::System::UInt32 _GPValue_k__BackingField; // 0x1C
	::System::UInt32 _ChestID_k__BackingField; // 0x20
	::System::UInt32 _InstanceID_k__BackingField; // 0x24
	::System::UInt32 _GroupID_k__BackingField; // 0x28
	::System::UInt32 _LittleGameEntityID_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_ChestID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_GET_CHESTID_OFFSET))(this);
	}

	::System::Void set_ChestID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_SET_CHESTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_SET_FLOORID_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::System::UInt32 get_LittleGameEntityID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_GET_LITTLEGAMEENTITYID_OFFSET))(this);
	}

	::System::Void set_LittleGameEntityID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_SET_LITTLEGAMEENTITYID_OFFSET))(this, a1);
	}

	::System::String* get_GroupProperty()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_GET_GROUPPROPERTY_OFFSET))(this);
	}

	::System::Void set_GroupProperty(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_SET_GROUPPROPERTY_OFFSET))(this, a1);
	}

	::System::UInt32 get_GPValue()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_GET_GPVALUE_OFFSET))(this);
	}

	::System::Void set_GPValue(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_2_SET_GPVALUE_OFFSET))(this, a1);
	}
};
