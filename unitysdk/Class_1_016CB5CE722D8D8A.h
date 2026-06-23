#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_70D79F3E41B659AE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_016CB5CE722D8D8A_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x1296F1C0)
#define CLASS_1_016CB5CE722D8D8A_METHOD_1_A96DCA30C6927810_OFFSET UNITYSDK_OFFSET(0x1296F1B0)
#define CLASS_1_016CB5CE722D8D8A__CTOR_OFFSET UNITYSDK_OFFSET(0x1296F1A0)

inline static constexpr unsigned int Class_1_016CB5CE722D8D8A_TypeDefinitionIndex = 75508;

class Class_1_016CB5CE722D8D8A : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::Enum_3_70D79F3E41B659AE Field_1_0; // 0x18

	::System::Void _ctor(::Enum_3_70D79F3E41B659AE a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_70D79F3E41B659AE, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_016CB5CE722D8D8A__CTOR_OFFSET))(this, a1, a2);
	}

	::Enum_3_70D79F3E41B659AE Method_1_A96DCA30C6927810()
	{
		return ((::Enum_3_70D79F3E41B659AE(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016CB5CE722D8D8A_METHOD_1_A96DCA30C6927810_OFFSET))(this);
	}

	::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_016CB5CE722D8D8A_METHOD_1_126AB3935214AA22_OFFSET))(this);
	}
};
