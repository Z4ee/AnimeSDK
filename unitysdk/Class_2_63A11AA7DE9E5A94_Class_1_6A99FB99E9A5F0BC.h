#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/System/Object.h"

class Class_2_63A11AA7DE9E5A94;
class MonoUITableScrollV2;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_63A11AA7DE9E5A94_CLASS_1_6A99FB99E9A5F0BC_METHOD_1_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x17124950)
#define CLASS_2_63A11AA7DE9E5A94_CLASS_1_6A99FB99E9A5F0BC__CTOR_OFFSET UNITYSDK_OFFSET(0x17124940)

inline static constexpr unsigned int Class_2_63A11AA7DE9E5A94_Class_1_6A99FB99E9A5F0BC_TypeDefinitionIndex = 84677;

class Class_2_63A11AA7DE9E5A94_Class_1_6A99FB99E9A5F0BC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Enum_3_2C704E2262533CBD>* Field_1_2; // 0x10
	::Class_2_63A11AA7DE9E5A94* Field_1_1; // 0x18
	::System::Func_1<::System::Boolean>* Field_1_0; // 0x20
	::MonoUITableScrollV2* Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63A11AA7DE9E5A94_CLASS_1_6A99FB99E9A5F0BC__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_63A11AA7DE9E5A94_CLASS_1_6A99FB99E9A5F0BC_METHOD_1_ABFE6A357B89C69A_OFFSET))(this);
	}
};
