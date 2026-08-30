#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7B4E9156998275BE;
namespace System { class String; }
namespace System { class Type; }

#define CLASS_1_163AA4618AA63E7B_METHOD_1_9FF405B91DBB6D34_OFFSET UNITYSDK_OFFSET(0x1E76D680)
#define CLASS_1_163AA4618AA63E7B__CTOR_OFFSET UNITYSDK_OFFSET(0x1E76D570)

inline static constexpr unsigned int Class_1_163AA4618AA63E7B_TypeDefinitionIndex = 42491;

class Class_1_163AA4618AA63E7B : public ::System::Object
{
public:
	::Class_1_7B4E9156998275BE* MHFHMGGMICB; // 0x10

	::System::Void _ctor(::Class_1_7B4E9156998275BE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7B4E9156998275BE*))((::PBYTE)hIl2Cpp + CLASS_1_163AA4618AA63E7B__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_9FF405B91DBB6D34(::System::Type* a1, ::System::String* a2)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_163AA4618AA63E7B_METHOD_1_9FF405B91DBB6D34_OFFSET))(this, a1, a2);
	}
};
