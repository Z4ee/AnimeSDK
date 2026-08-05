#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_14EA31260977A36A_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x11244BE0)
#define CLASS_3_14EA31260977A36A_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11245190)
#define CLASS_3_14EA31260977A36A_METHOD_3_EA1CE0AF6E069614_OFFSET UNITYSDK_OFFSET(0x11244CB0)
#define CLASS_3_14EA31260977A36A__CTOR_OFFSET UNITYSDK_OFFSET(0x112450A0)

inline static constexpr unsigned int Class_3_14EA31260977A36A_TypeDefinitionIndex = 71133;

class Class_3_14EA31260977A36A : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>* Field_3_7; // 0x18
	::Class_4_2FF7D360A2F3EC48<::Foundation::ViewObject::ViewObjectHandle>* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14EA31260977A36A__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14EA31260977A36A_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_EA1CE0AF6E069614(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_14EA31260977A36A_METHOD_3_EA1CE0AF6E069614_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_14EA31260977A36A_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
