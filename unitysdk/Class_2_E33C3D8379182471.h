#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7807B2B04302CD7B_1.h"

#define CLASS_2_E33C3D8379182471_METHOD_2_D9F5295DDC8EAB8A_OFFSET UNITYSDK_OFFSET(0x132FD230)
#define CLASS_2_E33C3D8379182471__CTOR_OFFSET UNITYSDK_OFFSET(0x132FD220)

inline static constexpr unsigned int Class_2_E33C3D8379182471_TypeDefinitionIndex = 42046;

class Class_2_E33C3D8379182471 : public ::Class_1_7807B2B04302CD7B_1
{
public:
	::System::Int32 Field_2_3; // 0x18
	::System::Int32 Field_2_1; // 0x1C
	::System::Int32 Field_2_2; // 0x20
	::System::Int32 Field_2_0; // 0x24
	::System::Boolean Field_2_4; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E33C3D8379182471__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_D9F5295DDC8EAB8A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E33C3D8379182471_METHOD_2_D9F5295DDC8EAB8A_OFFSET))(this);
	}
};
