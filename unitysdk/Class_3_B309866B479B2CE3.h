#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_0517B48635C9D397;
class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_B309866B479B2CE3_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xD972730)
#define CLASS_3_B309866B479B2CE3_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0xD972A50)
#define CLASS_3_B309866B479B2CE3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD973250)
#define CLASS_3_B309866B479B2CE3_METHOD_3_E44B3B384EAB8364_OFFSET UNITYSDK_OFFSET(0xD9731A0)
#define CLASS_3_B309866B479B2CE3__CTOR_OFFSET UNITYSDK_OFFSET(0xD972F20)

inline static constexpr unsigned int Class_3_B309866B479B2CE3_TypeDefinitionIndex = 84818;

class Class_3_B309866B479B2CE3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_CF43FA1E89397A1C* Field_3_7; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_3; // 0x20
	::Class_3_B537A0AA78803363* Field_3_6; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Single>* Field_3_5; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_4; // 0x38
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x40
	::Class_4_F91115D9A1F02F5F<::Class_1_0517B48635C9D397*>* Field_3_1; // 0x48
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B309866B479B2CE3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B309866B479B2CE3_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_B309866B479B2CE3_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_E44B3B384EAB8364(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_3_B309866B479B2CE3_METHOD_3_E44B3B384EAB8364_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B309866B479B2CE3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
