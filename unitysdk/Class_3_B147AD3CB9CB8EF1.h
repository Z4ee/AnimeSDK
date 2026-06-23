#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_B147AD3CB9CB8EF1_METHOD_3_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x18065D90)
#define CLASS_3_B147AD3CB9CB8EF1_METHOD_3_7D38146965857770_OFFSET UNITYSDK_OFFSET(0x18065F40)
#define CLASS_3_B147AD3CB9CB8EF1_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x180664E0)
#define CLASS_3_B147AD3CB9CB8EF1__CTOR_OFFSET UNITYSDK_OFFSET(0x180663A0)

inline static constexpr unsigned int Class_3_B147AD3CB9CB8EF1_TypeDefinitionIndex = 83904;

class Class_3_B147AD3CB9CB8EF1 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::Foundation::ViewObject::ViewObjectHandle>* Field_3_1; // 0x18
	::Class_3_B537A0AA78803363* Field_3_3; // 0x20
	::Class_4_B51FB35349ACD175<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_3_2; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B147AD3CB9CB8EF1__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B147AD3CB9CB8EF1_METHOD_3_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_3_7D38146965857770(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_B147AD3CB9CB8EF1_METHOD_3_7D38146965857770_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B147AD3CB9CB8EF1_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
