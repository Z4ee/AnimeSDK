#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_9DF8A96088853ABF_STRUCT_2_0213EA2E687DDF4C_METHOD_2_7ABAA176B11E9110_OFFSET UNITYSDK_OFFSET(0x824470)
#define CLASS_1_9DF8A96088853ABF_STRUCT_2_0213EA2E687DDF4C_METHOD_2_D7F0936662AC1A47_OFFSET UNITYSDK_OFFSET(0x824530)

inline static constexpr unsigned int Class_1_9DF8A96088853ABF_Struct_2_0213EA2E687DDF4C_TypeDefinitionIndex = 75188;

struct alignas(4) Class_1_9DF8A96088853ABF_Struct_2_0213EA2E687DDF4C
{
	::System::Single Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x14
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::UnityEngine::Vector3 Field_2_3; // 0x2C
	::UnityEngine::Vector3 Field_2_4; // 0x38

	::UnityEngine::Vector3 Method_2_7ABAA176B11E9110(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9DF8A96088853ABF_STRUCT_2_0213EA2E687DDF4C_METHOD_2_7ABAA176B11E9110_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_D7F0936662AC1A47(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9DF8A96088853ABF_STRUCT_2_0213EA2E687DDF4C_METHOD_2_D7F0936662AC1A47_OFFSET))(this, a1);
	}
};
