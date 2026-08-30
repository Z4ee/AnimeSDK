#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9FC3BF6B16C6AFE6.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_45EB26448208D929_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBFF2870)
#define CLASS_1_45EB26448208D929__CTOR_OFFSET UNITYSDK_OFFSET(0xBFF2860)

inline static constexpr unsigned int Class_1_45EB26448208D929_TypeDefinitionIndex = 48151;

class Class_1_45EB26448208D929 : public ::System::Object
{
public:
	::Struct_2_9FC3BF6B16C6AFE6 ICLIBPOMLHA; // 0x10
	::System::UInt32 PHFMCACHFIJ; // 0xC0

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45EB26448208D929__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_45EB26448208D929_DISPOSE_OFFSET))(this);
	}
};
