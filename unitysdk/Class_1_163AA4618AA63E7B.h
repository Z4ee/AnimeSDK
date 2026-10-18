#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C6F4C4ABEDB8B5E9;
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_163AA4618AA63E7B_METHOD_1_9FF405B91DBB6D34_OFFSET UNITYSDK_OFFSET(0x1EC7AFB0)
#define CLASS_1_163AA4618AA63E7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC7AEA0)

inline static constexpr unsigned int Class_1_163AA4618AA63E7B_TypeDefinitionIndex = 44298;

class Class_1_163AA4618AA63E7B : public ::System::Object
{
public:
	::Class_1_C6F4C4ABEDB8B5E9* MHFHMGGMICB; // 0x10

	::System::Void _ctor(::Class_1_C6F4C4ABEDB8B5E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C6F4C4ABEDB8B5E9*))((::PBYTE)hIl2Cpp + CLASS_1_163AA4618AA63E7B__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_9FF405B91DBB6D34(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_163AA4618AA63E7B_METHOD_1_9FF405B91DBB6D34_OFFSET))(this, a1, a2);
	}
};
