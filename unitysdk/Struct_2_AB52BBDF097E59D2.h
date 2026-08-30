#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_93896D58DE250EBE;

#define STRUCT_2_AB52BBDF097E59D2_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x3AF9430)
#define STRUCT_2_AB52BBDF097E59D2_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x123C0)

inline static constexpr unsigned int Struct_2_AB52BBDF097E59D2_TypeDefinitionIndex = 57123;

struct alignas(8) Struct_2_AB52BBDF097E59D2
{
	::Class_1_93896D58DE250EBE* JFFKGAPHAMP; // 0x10
	::System::Single GFCFHLJEHMC; // 0x18
	::RPG::MVector3 LJDHGFECMHJ; // 0x1C

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB52BBDF097E59D2_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB52BBDF097E59D2_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
