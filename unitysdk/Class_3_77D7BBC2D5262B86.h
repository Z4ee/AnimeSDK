#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_77D7BBC2D5262B86_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1A0AE3B0)
#define CLASS_3_77D7BBC2D5262B86_METHOD_3_98626A9971EBF32D_OFFSET UNITYSDK_OFFSET(0x1A0AE560)
#define CLASS_3_77D7BBC2D5262B86_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1A0AE9C0)
#define CLASS_3_77D7BBC2D5262B86_METHOD_3_E82718B50EFFCD4F_OFFSET UNITYSDK_OFFSET(0x1A0AE910)
#define CLASS_3_77D7BBC2D5262B86__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0AE7D0)

inline static constexpr unsigned int Class_3_77D7BBC2D5262B86_TypeDefinitionIndex = 46134;

class Class_3_77D7BBC2D5262B86 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_CF43FA1E89397A1C* Field_3_3; // 0x18
	::Class_4_B51FB35349ACD175<::System::Boolean>* Field_3_2; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_3_1; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77D7BBC2D5262B86__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77D7BBC2D5262B86_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_98626A9971EBF32D(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_77D7BBC2D5262B86_METHOD_3_98626A9971EBF32D_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_E82718B50EFFCD4F(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_3_77D7BBC2D5262B86_METHOD_3_E82718B50EFFCD4F_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_77D7BBC2D5262B86_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
