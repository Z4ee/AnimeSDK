#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_8BEA00AA8370ACAC.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C5F6CE4894BCA161_METHOD_1_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x166502C0)
#define CLASS_1_C5F6CE4894BCA161__CTOR_OFFSET UNITYSDK_OFFSET(0x16650130)

inline static constexpr unsigned int Class_1_C5F6CE4894BCA161_TypeDefinitionIndex = 55181;

class Class_1_C5F6CE4894BCA161 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_4; // 0x18
	::System::Collections::Generic::List_1<::System::Boolean>* Field_1_2; // 0x20
	::System::Collections::Generic::List_1<::Struct_2_8BEA00AA8370ACAC>* Field_1_5; // 0x28
	::System::Collections::Generic::List_1<::System::Single>* Field_1_0; // 0x30
	::System::Int32 Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5F6CE4894BCA161__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5F6CE4894BCA161_METHOD_1_0FD0EC313FAAB75A_OFFSET))(this);
	}
};
