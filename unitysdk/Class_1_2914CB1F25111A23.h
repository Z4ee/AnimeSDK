#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_2914CB1F25111A23_METHOD_1_651F1EFCE0204CC7_OFFSET UNITYSDK_OFFSET(0x1446E710)

inline static constexpr unsigned int Class_1_2914CB1F25111A23_TypeDefinitionIndex = 56192;

class Class_1_2914CB1F25111A23 : public ::System::Object
{
public:
	static ::System::Single Method_1_651F1EFCE0204CC7(::System::String* a1, ::System::Single a2)
	{
		return ((::System::Single(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2914CB1F25111A23_METHOD_1_651F1EFCE0204CC7_OFFSET))(a1, a2);
	}
};
