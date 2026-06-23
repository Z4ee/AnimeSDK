#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_1_204C453CC79AE4E0_2;
class Class_1_8FBDD7D8E0EE0B49;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_E9171F088E0B4E9A_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x19201490)
#define CLASS_3_E9171F088E0B4E9A_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x19201640)
#define CLASS_3_E9171F088E0B4E9A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19201AB0)
#define CLASS_3_E9171F088E0B4E9A_METHOD_3_FE396A2C0D40A1F3_OFFSET UNITYSDK_OFFSET(0x192019F0)
#define CLASS_3_E9171F088E0B4E9A__CTOR_OFFSET UNITYSDK_OFFSET(0x19201860)

inline static constexpr unsigned int Class_3_E9171F088E0B4E9A_TypeDefinitionIndex = 69103;

class Class_3_E9171F088E0B4E9A : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_B537A0AA78803363* Field_3_2; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_F91115D9A1F02F5F<::System::String*>* Field_3_1; // 0x28
	::Class_3_B537A0AA78803363* Field_3_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_FE396A2C0D40A1F3(::Class_1_204C453CC79AE4E0_2* a1, ::System::Int32 a2, ::System::Int32 a3, ::Class_1_8FBDD7D8E0EE0B49* a4)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Class_1_204C453CC79AE4E0_2*, ::System::Int32, ::System::Int32, ::Class_1_8FBDD7D8E0EE0B49*))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_METHOD_3_FE396A2C0D40A1F3_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E9171F088E0B4E9A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
