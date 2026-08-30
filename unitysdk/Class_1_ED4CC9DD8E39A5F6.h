#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_ED4CC9DD8E39A5F6_METHOD_1_9105D5A81CE828FF_OFFSET UNITYSDK_OFFSET(0x1D07D920)

inline static constexpr unsigned int Class_1_ED4CC9DD8E39A5F6_TypeDefinitionIndex = 24564;

class Class_1_ED4CC9DD8E39A5F6 : public ::System::Object
{
public:
	static ::System::Int32 Method_1_9105D5A81CE828FF(::System::String* a1)
	{
		return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ED4CC9DD8E39A5F6_METHOD_1_9105D5A81CE828FF_OFFSET))(a1);
	}
};
