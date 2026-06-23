#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_B9883992047B3D5F_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x14A71BB0)
#define CLASS_3_B9883992047B3D5F_METHOD_3_9EC823C358D831A9_OFFSET UNITYSDK_OFFSET(0x14A71E10)
#define CLASS_3_B9883992047B3D5F_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14A721C0)
#define CLASS_3_B9883992047B3D5F__CTOR_OFFSET UNITYSDK_OFFSET(0x14A72000)

inline static constexpr unsigned int Class_3_B9883992047B3D5F_TypeDefinitionIndex = 82766;

class Class_3_B9883992047B3D5F : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_3_2; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_3; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_4; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_3_B537A0AA78803363* Field_3_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9883992047B3D5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9883992047B3D5F_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_9EC823C358D831A9(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_B9883992047B3D5F_METHOD_3_9EC823C358D831A9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B9883992047B3D5F_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
