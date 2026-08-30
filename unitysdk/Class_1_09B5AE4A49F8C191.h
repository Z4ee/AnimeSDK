#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_09B5AE4A49F8C191_EQUALS_OFFSET UNITYSDK_OFFSET(0xFA887C0)
#define CLASS_1_09B5AE4A49F8C191__CTOR_OFFSET UNITYSDK_OFFSET(0xFA88850)

inline static constexpr unsigned int Class_1_09B5AE4A49F8C191_TypeDefinitionIndex = 66175;

class Class_1_09B5AE4A49F8C191 : public ::System::Object
{
public:
	::System::String* AKAGOGENLOP; // 0x10
	::System::Boolean LNBJCJODBML; // 0x18
	::System::UInt32 LLDCHLHNADA; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09B5AE4A49F8C191__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_09B5AE4A49F8C191* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_09B5AE4A49F8C191*))((::PBYTE)hIl2Cpp + CLASS_1_09B5AE4A49F8C191_EQUALS_OFFSET))(this, a1);
	}
};
