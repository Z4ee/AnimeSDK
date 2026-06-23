#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_4CA1CF812F25F8C6_METHOD_3_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x131E26E0)
#define CLASS_3_4CA1CF812F25F8C6_METHOD_3_47125C76AFDB961E_OFFSET UNITYSDK_OFFSET(0x131E2A00)
#define CLASS_3_4CA1CF812F25F8C6_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x131E30E0)
#define CLASS_3_4CA1CF812F25F8C6__CTOR_OFFSET UNITYSDK_OFFSET(0x131E2E20)

inline static constexpr unsigned int Class_3_4CA1CF812F25F8C6_TypeDefinitionIndex = 68567;

class Class_3_4CA1CF812F25F8C6 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_CF43FA1E89397A1C* Field_3_7; // 0x18
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_1; // 0x20
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_3_6; // 0x30
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_3; // 0x38
	::Class_4_F91115D9A1F02F5F<::System::Boolean>* Field_3_2; // 0x40
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_4; // 0x48
	::Class_3_B537A0AA78803363* Field_3_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CA1CF812F25F8C6__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CA1CF812F25F8C6_METHOD_3_28EB11670A8E5A86_OFFSET))(this);
	}

	::System::Void Method_3_47125C76AFDB961E(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_4CA1CF812F25F8C6_METHOD_3_47125C76AFDB961E_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_4CA1CF812F25F8C6_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
