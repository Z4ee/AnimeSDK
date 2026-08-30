#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_30;

#define CLASS_1_FD893FD36F6A3A6D_GET_COLLIDERA_OFFSET UNITYSDK_OFFSET(0x1C0AA750)
#define CLASS_1_FD893FD36F6A3A6D_GET_COLLIDERB_OFFSET UNITYSDK_OFFSET(0x1C0AA770)
#define CLASS_1_FD893FD36F6A3A6D_SET_COLLIDERA_OFFSET UNITYSDK_OFFSET(0x1C0AA760)
#define CLASS_1_FD893FD36F6A3A6D_SET_COLLIDERB_OFFSET UNITYSDK_OFFSET(0x1C0AA780)
#define CLASS_1_FD893FD36F6A3A6D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0AA790)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_TypeDefinitionIndex = 35866;

class Class_1_FD893FD36F6A3A6D : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_30* _ColliderB_k__BackingField; // 0x10
	::Class_0_16E4307DCC419505_30* _ColliderA_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_30* get_ColliderA()
	{
		return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_GET_COLLIDERA_OFFSET))(this);
	}

	::System::Void set_ColliderA(::Class_0_16E4307DCC419505_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_SET_COLLIDERA_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_30* get_ColliderB()
	{
		return ((::Class_0_16E4307DCC419505_30*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_GET_COLLIDERB_OFFSET))(this);
	}

	::System::Void set_ColliderB(::Class_0_16E4307DCC419505_30* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_30*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_SET_COLLIDERB_OFFSET))(this, a1);
	}
};
