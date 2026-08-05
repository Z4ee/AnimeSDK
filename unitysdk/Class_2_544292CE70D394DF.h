#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_8.h"

#define CLASS_2_544292CE70D394DF_METHOD_2_0817012C9B9D8577_OFFSET UNITYSDK_OFFSET(0x12949C30)
#define CLASS_2_544292CE70D394DF__CTOR_OFFSET UNITYSDK_OFFSET(0x12949C20)

inline static constexpr unsigned int Class_2_544292CE70D394DF_TypeDefinitionIndex = 80667;

class Class_2_544292CE70D394DF : public ::Class_1_7807B2B04302CD7B_8
{
public:
	::System::Int32 Field_2_6; // 0x18
	::System::Boolean Field_2_4; // 0x1C
	::System::Int32 Field_2_7; // 0x20
	::System::Int32 Field_2_0; // 0x24
	::System::Int32 Field_2_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_544292CE70D394DF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_0817012C9B9D8577()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_544292CE70D394DF_METHOD_2_0817012C9B9D8577_OFFSET))(this);
	}
};
