#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_E4446863CEE2BD81_METHOD_2_943F8057A94AF521_OFFSET UNITYSDK_OFFSET(0x16116600)
#define STRUCT_2_E4446863CEE2BD81_METHOD_2_EBCBC2956617DF1D_OFFSET UNITYSDK_OFFSET(0x16116650)
#define STRUCT_2_E4446863CEE2BD81__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2DF3D00)
#define STRUCT_2_E4446863CEE2BD81__CTOR_2_OFFSET UNITYSDK_OFFSET(0x2DF3D10)
#define STRUCT_2_E4446863CEE2BD81__CTOR_3_OFFSET UNITYSDK_OFFSET(0x2DF3D20)
#define STRUCT_2_E4446863CEE2BD81__CTOR_OFFSET UNITYSDK_OFFSET(0xC610)

inline static constexpr unsigned int Struct_2_E4446863CEE2BD81_TypeDefinitionIndex = 73936;

struct alignas(8) Struct_2_E4446863CEE2BD81
{
	::System::Int64 JNAJDDGEOAD; // 0x10
	::System::Double GMENJHEBMHE; // 0x10

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
