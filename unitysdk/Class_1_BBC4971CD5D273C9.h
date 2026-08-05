#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BBC4971CD5D273C9_METHOD_1_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x16827270)
#define CLASS_1_BBC4971CD5D273C9__CTOR_OFFSET UNITYSDK_OFFSET(0x16827260)

inline static constexpr unsigned int Class_1_BBC4971CD5D273C9_TypeDefinitionIndex = 60196;

class Class_1_BBC4971CD5D273C9 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::Single Field_1_0; // 0x18
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBC4971CD5D273C9__CTOR_OFFSET))(this);
	}

	::Class_1_BBC4971CD5D273C9* Method_1_47FCE72550F759BF()
	{
		return ((::Class_1_BBC4971CD5D273C9*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BBC4971CD5D273C9_METHOD_1_47FCE72550F759BF_OFFSET))(this);
	}
};
