#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_E4446863CEE2BD81_METHOD_2_943F8057A94AF521_OFFSET UNITYSDK_OFFSET(0x15F2F7B0)
#define STRUCT_2_E4446863CEE2BD81_METHOD_2_EBCBC2956617DF1D_OFFSET UNITYSDK_OFFSET(0x15F2F800)
#define STRUCT_2_E4446863CEE2BD81__CTOR_1_OFFSET UNITYSDK_OFFSET(0x38B0FB0)
#define STRUCT_2_E4446863CEE2BD81__CTOR_2_OFFSET UNITYSDK_OFFSET(0x38FA000)
#define STRUCT_2_E4446863CEE2BD81__CTOR_3_OFFSET UNITYSDK_OFFSET(0x38FA010)
#define STRUCT_2_E4446863CEE2BD81__CTOR_OFFSET UNITYSDK_OFFSET(0x164FF0)

inline static constexpr unsigned int Struct_2_E4446863CEE2BD81_TypeDefinitionIndex = 70636;

struct alignas(8) Struct_2_E4446863CEE2BD81
{
	::System::Int64 Field_2_0; // 0x10
	::System::Double Field_2_1; // 0x10

	::System::Void _ctor(::System::Int64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + STRUCT_2_E4446863CEE2BD81__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1(::System::Double a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_E4446863CEE2BD81__CTOR_1_OFFSET))(this, a1);
	}

	::System::Void _ctor_2(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_E4446863CEE2BD81__CTOR_2_OFFSET))(this, a1);
	}

	::System::Void _ctor_3(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_E4446863CEE2BD81__CTOR_3_OFFSET))(this, a1);
	}

	static ::Struct_2_E4446863CEE2BD81 Method_2_943F8057A94AF521(::System::Int64 a1)
	{
		return ((::Struct_2_E4446863CEE2BD81(*)(::System::Int64))((::PBYTE)hIl2Cpp + STRUCT_2_E4446863CEE2BD81_METHOD_2_943F8057A94AF521_OFFSET))(a1);
	}

	static ::Struct_2_E4446863CEE2BD81 Method_2_EBCBC2956617DF1D(::System::Double a1)
	{
		return ((::Struct_2_E4446863CEE2BD81(*)(::System::Double))((::PBYTE)hIl2Cpp + STRUCT_2_E4446863CEE2BD81_METHOD_2_EBCBC2956617DF1D_OFFSET))(a1);
	}
};
