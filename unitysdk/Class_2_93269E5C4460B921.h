#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_016CB5CE722D8D8A_1.h"
#include "unitysdk/Enum_3_70D79F3E41B659AE.h"

namespace System { class String; }

#define CLASS_2_93269E5C4460B921_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x12C233C0)
#define CLASS_2_93269E5C4460B921_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x12C233D0)
#define CLASS_2_93269E5C4460B921__CTOR_OFFSET UNITYSDK_OFFSET(0x12C233B0)

inline static constexpr unsigned int Class_2_93269E5C4460B921_TypeDefinitionIndex = 49689;

class Class_2_93269E5C4460B921 : public ::Class_1_016CB5CE722D8D8A_1
{
public:
	::System::Int32 Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_70D79F3E41B659AE a1, ::System::String* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_70D79F3E41B659AE, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_93269E5C4460B921__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_93269E5C4460B921_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_93269E5C4460B921_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
