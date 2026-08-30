#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define CLASS_1_1A878ADA0ED401B8_METHOD_1_935CA4347384090C_OFFSET UNITYSDK_OFFSET(0x18E4E770)

inline static constexpr unsigned int Class_1_1A878ADA0ED401B8_TypeDefinitionIndex = 60223;

class Class_1_1A878ADA0ED401B8 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_935CA4347384090C(::System::Reflection::MethodInfo* a1)
	{
		return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_1A878ADA0ED401B8_METHOD_1_935CA4347384090C_OFFSET))(a1);
	}
};
