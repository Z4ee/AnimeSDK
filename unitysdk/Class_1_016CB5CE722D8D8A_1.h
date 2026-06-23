#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_67693CAD6D4923AA.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_016CB5CE722D8D8A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11CD8AC0)

inline static constexpr unsigned int Class_1_016CB5CE722D8D8A_1_TypeDefinitionIndex = 86997;

class Class_1_016CB5CE722D8D8A_1 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::System::String* Field_1_1; // 0x18
	::Enum_3_67693CAD6D4923AA Field_1_0; // 0x20

	::System::Void _ctor(::Enum_3_67693CAD6D4923AA a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_67693CAD6D4923AA, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_016CB5CE722D8D8A_1__CTOR_OFFSET))(this, a1, a2);
	}
};
