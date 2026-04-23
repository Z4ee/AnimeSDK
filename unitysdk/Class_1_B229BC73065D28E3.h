#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B229BC73065D28E3__CTOR_OFFSET UNITYSDK_OFFSET(0x17F51250)

inline static constexpr unsigned int Class_1_B229BC73065D28E3_TypeDefinitionIndex = 39383;

class Class_1_B229BC73065D28E3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B229BC73065D28E3__CTOR_OFFSET))(this);
	}
};
