#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_C605C4E21DB9EBC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1C852250)

inline static constexpr unsigned int Class_2_C605C4E21DB9EBC4_TypeDefinitionIndex = 24747;

class Class_2_C605C4E21DB9EBC4 : public ::System::Attribute
{
public:
	::System::String* NMJPINAAOLF; // 0x10
	::System::Boolean JGDOAKLJIEH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C605C4E21DB9EBC4__CTOR_OFFSET))(this);
	}
};
