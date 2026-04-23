#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define CLASS_1_72805800D65E904C_METHOD_1_A32B9564EA324A15_OFFSET UNITYSDK_OFFSET(0xECB9A00)

inline static constexpr unsigned int Class_1_72805800D65E904C_TypeDefinitionIndex = 55436;

class Class_1_72805800D65E904C : public ::System::Object
{
public:
	static ::System::Boolean Method_1_A32B9564EA324A15(::System::Reflection::MethodInfo* a1)
	{
		return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_72805800D65E904C_METHOD_1_A32B9564EA324A15_OFFSET))(a1);
	}
};
