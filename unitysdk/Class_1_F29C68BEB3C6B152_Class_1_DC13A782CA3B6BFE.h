#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_1_822335EE0A92685B;
class Class_2_FDFE69FE7B72463B;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_1_F29C68BEB3C6B152_CLASS_1_DC13A782CA3B6BFE_METHOD_1_8A7B47496E0F9D5A_OFFSET UNITYSDK_OFFSET(0x167FFA60)
#define CLASS_1_F29C68BEB3C6B152_CLASS_1_DC13A782CA3B6BFE__CTOR_OFFSET UNITYSDK_OFFSET(0x167FFA50)

inline static constexpr unsigned int Class_1_F29C68BEB3C6B152_Class_1_DC13A782CA3B6BFE_TypeDefinitionIndex = 70728;

class Class_1_F29C68BEB3C6B152_Class_1_DC13A782CA3B6BFE : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::System::Action* Field_1_4; // 0x18
	::Class_1_822335EE0A92685B* Field_1_2; // 0x20
	::System::String* Field_1_0; // 0x28
	::System::String* Field_1_1; // 0x30
	::Foundation::Coroutine::CoroutineHandle Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_DC13A782CA3B6BFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8A7B47496E0F9D5A(::Class_2_FDFE69FE7B72463B* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_FDFE69FE7B72463B*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_F29C68BEB3C6B152_CLASS_1_DC13A782CA3B6BFE_METHOD_1_8A7B47496E0F9D5A_OFFSET))(this, a1, a2);
	}
};
