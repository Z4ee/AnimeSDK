#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_87B8941B71E58844.h"

#define CLASS_2_BE5596AF994E6EC0_3_METHOD_2_32EA3B027892C0DD_OFFSET UNITYSDK_OFFSET(0xB19BEE0)
#define CLASS_2_BE5596AF994E6EC0_3_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0xB19BDC0)
#define CLASS_2_BE5596AF994E6EC0_3_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB19BE50)
#define CLASS_2_BE5596AF994E6EC0_3__CCTOR_OFFSET UNITYSDK_OFFSET(0xB19BD40)
#define CLASS_2_BE5596AF994E6EC0_3__CTOR_OFFSET UNITYSDK_OFFSET(0xB19BDB0)

inline static constexpr unsigned int Class_2_BE5596AF994E6EC0_3_TypeDefinitionIndex = 67200;

class Class_2_BE5596AF994E6EC0_3 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_0 = 0xF5; // 0x0
	::System::Int32 Field_2_2; // 0x20
	::Enum_3_87B8941B71E58844 Field_2_1; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_3__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_3_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_3_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_32EA3B027892C0DD(::System::Int32 a1, ::Enum_3_87B8941B71E58844 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_87B8941B71E58844))((::PBYTE)hIl2Cpp + CLASS_2_BE5596AF994E6EC0_3_METHOD_2_32EA3B027892C0DD_OFFSET))(this, a1, a2);
	}
};
