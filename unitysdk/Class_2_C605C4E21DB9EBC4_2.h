#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_C605C4E21DB9EBC4_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1598E7C0)

inline static constexpr unsigned int Class_2_C605C4E21DB9EBC4_2_TypeDefinitionIndex = 52352;

class Class_2_C605C4E21DB9EBC4_2 : public ::System::Attribute
{
public:
	::System::String* GLEHJFMCANF; // 0x10
	::System::Boolean MOKNCFJICIC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C605C4E21DB9EBC4_2__CTOR_OFFSET))(this);
	}
};
