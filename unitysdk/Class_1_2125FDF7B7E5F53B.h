#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Reflection { class MethodInfo; }

#define CLASS_1_2125FDF7B7E5F53B_METHOD_1_6FEBDCB338BF62BA_OFFSET UNITYSDK_OFFSET(0x14222C50)

inline static constexpr unsigned int Class_1_2125FDF7B7E5F53B_TypeDefinitionIndex = 56181;

class Class_1_2125FDF7B7E5F53B : public ::System::Object
{
public:
	static ::System::Boolean Method_1_6FEBDCB338BF62BA(::System::Reflection::MethodInfo* a1)
	{
		return ((::System::Boolean(*)(::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + CLASS_1_2125FDF7B7E5F53B_METHOD_1_6FEBDCB338BF62BA_OFFSET))(a1);
	}
};
