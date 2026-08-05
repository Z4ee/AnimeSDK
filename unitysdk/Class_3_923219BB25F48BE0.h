#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_923219BB25F48BE0_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10F530D0)
#define CLASS_3_923219BB25F48BE0_METHOD_3_67914286FB573C40_OFFSET UNITYSDK_OFFSET(0x10F53280)
#define CLASS_3_923219BB25F48BE0_METHOD_3_A208AC48610A0ABE_OFFSET UNITYSDK_OFFSET(0x10F534B0)
#define CLASS_3_923219BB25F48BE0_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10F53B90)
#define CLASS_3_923219BB25F48BE0_METHOD_3_F9DD9B83A6B12877_OFFSET UNITYSDK_OFFSET(0x10F53610)
#define CLASS_3_923219BB25F48BE0__CTOR_OFFSET UNITYSDK_OFFSET(0x10F53A30)

inline static constexpr unsigned int Class_3_923219BB25F48BE0_TypeDefinitionIndex = 80064;

class Class_3_923219BB25F48BE0 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_0; // 0x20
	::Class_4_8D3E479B491881B3<::System::Boolean>* Field_3_7; // 0x28
	::Class_4_8D3E479B491881B3<::System::Int32>* Field_3_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_923219BB25F48BE0__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_923219BB25F48BE0_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_67914286FB573C40(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_923219BB25F48BE0_METHOD_3_67914286FB573C40_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_3_F9DD9B83A6B12877(::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*& a1)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*&))((::PBYTE)hIl2Cpp + CLASS_3_923219BB25F48BE0_METHOD_3_F9DD9B83A6B12877_OFFSET))(a1);
	}

	static ::System::Boolean Method_3_A208AC48610A0ABE(::Foundation::ViewObject::ViewObjectHandle a1, ::System::Int32& a2, ::System::Int32& a3, ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*& a4, ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*& a5)
	{
		return ((::System::Boolean(*)(::Foundation::ViewObject::ViewObjectHandle, ::System::Int32&, ::System::Int32&, ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*&, ::System::Collections::Generic::IReadOnlyList_1<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*&))((::PBYTE)hIl2Cpp + CLASS_3_923219BB25F48BE0_METHOD_3_A208AC48610A0ABE_OFFSET))(a1, a2, a3, a4, a5);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_923219BB25F48BE0_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
