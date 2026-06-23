#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_FCAF801AC482D3B5;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_88638A7F7DF7E055_CLASS_1_33053CA79D924E04_METHOD_1_7440AF7CB1A6626E_OFFSET UNITYSDK_OFFSET(0x1774C5C0)
#define CLASS_1_88638A7F7DF7E055_CLASS_1_33053CA79D924E04__CTOR_OFFSET UNITYSDK_OFFSET(0x1774C5B0)

inline static constexpr unsigned int Class_1_88638A7F7DF7E055_Class_1_33053CA79D924E04_TypeDefinitionIndex = 48374;

class Class_1_88638A7F7DF7E055_Class_1_33053CA79D924E04 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_5_FCAF801AC482D3B5*>* Field_1_0; // 0x10
	::System::Action_1<::Class_5_FCAF801AC482D3B5*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88638A7F7DF7E055_CLASS_1_33053CA79D924E04__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7440AF7CB1A6626E(::Class_5_FCAF801AC482D3B5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_5_FCAF801AC482D3B5*))((::PBYTE)hIl2Cpp + CLASS_1_88638A7F7DF7E055_CLASS_1_33053CA79D924E04_METHOD_1_7440AF7CB1A6626E_OFFSET))(this, a1);
	}
};
