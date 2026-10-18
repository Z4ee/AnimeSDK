#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_121;

#define CLASS_1_FD893FD36F6A3A6D_10_GET_DELTA_OFFSET UNITYSDK_OFFSET(0x15CA7560)
#define CLASS_1_FD893FD36F6A3A6D_10__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15CA7580)
#define CLASS_1_FD893FD36F6A3A6D_10__CTOR_OFFSET UNITYSDK_OFFSET(0x15CA7570)

inline static constexpr unsigned int Class_1_FD893FD36F6A3A6D_10_TypeDefinitionIndex = 79802;

class Class_1_FD893FD36F6A3A6D_10 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_121* _Delta_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_10__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_0_16E4307DCC419505_121* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_121*))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_10__CTOR_1_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_121* get_Delta()
	{
		return ((::Class_0_16E4307DCC419505_121*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FD893FD36F6A3A6D_10_GET_DELTA_OFFSET))(this);
	}
};
