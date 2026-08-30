#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_35D18DB26918CC5D_METHOD_1_C3632512BD271E83_OFFSET UNITYSDK_OFFSET(0x1C845AC0)

inline static constexpr unsigned int Class_1_35D18DB26918CC5D_TypeDefinitionIndex = 24569;

class Class_1_35D18DB26918CC5D : public ::System::Object
{
public:
	static ::System::String* Method_1_C3632512BD271E83(::System::Object* a1)
	{
		return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_35D18DB26918CC5D_METHOD_1_C3632512BD271E83_OFFSET))(a1);
	}
};
