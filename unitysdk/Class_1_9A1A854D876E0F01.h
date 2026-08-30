#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class ISystem; }
namespace System { class String; }

#define CLASS_1_9A1A854D876E0F01_METHOD_1_B30D4C3C993C69C9_OFFSET UNITYSDK_OFFSET(0x155A2010)

inline static constexpr unsigned int Class_1_9A1A854D876E0F01_TypeDefinitionIndex = 76293;

class Class_1_9A1A854D876E0F01 : public ::System::Object
{
public:
	static ::System::String* Method_1_B30D4C3C993C69C9(::System::String* a1, ::Entitas::ISystem* a2)
	{
		return ((::System::String*(*)(::System::String*, ::Entitas::ISystem*))((::PBYTE)hIl2Cpp + CLASS_1_9A1A854D876E0F01_METHOD_1_B30D4C3C993C69C9_OFFSET))(a1, a2);
	}
};
