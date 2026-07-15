#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/ValueType.h"

class Class_1_93896D58DE250EBE;

#define STRUCT_2_AB52BBDF097E59D2_METHOD_2_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0x395E390)
#define STRUCT_2_AB52BBDF097E59D2_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x7C5460)

inline static constexpr unsigned int Struct_2_AB52BBDF097E59D2_TypeDefinitionIndex = 54402;

struct alignas(8) Struct_2_AB52BBDF097E59D2
{
	::Class_1_93896D58DE250EBE* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18
	::RPG::MVector3 Field_2_2; // 0x1C

	::System::Void Method_2_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB52BBDF097E59D2_METHOD_2_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AB52BBDF097E59D2_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
