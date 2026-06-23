#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_4_C094172340D91CF4_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xF979D10)
#define CLASS_4_C094172340D91CF4_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xF97A040)
#define CLASS_4_C094172340D91CF4_METHOD_4_C2E8BBDD048A1B46_OFFSET UNITYSDK_OFFSET(0xF979E60)
#define CLASS_4_C094172340D91CF4__CTOR_OFFSET UNITYSDK_OFFSET(0xF979F10)

inline static constexpr unsigned int Class_4_C094172340D91CF4_TypeDefinitionIndex = 52491;

class Class_4_C094172340D91CF4 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_F91115D9A1F02F5F<::System::Int32>* Field_4_0; // 0x28
	::Class_4_F91115D9A1F02F5F<::System::Collections::Generic::List_1<::System::Object*>*>* Field_4_1; // 0x30
	::Class_4_B51FB35349ACD175<::System::Int32>* Field_4_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C094172340D91CF4__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C094172340D91CF4_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_C2E8BBDD048A1B46(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_4_C094172340D91CF4_METHOD_4_C2E8BBDD048A1B46_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_C094172340D91CF4_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
