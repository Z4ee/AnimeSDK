#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10;
namespace System { class String; }

#define CLASS_1_09B6D57B12A135F7_PARSE_OFFSET UNITYSDK_OFFSET(0x168774C0)
#define CLASS_1_09B6D57B12A135F7__CTOR_OFFSET UNITYSDK_OFFSET(0x16877530)

inline static constexpr unsigned int Class_1_09B6D57B12A135F7_TypeDefinitionIndex = 60070;

class Class_1_09B6D57B12A135F7 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09B6D57B12A135F7__CTOR_OFFSET))(this);
	}

	::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10* Parse(::System::String* a1)
	{
		return ((::Class_1_47EB23CB5C4B2615_41_Class_1_9A90CD018E72DF20_10*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_09B6D57B12A135F7_PARSE_OFFSET))(this, a1);
	}
};
