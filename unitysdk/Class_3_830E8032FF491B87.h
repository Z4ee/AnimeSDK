#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_2FF7D360A2F3EC48;

#define CLASS_3_830E8032FF491B87_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x12C902D0)
#define CLASS_3_830E8032FF491B87_METHOD_3_BB05EEC9DF987392_OFFSET UNITYSDK_OFFSET(0x12C90530)
#define CLASS_3_830E8032FF491B87_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x12C90BB0)
#define CLASS_3_830E8032FF491B87_METHOD_3_E82718B50EFFCD4F_OFFSET UNITYSDK_OFFSET(0x12C90B00)
#define CLASS_3_830E8032FF491B87__CTOR_OFFSET UNITYSDK_OFFSET(0x12C90940)

inline static constexpr unsigned int Class_3_830E8032FF491B87_TypeDefinitionIndex = 67095;

class Class_3_830E8032FF491B87 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_2; // 0x18
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x20
	::Class_4_2FF7D360A2F3EC48<::System::Int32>* Field_3_1; // 0x28
	::Class_3_CF43FA1E89397A1C* Field_3_5; // 0x30
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_4; // 0x38
	::Class_4_2FF7D360A2F3EC48<::System::Boolean>* Field_3_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_830E8032FF491B87__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_830E8032FF491B87_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_BB05EEC9DF987392(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_830E8032FF491B87_METHOD_3_BB05EEC9DF987392_OFFSET))(this, a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_3_E82718B50EFFCD4F(::Struct_2_29439DBE2B63DCF3 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::Struct_2_29439DBE2B63DCF3))((::PBYTE)hIl2Cpp + CLASS_3_830E8032FF491B87_METHOD_3_E82718B50EFFCD4F_OFFSET))(a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_830E8032FF491B87_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
