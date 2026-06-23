#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

class Class_3_B537A0AA78803363;
class Class_3_CF43FA1E89397A1C;
class Class_3_DCB7F8B839F0C44B_4;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_51B64C25E9BF275A_METHOD_4_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x19520B50)
#define CLASS_4_51B64C25E9BF275A_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x19521060)
#define CLASS_4_51B64C25E9BF275A_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x19520DC0)
#define CLASS_4_51B64C25E9BF275A__CTOR_OFFSET UNITYSDK_OFFSET(0x19520E10)

inline static constexpr unsigned int Class_4_51B64C25E9BF275A_TypeDefinitionIndex = 65964;

class Class_4_51B64C25E9BF275A : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_CF43FA1E89397A1C* Field_4_4; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::Int32>*>* Field_4_1; // 0x30
	::Class_3_B537A0AA78803363* Field_4_3; // 0x38
	::Class_3_CF43FA1E89397A1C* Field_4_5; // 0x40
	::Class_3_DCB7F8B839F0C44B_4* Field_4_0; // 0x48
	::Class_4_B51FB35349ACD175<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_51B64C25E9BF275A__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_51B64C25E9BF275A_METHOD_4_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_51B64C25E9BF275A_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_51B64C25E9BF275A_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
