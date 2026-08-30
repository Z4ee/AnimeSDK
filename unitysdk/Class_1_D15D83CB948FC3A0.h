#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5F4D64A4B97E38F9;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_D15D83CB948FC3A0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD401A0)
#define CLASS_1_D15D83CB948FC3A0_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xBD40200)
#define CLASS_1_D15D83CB948FC3A0_METHOD_1_94EAF81A8AF2C7F6_OFFSET UNITYSDK_OFFSET(0xBD400F0)
#define CLASS_1_D15D83CB948FC3A0__CTOR_1_OFFSET UNITYSDK_OFFSET(0xBD40080)
#define CLASS_1_D15D83CB948FC3A0__CTOR_OFFSET UNITYSDK_OFFSET(0xBD3FFF0)

inline static constexpr unsigned int Class_1_D15D83CB948FC3A0_TypeDefinitionIndex = 76028;

class Class_1_D15D83CB948FC3A0 : public ::System::Object
{
public:
	::Class_1_5F4D64A4B97E38F9* GJALMBBNNOF; // 0x10
	::System::Boolean NIHOBIGHEPD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_5F4D64A4B97E38F9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5F4D64A4B97E38F9*))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_94EAF81A8AF2C7F6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0_METHOD_1_94EAF81A8AF2C7F6_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0_DISPOSE_OFFSET))(this);
	}

	::Class_1_5F4D64A4B97E38F9* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5F4D64A4B97E38F9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D15D83CB948FC3A0_METHOD_1_24748FC20F375725_OFFSET))(this);
	}
};
