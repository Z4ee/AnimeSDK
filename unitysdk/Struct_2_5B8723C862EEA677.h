#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_5B8723C862EEA677_METHOD_2_F37D4EBDF7067F90_OFFSET UNITYSDK_OFFSET(0x9F77B0)

inline static constexpr unsigned int Struct_2_5B8723C862EEA677_TypeDefinitionIndex = 92452;

struct alignas(4) Struct_2_5B8723C862EEA677
{
	::System::Int32 Field_2_0; // 0x10

	::System::String* Method_2_F37D4EBDF7067F90()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5B8723C862EEA677_METHOD_2_F37D4EBDF7067F90_OFFSET))(this);
	}
};
