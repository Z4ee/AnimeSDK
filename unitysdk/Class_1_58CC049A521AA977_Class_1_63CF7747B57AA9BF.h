#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_49ABC235CB23B56F.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_9.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x13D4DE00)
#define CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_602A336CBD30C930_OFFSET UNITYSDK_OFFSET(0x13D4DDF0)
#define CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13D4DDE0)
#define CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF__CTOR_OFFSET UNITYSDK_OFFSET(0x13D4DDD0)

inline static constexpr unsigned int Class_1_58CC049A521AA977_Class_1_63CF7747B57AA9BF_TypeDefinitionIndex = 84020;

class Class_1_58CC049A521AA977_Class_1_63CF7747B57AA9BF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::System::Double>* Field_1_1; // 0x18
	::Struct_2_49ABC235CB23B56F Field_1_2; // 0x20
	::System::Boolean Field_1_7; // 0x30
	::System::Double Field_1_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_602A336CBD30C930(::Struct_2_B6A3FA7992F9F37E_9 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_B6A3FA7992F9F37E_9))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_602A336CBD30C930_OFFSET))(this, a1);
	}

	::System::Void Method_1_2439B52C953E2E46()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_58CC049A521AA977_CLASS_1_63CF7747B57AA9BF_METHOD_1_2439B52C953E2E46_OFFSET))(this);
	}
};
