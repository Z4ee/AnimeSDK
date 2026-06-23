#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_2_EE0106BAC68200BB_STRUCT_2_B3F7444A521CED3F_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x879B10)

inline static constexpr unsigned int Class_2_EE0106BAC68200BB_Struct_2_B3F7444A521CED3F_TypeDefinitionIndex = 45963;

struct alignas(8) Class_2_EE0106BAC68200BB_Struct_2_B3F7444A521CED3F
{
	::Foundation::AssetRequestHandle Field_2_0; // 0x10
	::Foundation::AssetPath Field_2_1; // 0x30

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EE0106BAC68200BB_STRUCT_2_B3F7444A521CED3F_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}
};
