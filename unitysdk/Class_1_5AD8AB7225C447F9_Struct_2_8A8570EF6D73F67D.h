#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5AD8AB7225C447F9_BlobLabel.h"
#include "unitysdk/System/ValueType.h"

#define CLASS_1_5AD8AB7225C447F9_STRUCT_2_8A8570EF6D73F67D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x22BA1D0)
#define CLASS_1_5AD8AB7225C447F9_STRUCT_2_8A8570EF6D73F67D__CTOR_OFFSET UNITYSDK_OFFSET(0x22BA1C0)

inline static constexpr unsigned int Class_1_5AD8AB7225C447F9_Struct_2_8A8570EF6D73F67D_TypeDefinitionIndex = 10042;

struct alignas(4) Class_1_5AD8AB7225C447F9_Struct_2_8A8570EF6D73F67D
{
	::Class_1_5AD8AB7225C447F9_BlobLabel Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14

	::System::Void _ctor(::Class_1_5AD8AB7225C447F9_BlobLabel a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5AD8AB7225C447F9_BlobLabel))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_STRUCT_2_8A8570EF6D73F67D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5AD8AB7225C447F9_STRUCT_2_8A8570EF6D73F67D_DISPOSE_OFFSET))(this);
	}
};
