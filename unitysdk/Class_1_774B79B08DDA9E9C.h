#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_17365F5FA0311FC9;
class Class_1_D031E8F06825AB4F;

#define CLASS_1_774B79B08DDA9E9C_METHOD_1_00DEF5A164D9A9D5_1_OFFSET UNITYSDK_OFFSET(0x14564260)
#define CLASS_1_774B79B08DDA9E9C_METHOD_1_00DEF5A164D9A9D5_OFFSET UNITYSDK_OFFSET(0x14564090)
#define CLASS_1_774B79B08DDA9E9C_START_OFFSET UNITYSDK_OFFSET(0x14564010)
#define CLASS_1_774B79B08DDA9E9C_STOP_OFFSET UNITYSDK_OFFSET(0x14564050)
#define CLASS_1_774B79B08DDA9E9C__CTOR_OFFSET UNITYSDK_OFFSET(0x14564430)

inline static constexpr unsigned int Class_1_774B79B08DDA9E9C_TypeDefinitionIndex = 73547;

class Class_1_774B79B08DDA9E9C : public ::System::Object
{
public:
	::Class_1_17365F5FA0311FC9* Field_1_0; // 0x10
	::Class_1_D031E8F06825AB4F* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_774B79B08DDA9E9C__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_774B79B08DDA9E9C_START_OFFSET))(this);
	}

	::System::Void Stop()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_774B79B08DDA9E9C_STOP_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_774B79B08DDA9E9C_METHOD_1_00DEF5A164D9A9D5_OFFSET))(this);
	}

	::System::Void Method_1_00DEF5A164D9A9D5_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_774B79B08DDA9E9C_METHOD_1_00DEF5A164D9A9D5_1_OFFSET))(this);
	}
};
