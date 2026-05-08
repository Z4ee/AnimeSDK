#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2F17A091871CF21D_STRUCT_2_3FA97CC54A1F2DCC_1_COMPARE_OFFSET UNITYSDK_OFFSET(0x946070)
#define STRUCT_2_2F17A091871CF21D_STRUCT_2_3FA97CC54A1F2DCC_1_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x746E80)
#define STRUCT_2_2F17A091871CF21D_STRUCT_2_3FA97CC54A1F2DCC_1_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x746E70)
#define STRUCT_2_2F17A091871CF21D_STRUCT_2_3FA97CC54A1F2DCC_1__CTOR_OFFSET UNITYSDK_OFFSET(0x746D80)

inline static constexpr unsigned int Struct_2_2F17A091871CF21D_Struct_2_3FA97CC54A1F2DCC_1_TypeDefinitionIndex = 66728;

struct alignas(4) Struct_2_2F17A091871CF21D_Struct_2_3FA97CC54A1F2DCC_1
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18

	/*
	::System::Void _ctor(::UnityEngine::Quaternion a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_2F17A091871CF21D_STRUCT_2_3FA97CC54A1F2DCC_1__CTOR_OFFSET))(this, a1, a2, a3);
	}
	*/

	/*
	::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a1, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + STRUCT_2_2F17A091871CF21D_STRUCT_2_3FA97CC54A1F2DCC_1_COMPARE_OFFSET))(this, a1, a2);
	}
	*/

	::System::Double get_MinPitch()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2F17A091871CF21D_STRUCT_2_3FA97CC54A1F2DCC_1_GET_MINPITCH_OFFSET))(this);
	}

	::System::Double get_MaxPitch()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_2F17A091871CF21D_STRUCT_2_3FA97CC54A1F2DCC_1_GET_MAXPITCH_OFFSET))(this);
	}
};
