#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5D549724E55B05F5_Enum_3_A5191D6218CE9E26.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_2_5D549724E55B05F5_PACKAGEINFORECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x792FF0)

inline static constexpr unsigned int Class_2_5D549724E55B05F5_PackageInfoRecord_TypeDefinitionIndex = 47535;

struct alignas(8) Class_2_5D549724E55B05F5_PackageInfoRecord
{
	::System::String* packageType; // 0x10

	::System::Void _ctor(::Class_2_5D549724E55B05F5_Enum_3_A5191D6218CE9E26 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5D549724E55B05F5_Enum_3_A5191D6218CE9E26))((::PBYTE)hIl2Cpp + CLASS_2_5D549724E55B05F5_PACKAGEINFORECORD__CTOR_OFFSET))(this, a1);
	}
};
