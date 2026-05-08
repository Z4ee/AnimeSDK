#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_3_3522289DFBB97479_STRUCT_2_C79285C075DAFC1C_1_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x75E520)
#define CLASS_3_3522289DFBB97479_STRUCT_2_C79285C075DAFC1C_1_TOSTRING_OFFSET UNITYSDK_OFFSET(0x75E510)

inline static constexpr unsigned int Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1_TypeDefinitionIndex = 77308;

struct alignas(8) Class_3_3522289DFBB97479_Struct_2_C79285C075DAFC1C_1
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_STRUCT_2_C79285C075DAFC1C_1_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3522289DFBB97479_STRUCT_2_C79285C075DAFC1C_1_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
