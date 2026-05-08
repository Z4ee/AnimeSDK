#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C9D60C1B332EDA68_Struct_2_83143841FFE32BF9.h"
#include "unitysdk/Class_1_C9D60C1B332EDA68_Struct_2_FF35D64B04BF12C3.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_C9D60C1B332EDA68_STRUCT_2_AE9A83ED70A1D486_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7E45F0)
#define CLASS_1_C9D60C1B332EDA68_STRUCT_2_AE9A83ED70A1D486_METHOD_2_4F54E38D7A0716B3_OFFSET UNITYSDK_OFFSET(0x7E4660)
#define CLASS_1_C9D60C1B332EDA68_STRUCT_2_AE9A83ED70A1D486_METHOD_2_674524A234498963_OFFSET UNITYSDK_OFFSET(0x7E4600)
#define CLASS_1_C9D60C1B332EDA68_STRUCT_2_AE9A83ED70A1D486_METHOD_2_8E51D9ED71E4930C_OFFSET UNITYSDK_OFFSET(0x7E4630)

inline static constexpr unsigned int Class_1_C9D60C1B332EDA68_Struct_2_AE9A83ED70A1D486_TypeDefinitionIndex = 63656;

struct alignas(8) Class_1_C9D60C1B332EDA68_Struct_2_AE9A83ED70A1D486
{
	::UnityEngine::Matrix4x4 Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x50
	::UnityEngine::Vector3 Field_2_2; // 0x58
	::Unity::Collections::NativeArray_1<::Class_1_C9D60C1B332EDA68_Struct_2_FF35D64B04BF12C3> Field_2_3; // 0x68
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Field_2_4; // 0x78
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Field_2_5; // 0x88
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Field_2_6; // 0x98
	::Unity::Collections::NativeArray_1<::Class_1_C9D60C1B332EDA68_Struct_2_83143841FFE32BF9> Field_2_7; // 0xA8

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_STRUCT_2_AE9A83ED70A1D486_EXECUTE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_674524A234498963(::UnityEngine::Vector3 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_STRUCT_2_AE9A83ED70A1D486_METHOD_2_674524A234498963_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_2_8E51D9ED71E4930C(::UnityEngine::Vector3 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_STRUCT_2_AE9A83ED70A1D486_METHOD_2_8E51D9ED71E4930C_OFFSET))(this, a1);
	}

	::UnityEngine::Vector2 Method_2_4F54E38D7A0716B3(::UnityEngine::Vector3 a1, ::UnityEngine::Vector2 a2)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_C9D60C1B332EDA68_STRUCT_2_AE9A83ED70A1D486_METHOD_2_4F54E38D7A0716B3_OFFSET))(this, a1, a2);
	}
};
