#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_CB66E39D32BF42FF_1_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB02A1E0)
#define CLASS_1_CB66E39D32BF42FF_1_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB02A200)
#define CLASS_1_CB66E39D32BF42FF_1_GET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0xB02A240)
#define CLASS_1_CB66E39D32BF42FF_1_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xB02A220)
#define CLASS_1_CB66E39D32BF42FF_1_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xB02A1F0)
#define CLASS_1_CB66E39D32BF42FF_1_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0xB02A210)
#define CLASS_1_CB66E39D32BF42FF_1_SET_GROUPPROPERTY_OFFSET UNITYSDK_OFFSET(0xB02A250)
#define CLASS_1_CB66E39D32BF42FF_1_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0xB02A230)
#define CLASS_1_CB66E39D32BF42FF_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB02A260)

inline static constexpr unsigned int Class_1_CB66E39D32BF42FF_1_TypeDefinitionIndex = 69695;

class Class_1_CB66E39D32BF42FF_1 : public ::System::Object
{
public:
	::System::String* _GroupProperty_k__BackingField; // 0x10
	::System::UInt32 _GroupID_k__BackingField; // 0x18
	::System::UInt32 _FloorID_k__BackingField; // 0x1C
	::System::UInt32 _InstanceID_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_1__CTOR_OFFSET))(this);
	}

	::System::UInt32 get_FloorID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_1_GET_FLOORID_OFFSET))(this);
	}

	::System::Void set_FloorID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_1_SET_FLOORID_OFFSET))(this, a1);
	}

	::System::UInt32 get_GroupID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_1_GET_GROUPID_OFFSET))(this);
	}

	::System::Void set_GroupID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_1_SET_GROUPID_OFFSET))(this, a1);
	}

	::System::UInt32 get_InstanceID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_1_GET_INSTANCEID_OFFSET))(this);
	}

	::System::Void set_InstanceID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_1_SET_INSTANCEID_OFFSET))(this, a1);
	}

	::System::String* get_GroupProperty()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_1_GET_GROUPPROPERTY_OFFSET))(this);
	}

	::System::Void set_GroupProperty(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CB66E39D32BF42FF_1_SET_GROUPPROPERTY_OFFSET))(this, a1);
	}
};
