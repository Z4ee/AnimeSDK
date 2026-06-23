#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryRefEnumerator_1.h"
#include "unitysdk/Struct_2_47B08E0540187474.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_63DDC2FA7A3D55CD_STRUCT_2_F3666B24483F0DF0_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x4D2D80)
#define STRUCT_2_63DDC2FA7A3D55CD_STRUCT_2_F3666B24483F0DF0_METHOD_2_5655461459473F4A_OFFSET UNITYSDK_OFFSET(0x4D2D70)
#define STRUCT_2_63DDC2FA7A3D55CD_STRUCT_2_F3666B24483F0DF0__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6920)

inline static constexpr unsigned int Struct_2_63DDC2FA7A3D55CD_Struct_2_F3666B24483F0DF0_TypeDefinitionIndex = 59739;

struct alignas(8) Struct_2_63DDC2FA7A3D55CD_Struct_2_F3666B24483F0DF0
{
	::Foundation::NativeMemoryRefEnumerator_1<::Struct_2_47B08E0540187474> Field_2_0; // 0x10

	::System::Void _ctor(::Foundation::NativeMemoryRefEnumerator_1<::Struct_2_47B08E0540187474> a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::NativeMemoryRefEnumerator_1<::Struct_2_47B08E0540187474>))((::PBYTE)hIl2Cpp + STRUCT_2_63DDC2FA7A3D55CD_STRUCT_2_F3666B24483F0DF0__CTOR_OFFSET))(this, a1);
	}

	/*
	::Foundation::Unreal::FTransform3D& Method_2_5655461459473F4A()
	{
		return ((::Foundation::Unreal::FTransform3D&(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_63DDC2FA7A3D55CD_STRUCT_2_F3666B24483F0DF0_METHOD_2_5655461459473F4A_OFFSET))(this);
	}
	*/

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_63DDC2FA7A3D55CD_STRUCT_2_F3666B24483F0DF0_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}
};
