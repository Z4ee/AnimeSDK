#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1AEF5DFE7F1C8F89;
namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_4D6C116518DDB940_METHOD_1_65931DB43F1A7FB7_OFFSET UNITYSDK_OFFSET(0x17901870)
#define CLASS_1_4D6C116518DDB940_METHOD_1_8A4E7CFB6A3884DD_OFFSET UNITYSDK_OFFSET(0x17901920)
#define CLASS_1_4D6C116518DDB940_METHOD_1_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x179018D0)
#define CLASS_1_4D6C116518DDB940__CTOR_OFFSET UNITYSDK_OFFSET(0x17901810)

inline static constexpr unsigned int Class_1_4D6C116518DDB940_TypeDefinitionIndex = 68760;

class Class_1_4D6C116518DDB940 : public ::System::Object
{
public:
	::System::Action* Field_1_3; // 0x10
	::MoleMole::UICinemaPlayPageController* Field_1_1; // 0x18
	::Class_2_1AEF5DFE7F1C8F89* Field_1_0; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_4; // 0x28
	::System::Action* Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_65931DB43F1A7FB7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940_METHOD_1_65931DB43F1A7FB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940_METHOD_1_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_1_8A4E7CFB6A3884DD(::System::Action* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_4D6C116518DDB940_METHOD_1_8A4E7CFB6A3884DD_OFFSET))(this, a1, a2);
	}
};
