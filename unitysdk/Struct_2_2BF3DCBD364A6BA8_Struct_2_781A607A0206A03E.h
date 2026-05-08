#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeMemoryRefEnumerator_1.h"
#include "unitysdk/Struct_2_47B08E0540187474.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2BF3DCBD364A6BA8_STRUCT_2_781A607A0206A03E_METHOD_2_00A97C733AC5B210_OFFSET UNITYSDK_OFFSET(0x6ECFB0)
#define STRUCT_2_2BF3DCBD364A6BA8_STRUCT_2_781A607A0206A03E_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x6ECFC0)
#define STRUCT_2_2BF3DCBD364A6BA8_STRUCT_2_781A607A0206A03E__CTOR_OFFSET UNITYSDK_OFFSET(0x2E41C0)

inline static constexpr unsigned int Struct_2_2BF3DCBD364A6BA8_Struct_2_781A607A0206A03E_TypeDefinitionIndex = 76915;

struct alignas(8) Struct_2_2BF3DCBD364A6BA8_Struct_2_781A607A0206A03E
{
	::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::Struct_2_47B08E0540187474> Field_2_0; // 0x10

	::System::Void _ctor(::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::Struct_2_47B08E0540187474> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::Struct_2_47B08E0540187474>))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_STRUCT_2_781A607A0206A03E__CTOR_OFFSET))(this, a1);
	}

	/*
	::Foundation::Unreal::FTransform3D& Method_2_00A97C733AC5B210()
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_STRUCT_2_781A607A0206A03E_METHOD_2_00A97C733AC5B210_OFFSET))(this);
	}
	*/

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2BF3DCBD364A6BA8_STRUCT_2_781A607A0206A03E_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
