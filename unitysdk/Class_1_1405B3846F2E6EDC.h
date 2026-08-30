#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define CLASS_1_1405B3846F2E6EDC_METHOD_1_73B5330785949326_OFFSET UNITYSDK_OFFSET(0x15648EF0)

inline static constexpr unsigned int Class_1_1405B3846F2E6EDC_TypeDefinitionIndex = 60224;

class Class_1_1405B3846F2E6EDC : public ::System::Object
{
public:
	static ::System::Boolean Method_1_73B5330785949326(::System::Type* a1)
	{
		return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_1405B3846F2E6EDC_METHOD_1_73B5330785949326_OFFSET))(a1);
	}
};
