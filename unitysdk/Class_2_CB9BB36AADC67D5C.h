#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace System { class String; }

#define CLASS_2_CB9BB36AADC67D5C_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x125D5A20)
#define CLASS_2_CB9BB36AADC67D5C_METHOD_2_A668B8AB2FBFFF95_OFFSET UNITYSDK_OFFSET(0x125D5AC0)
#define CLASS_2_CB9BB36AADC67D5C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x125D5B20)
#define CLASS_2_CB9BB36AADC67D5C_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x125D5AB0)
#define CLASS_2_CB9BB36AADC67D5C__CCTOR_OFFSET UNITYSDK_OFFSET(0x125D59A0)
#define CLASS_2_CB9BB36AADC67D5C__CTOR_OFFSET UNITYSDK_OFFSET(0x125D5A10)

inline static constexpr unsigned int Class_2_CB9BB36AADC67D5C_TypeDefinitionIndex = 41692;

class Class_2_CB9BB36AADC67D5C : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_4 = 0x94; // 0x0
	::System::String* Field_2_5; // 0x20
	::System::Int32 Field_2_6; // 0x28
	::System::Int32 Field_2_7; // 0x2C
	::System::UInt32 Field_2_0; // 0x30

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_CB9BB36AADC67D5C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB9BB36AADC67D5C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB9BB36AADC67D5C_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB9BB36AADC67D5C_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_A668B8AB2FBFFF95(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_CB9BB36AADC67D5C_METHOD_2_A668B8AB2FBFFF95_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB9BB36AADC67D5C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
