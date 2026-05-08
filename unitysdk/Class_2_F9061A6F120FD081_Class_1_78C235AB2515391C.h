#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_F9061A6F120FD081;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_F9061A6F120FD081_CLASS_1_78C235AB2515391C_METHOD_1_542A807679C6B7EB_OFFSET UNITYSDK_OFFSET(0xA9A9200)
#define CLASS_2_F9061A6F120FD081_CLASS_1_78C235AB2515391C__CTOR_OFFSET UNITYSDK_OFFSET(0xA9A91F0)

inline static constexpr unsigned int Class_2_F9061A6F120FD081_Class_1_78C235AB2515391C_TypeDefinitionIndex = 79961;

class Class_2_F9061A6F120FD081_Class_1_78C235AB2515391C : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::System::Action_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* Field_1_2; // 0x18
	::Class_2_F9061A6F120FD081* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_78C235AB2515391C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_542A807679C6B7EB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_F9061A6F120FD081_CLASS_1_78C235AB2515391C_METHOD_1_542A807679C6B7EB_OFFSET))(this, a1);
	}
};
