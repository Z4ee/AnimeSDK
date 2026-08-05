#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1AEF5DFE7F1C8F89;
namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D6C116518DDB940_METHOD_1_8A4E7CFB6A3884DD_OFFSET UNITYSDK_OFFSET(0x1253AE80)
#define CLASS_1_4D6C116518DDB940_METHOD_1_C73D895D04A6382A_OFFSET UNITYSDK_OFFSET(0x1253AEE0)
#define CLASS_1_4D6C116518DDB940_METHOD_1_CB8CF89038C44C8A_OFFSET UNITYSDK_OFFSET(0x1253AE30)
#define CLASS_1_4D6C116518DDB940__CTOR_OFFSET UNITYSDK_OFFSET(0x1253ADD0)

inline static constexpr unsigned int Class_1_4D6C116518DDB940_TypeDefinitionIndex = 67706;

class Class_1_4D6C116518DDB940 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_6; // 0x10
	::System::Action* Field_1_7; // 0x18
	::Class_2_1AEF5DFE7F1C8F89* Field_1_2; // 0x20
	::System::Action* Field_1_0; // 0x28
	::MoleMole::UICinemaPlayPageController* Field_1_1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CB8CF89038C44C8A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940_METHOD_1_CB8CF89038C44C8A_OFFSET))(this);
	}

	::System::Void Method_1_8A4E7CFB6A3884DD(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940_METHOD_1_8A4E7CFB6A3884DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C73D895D04A6382A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940_METHOD_1_C73D895D04A6382A_OFFSET))(this, a1);
	}
};
