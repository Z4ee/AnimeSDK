#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_194.h"

class Class_2_B66C1067C0468FBB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_9C6E272E2C8F4E2F_GET_CASTER_OFFSET UNITYSDK_OFFSET(0x15F38EE0)
#define CLASS_2_9C6E272E2C8F4E2F_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x15F38F00)
#define CLASS_2_9C6E272E2C8F4E2F_GET_EVENTTARGETS_OFFSET UNITYSDK_OFFSET(0x15F38F40)
#define CLASS_2_9C6E272E2C8F4E2F_GET_EVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x15F38EC0)
#define CLASS_2_9C6E272E2C8F4E2F_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x15F38F20)
#define CLASS_2_9C6E272E2C8F4E2F_SET_CASTER_OFFSET UNITYSDK_OFFSET(0x15F38EF0)
#define CLASS_2_9C6E272E2C8F4E2F_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x15F38F10)
#define CLASS_2_9C6E272E2C8F4E2F_SET_EVENTTARGETS_OFFSET UNITYSDK_OFFSET(0x15F38F50)
#define CLASS_2_9C6E272E2C8F4E2F_SET_EVENTTRIGGER_OFFSET UNITYSDK_OFFSET(0x15F38ED0)
#define CLASS_2_9C6E272E2C8F4E2F_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0x15F38F30)
#define CLASS_2_9C6E272E2C8F4E2F__CTOR_OFFSET UNITYSDK_OFFSET(0x15F38F60)

inline static constexpr unsigned int Class_2_9C6E272E2C8F4E2F_TypeDefinitionIndex = 73626;

class Class_2_9C6E272E2C8F4E2F : public ::Class_1_43BD383C98B4C0C5_194
{
public:
	::Class_2_B66C1067C0468FBB* _Caster_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* _EventTargets_k__BackingField; // 0x18
	::Class_2_B66C1067C0468FBB* _EventTrigger_k__BackingField; // 0x20
	::System::UInt32 _EventID_k__BackingField; // 0x28
	::System::UInt32 _SkillID_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F__CTOR_OFFSET))(this);
	}

	::Class_2_B66C1067C0468FBB* get_EventTrigger()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_GET_EVENTTRIGGER_OFFSET))(this);
	}

	::System::Void set_EventTrigger(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_SET_EVENTTRIGGER_OFFSET))(this, a1);
	}

	::Class_2_B66C1067C0468FBB* get_Caster()
	{
		return ((::Class_2_B66C1067C0468FBB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_GET_CASTER_OFFSET))(this);
	}

	::System::Void set_Caster(::Class_2_B66C1067C0468FBB* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_B66C1067C0468FBB*))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_SET_CASTER_OFFSET))(this, a1);
	}

	::System::UInt32 get_EventID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_GET_EVENTID_OFFSET))(this);
	}

	::System::Void set_EventID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_SET_EVENTID_OFFSET))(this, a1);
	}

	::System::UInt32 get_SkillID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_GET_SKILLID_OFFSET))(this);
	}

	::System::Void set_SkillID(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_SET_SKILLID_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* get_EventTargets()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_GET_EVENTTARGETS_OFFSET))(this);
	}

	::System::Void set_EventTargets(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_9C6E272E2C8F4E2F_SET_EVENTTARGETS_OFFSET))(this, a1);
	}
};
