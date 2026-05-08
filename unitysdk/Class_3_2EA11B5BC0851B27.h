#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/Struct_2_D89177B577188692.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_2EA11B5BC0851B27_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x10DB51D0)
#define CLASS_3_2EA11B5BC0851B27_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x10DB54F0)
#define CLASS_3_2EA11B5BC0851B27_METHOD_3_5F94A8349C8486CC_OFFSET UNITYSDK_OFFSET(0x10DB5D10)
#define CLASS_3_2EA11B5BC0851B27_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10DB5BD0)
#define CLASS_3_2EA11B5BC0851B27_METHOD_3_E44B3B384EAB8364_OFFSET UNITYSDK_OFFSET(0x10DB5C60)
#define CLASS_3_2EA11B5BC0851B27__CTOR_OFFSET UNITYSDK_OFFSET(0x10DB5950)

inline static constexpr unsigned int Class_3_2EA11B5BC0851B27_TypeDefinitionIndex = 73297;

class Class_3_2EA11B5BC0851B27 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_4; // 0x18
	::Class_4_2FF7D360A2F3EC48<::System::Single>* Field_3_5; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_2; // 0x28
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_1; // 0x30
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_3_7; // 0x40
	::Class_3_B537A0AA78803363* Field_3_6; // 0x48
	::Class_4_2FF7D360A2F3EC48<::System::String*>* Field_3_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA11B5BC0851B27__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA11B5BC0851B27_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_2EA11B5BC0851B27_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2EA11B5BC0851B27_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_E44B3B384EAB8364(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_3_2EA11B5BC0851B27_METHOD_3_E44B3B384EAB8364_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_5F94A8349C8486CC(::Class_1_8FBDD7D8E0EE0B49* a1, ::System::Int32 a2, ::Struct_2_D89177B577188692 a3)
	{
		return ((::System::Void(*)(::Class_1_8FBDD7D8E0EE0B49*, ::System::Int32, ::Struct_2_D89177B577188692))((::PBYTE)hIl2Cpp + CLASS_3_2EA11B5BC0851B27_METHOD_3_5F94A8349C8486CC_OFFSET))(a1, a2, a3);
	}
};
