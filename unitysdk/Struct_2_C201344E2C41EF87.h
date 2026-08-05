#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C201344E2C41EF87_Enum_3_A18504ADD6023325.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_C201344E2C41EF87_METHOD_2_71E25A039EF7FB83_OFFSET UNITYSDK_OFFSET(0x15FFF380)

inline static constexpr unsigned int Struct_2_C201344E2C41EF87_TypeDefinitionIndex = 44428;

struct alignas(4) Struct_2_C201344E2C41EF87
{
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_1; // 0x10
	::System::Nullable_1<::Struct_2_C201344E2C41EF87_Enum_3_A18504ADD6023325> Field_2_0; // 0x20

	static ::Struct_2_C201344E2C41EF87 Method_2_71E25A039EF7FB83()
	{
		return ((::Struct_2_C201344E2C41EF87(*)())((::PBYTE)hIl2Cpp + STRUCT_2_C201344E2C41EF87_METHOD_2_71E25A039EF7FB83_OFFSET))();
	}
};
