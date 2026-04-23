#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_177.h"

class Class_2_49CAB3DE74280C58;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_068B6685ECC07D35_GET_CASTER_OFFSET UNITYSDK_OFFSET(0xD35F800)
#define CLASS_2_068B6685ECC07D35_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0xD35F820)
#define CLASS_2_068B6685ECC07D35_GET_EVENTTARGETS_OFFSET UNITYSDK_OFFSET(0xD35F860)
#define CLASS_2_068B6685ECC07D35_GET_EVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xD35F7E0)
#define CLASS_2_068B6685ECC07D35_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xD35F840)
#define CLASS_2_068B6685ECC07D35_SET_CASTER_OFFSET UNITYSDK_OFFSET(0xD35F810)
#define CLASS_2_068B6685ECC07D35_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0xD35F830)
#define CLASS_2_068B6685ECC07D35_SET_EVENTTARGETS_OFFSET UNITYSDK_OFFSET(0xD35F870)
#define CLASS_2_068B6685ECC07D35_SET_EVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0xD35F7F0)
#define CLASS_2_068B6685ECC07D35_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xD35F850)
#define CLASS_2_068B6685ECC07D35__CTOR_OFFSET UNITYSDK_OFFSET(0xD35F880)

inline static constexpr unsigned int Class_2_068B6685ECC07D35_TypeDefinitionIndex = 71163;

class Class_2_068B6685ECC07D35 : public ::Class_1_43BD383C98B4C0C5_177
{
public:
	::Class_2_49CAB3DE74280C58* _EventTrigger_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* _EventTargets_k__BackingField; // 0x18
	::Class_2_49CAB3DE74280C58* _Caster_k__BackingField; // 0x20
	::System::UInt32 _SkillID_k__BackingField; // 0x28
	::System::UInt32 _EventID_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35__CTOR_OFFSET))(this);
	}

	::Class_2_49CAB3DE74280C58* get_EventTrigger()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_GET_EVENTTRIGGER_OFFSET))(this);
	}

	::System::Void set_EventTrigger(::Class_2_49CAB3DE74280C58* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_SET_EVENTTRIGGER_OFFSET))(this, value);
	}

	::Class_2_49CAB3DE74280C58* get_Caster()
	{
		return ((::Class_2_49CAB3DE74280C58*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::Class_2_49CAB3DE74280C58* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_49CAB3DE74280C58*))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_SET_CASTER_OFFSET))(this, value);
	}

	::System::UInt32 get_EventID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_GET_EVENTID_OFFSET))(this);
	}

	::System::Void set_EventID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_SET_EVENTID_OFFSET))(this, value);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_SET_SKILLID_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::Int32>* get_EventTargets()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_GET_EVENTTARGETS_OFFSET))(this);
	}

	::System::Void set_EventTargets(::System::Collections::Generic::List_1<::System::Int32>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_068B6685ECC07D35_SET_EVENTTARGETS_OFFSET))(this, value);
	}
};
