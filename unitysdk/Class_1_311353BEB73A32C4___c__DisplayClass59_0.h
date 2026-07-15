#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_5.h"
#include "unitysdk/System/Object.h"

class Class_1_7508481856B4C95F;

#define CLASS_1_311353BEB73A32C4___C__DISPLAYCLASS59_0__BUILDWORLDSNAPSHOT_B__0_OFFSET UNITYSDK_OFFSET(0x149B1540)
#define CLASS_1_311353BEB73A32C4___C__DISPLAYCLASS59_0__BUILDWORLDSNAPSHOT_B__1_OFFSET UNITYSDK_OFFSET(0x149B1940)
#define CLASS_1_311353BEB73A32C4___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x149AB2D0)

inline static constexpr unsigned int Class_1_311353BEB73A32C4___c__DisplayClass59_0_TypeDefinitionIndex = 70378;

class Class_1_311353BEB73A32C4___c__DisplayClass59_0 : public ::System::Object
{
public:
	::Class_1_311353BEB73A32C4_Struct_2_52AD02145F5FCE3A_5 snap; // 0x10
	::System::Boolean hasAnyExpectedVisible; // 0x60
	::System::Int32 blockIdx; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
	}

	::System::Void _BuildWorldSnapshot_b__0(::Class_1_7508481856B4C95F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7508481856B4C95F*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4___C__DISPLAYCLASS59_0__BUILDWORLDSNAPSHOT_B__0_OFFSET))(this, a1);
	}

	::System::Void _BuildWorldSnapshot_b__1(::Class_1_7508481856B4C95F* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7508481856B4C95F*))((::PBYTE)hIl2Cpp + CLASS_1_311353BEB73A32C4___C__DISPLAYCLASS59_0__BUILDWORLDSNAPSHOT_B__1_OFFSET))(this, a1);
	}
};
