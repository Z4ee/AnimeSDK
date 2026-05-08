#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_CF43FA1E89397A1C;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_4_7B2DB8E2981B706A_1_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x180B4BB0)
#define CLASS_4_7B2DB8E2981B706A_1_METHOD_4_2C87364F6ECED842_OFFSET UNITYSDK_OFFSET(0x180B4DF0)
#define CLASS_4_7B2DB8E2981B706A_1_METHOD_4_5E50DFD43A9E43C7_OFFSET UNITYSDK_OFFSET(0x180B5250)
#define CLASS_4_7B2DB8E2981B706A_1_METHOD_4_A172B2FCE524DF8B_OFFSET UNITYSDK_OFFSET(0x180B4FA0)
#define CLASS_4_7B2DB8E2981B706A_1_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180B51C0)
#define CLASS_4_7B2DB8E2981B706A_1_METHOD_4_EB5BAD6F7BB892F4_OFFSET UNITYSDK_OFFSET(0x180B4CF0)
#define CLASS_4_7B2DB8E2981B706A_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x180B51B0)
#define CLASS_4_7B2DB8E2981B706A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180B5060)

inline static constexpr unsigned int Class_4_7B2DB8E2981B706A_1_TypeDefinitionIndex = 52332;

class Class_4_7B2DB8E2981B706A_1 : public ::Class_3_3B7CFC169AD8410C
{
public:
	static ::System::Int32* StaticGet_Field_4_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_7B2DB8E2981B706A_1_TypeDefinitionIndex)->GetStaticField(0x118E0);
	}
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_4_1; // 0x18
	::Class_3_CF43FA1E89397A1C* Field_4_2; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B2DB8E2981B706A_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_7B2DB8E2981B706A_1__CCTOR_OFFSET))();
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B2DB8E2981B706A_1_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_EB5BAD6F7BB892F4(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_29439DBE2B63DCF3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_7B2DB8E2981B706A_1_METHOD_4_EB5BAD6F7BB892F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_2C87364F6ECED842(::Struct_2_29439DBE2B63DCF3& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_7B2DB8E2981B706A_1_METHOD_4_2C87364F6ECED842_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_A172B2FCE524DF8B(::Struct_2_29439DBE2B63DCF3 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_7B2DB8E2981B706A_1_METHOD_4_A172B2FCE524DF8B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_7B2DB8E2981B706A_1_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_4_5E50DFD43A9E43C7(::Struct_2_29439DBE2B63DCF3 a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_7B2DB8E2981B706A_1_METHOD_4_5E50DFD43A9E43C7_OFFSET))(this, a1, a2);
	}
};
