#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define STRUCT_2_5D55D2D92073E392_STRUCT_2_E499DDD21BF551C3_COMPARE_OFFSET UNITYSDK_OFFSET(0x6FC360)
#define STRUCT_2_5D55D2D92073E392_STRUCT_2_E499DDD21BF551C3_GET_MAXPITCH_OFFSET UNITYSDK_OFFSET(0x6FC3C0)
#define STRUCT_2_5D55D2D92073E392_STRUCT_2_E499DDD21BF551C3_GET_MINPITCH_OFFSET UNITYSDK_OFFSET(0x6FC3B0)
#define STRUCT_2_5D55D2D92073E392_STRUCT_2_E499DDD21BF551C3__CTOR_OFFSET UNITYSDK_OFFSET(0x6FC320)

inline static constexpr unsigned int Struct_2_5D55D2D92073E392_Struct_2_E499DDD21BF551C3_TypeDefinitionIndex = 78859;

struct alignas(4) Struct_2_5D55D2D92073E392_Struct_2_E499DDD21BF551C3
{
	::UnityEngine::Quaternion Field_2_0; // 0x10

	::System::Void _ctor(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_STRUCT_2_E499DDD21BF551C3__CTOR_OFFSET))(this, a1);
	}

	/*
	::UnityEngine::Quaternion Compare(::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a1, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion> a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>, ::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_STRUCT_2_E499DDD21BF551C3_COMPARE_OFFSET))(this, a1, a2);
	}
	*/

	::System::Double get_MinPitch()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_STRUCT_2_E499DDD21BF551C3_GET_MINPITCH_OFFSET))(this);
	}

	::System::Double get_MaxPitch()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D55D2D92073E392_STRUCT_2_E499DDD21BF551C3_GET_MAXPITCH_OFFSET))(this);
	}
};
