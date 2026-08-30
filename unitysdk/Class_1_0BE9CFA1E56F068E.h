#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_0BE9CFA1E56F068E_METHOD_1_1325B9879381C3A3_OFFSET UNITYSDK_OFFSET(0x18168DC0)
#define CLASS_1_0BE9CFA1E56F068E__CTOR_OFFSET UNITYSDK_OFFSET(0x18168E70)

inline static constexpr unsigned int Class_1_0BE9CFA1E56F068E_TypeDefinitionIndex = 49504;

class Class_1_0BE9CFA1E56F068E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0BE9CFA1E56F068E__CTOR_OFFSET))(this);
	}

	static ::System::String* Method_1_1325B9879381C3A3(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0BE9CFA1E56F068E_METHOD_1_1325B9879381C3A3_OFFSET))(a1);
	}
};
