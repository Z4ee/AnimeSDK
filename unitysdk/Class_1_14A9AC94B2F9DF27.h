#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_14A9AC94B2F9DF27_METHOD_1_631D2F9F05C7B729_OFFSET UNITYSDK_OFFSET(0x1CB8DE80)

inline static constexpr unsigned int Class_1_14A9AC94B2F9DF27_TypeDefinitionIndex = 66342;

class Class_1_14A9AC94B2F9DF27 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	// static const ::System::String* Field_1_7; // 0x0
	// static const ::System::String* Field_1_6; // 0x0

	static ::System::Boolean Method_1_631D2F9F05C7B729(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_14A9AC94B2F9DF27_METHOD_1_631D2F9F05C7B729_OFFSET))(a1);
	}
};
