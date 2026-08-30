#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_30;

#define CLASS_1_FD893FD36F6A3A6D_1_GET_TRIGGERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1C29D530)
#define CLASS_1_FD893FD36F6A3A6D_1_GET_VISITORCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1C29D550)
#define CLASS_1_FD893FD36F6A3A6D_1_SET_TRIGGERCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1C29D540)
#define CLASS_1_FD893FD36F6A3A6D_1_SET_VISITORCOLLIDER_OFFSET UNITYSDK_OFFSET(0x1C29D560)
#define CLASS_1_FD893FD36F6A3A6D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C29D570)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_1_TypeDefinitionIndex = 35867;

class Class_1_FD893FD36F6A3A6D_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_30* _TriggerCollider_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_30* _VisitorCollider_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_1__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_30* get_TriggerCollider()
	{
		return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_1_GET_TRIGGERCOLLIDER_OFFSET))(this);
	}

	::System::Void set_TriggerCollider(::Class_0_16E4307DCC419505_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_1_SET_TRIGGERCOLLIDER_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_30* get_VisitorCollider()
	{
		return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_1_GET_VISITORCOLLIDER_OFFSET))(this);
	}

	::System::Void set_VisitorCollider(::Class_0_16E4307DCC419505_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_1_SET_VISITORCOLLIDER_OFFSET))(this, a1);
	}
};
