#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_32044B0173B87B04;

#define CLASS_1_7807B2B04302CD7B_22_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x118BFB70)
#define CLASS_1_7807B2B04302CD7B_22__CTOR_OFFSET UNITYSDK_OFFSET(0x118BFBD0)

inline static constexpr unsigned int Class_1_7807B2B04302CD7B_22_TypeDefinitionIndex = 44901;

class Class_1_7807B2B04302CD7B_22 : public ::System::Object
{
public:
	::System::Int32 Field_1_2; // 0x10
	::System::Int32 Field_1_0; // 0x14
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_22__CTOR_OFFSET))(this);
	}

	::Class_1_32044B0173B87B04* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_32044B0173B87B04*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_22_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};
