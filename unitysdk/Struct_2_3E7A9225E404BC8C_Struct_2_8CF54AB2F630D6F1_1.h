#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ReadOnlyNativeMemoryRefEnumerator_1.h"
#include "unitysdk/Struct_2_0E3F30CCF139806D.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/AnimationStream.h"

#define STRUCT_2_3E7A9225E404BC8C_STRUCT_2_8CF54AB2F630D6F1_1_METHOD_2_15E6F0B8F3BB6F4A_OFFSET UNITYSDK_OFFSET(0x804AD0)
#define STRUCT_2_3E7A9225E404BC8C_STRUCT_2_8CF54AB2F630D6F1_1_METHOD_2_3A2C822D72194648_OFFSET UNITYSDK_OFFSET(0x7FCBA0)
#define STRUCT_2_3E7A9225E404BC8C_STRUCT_2_8CF54AB2F630D6F1_1_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x330BB0)
#define STRUCT_2_3E7A9225E404BC8C_STRUCT_2_8CF54AB2F630D6F1_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7FCB40)

inline static constexpr unsigned int Struct_2_3E7A9225E404BC8C_Struct_2_8CF54AB2F630D6F1_1_TypeDefinitionIndex = 76611;

struct alignas(8) Struct_2_3E7A9225E404BC8C_Struct_2_8CF54AB2F630D6F1_1
{
	::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::Struct_2_0E3F30CCF139806D> Field_2_1; // 0x10
	::UnityEngine::Animations::AnimationStream Field_2_0; // 0x28

	::System::Void _ctor(::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::Struct_2_0E3F30CCF139806D> a1, ::UnityEngine::Animations::AnimationStream a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ReadOnlyNativeMemoryRefEnumerator_1<::Struct_2_0E3F30CCF139806D>, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_3E7A9225E404BC8C_STRUCT_2_8CF54AB2F630D6F1_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E7A9225E404BC8C_STRUCT_2_8CF54AB2F630D6F1_1_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	/*
	::Foundation::Unreal::FTransform3D Method_2_3A2C822D72194648()
	{
		return ((::Foundation::Unreal::FTransform3D(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E7A9225E404BC8C_STRUCT_2_8CF54AB2F630D6F1_1_METHOD_2_3A2C822D72194648_OFFSET))(this);
	}
	*/

	/*
	::System::Void Method_2_15E6F0B8F3BB6F4A(::Foundation::Unreal::FTransform3D a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FTransform3D))((::PBYTE)hIl2Cpp + STRUCT_2_3E7A9225E404BC8C_STRUCT_2_8CF54AB2F630D6F1_1_METHOD_2_15E6F0B8F3BB6F4A_OFFSET))(this, a1);
	}
	*/
};
