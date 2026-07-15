#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B30FA7BF7E9CB8E9;
namespace System { class String; }

#define CLASS_1_E94FC5A5C71A30F3_METHOD_1_005A58C968FF2311_OFFSET UNITYSDK_OFFSET(0x18F07B50)
#define CLASS_1_E94FC5A5C71A30F3_METHOD_1_F9C4873BE47ECDE6_OFFSET UNITYSDK_OFFSET(0x18F07E30)

inline static constexpr unsigned int Class_1_E94FC5A5C71A30F3_TypeDefinitionIndex = 65870;

class Class_1_E94FC5A5C71A30F3 : public ::System::Object
{
public:
	static ::Class_1_B30FA7BF7E9CB8E9* Method_1_005A58C968FF2311(::System::Single a1)
	{
		return ((::Class_1_B30FA7BF7E9CB8E9*(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E94FC5A5C71A30F3_METHOD_1_005A58C968FF2311_OFFSET))(a1);
	}

	static ::Class_1_B30FA7BF7E9CB8E9* Method_1_F9C4873BE47ECDE6(::System::String* a1, ::System::Single a2)
	{
		return ((::Class_1_B30FA7BF7E9CB8E9*(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_E94FC5A5C71A30F3_METHOD_1_F9C4873BE47ECDE6_OFFSET))(a1, a2);
	}
};
