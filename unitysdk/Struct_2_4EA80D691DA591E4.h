#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_4EA80D691DA591E4_METHOD_2_33FF1EACDFB8E102_OFFSET UNITYSDK_OFFSET(0x86AF0)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x86B40)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x86AE0)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_B1D8E286EA412294_OFFSET UNITYSDK_OFFSET(0x86B30)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_BEA3EF017D8A92A6_OFFSET UNITYSDK_OFFSET(0xAAEBD90)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x86B10)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_E42987AC35C6E85D_OFFSET UNITYSDK_OFFSET(0x86B20)

inline static constexpr unsigned int Struct_2_4EA80D691DA591E4_TypeDefinitionIndex = 64021;

struct alignas(8) Struct_2_4EA80D691DA591E4
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::RootMotion::IKJob::IKTransformRef Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x30
	::Il2CppArray<::System::Single>* Field_2_3; // 0x38
	::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* Field_2_4; // 0x40
	::System::Single Field_2_5; // 0x48
	::UnityEngine::Vector3 Field_2_6; // 0x4C
	::UnityEngine::Vector3 Field_2_7; // 0x58
	::UnityEngine::Matrix4x4 Field_2_8; // 0x64

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4EA80D691DA591E4_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	/*
	::UnityEngine::Quaternion Method_2_33FF1EACDFB8E102(::System::Int32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4EA80D691DA591E4_METHOD_2_33FF1EACDFB8E102_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4EA80D691DA591E4_METHOD_2_C782C60E11964C7F_OFFSET))(this);
	}

	::System::Single Method_2_E42987AC35C6E85D(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_4EA80D691DA591E4_METHOD_2_E42987AC35C6E85D_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1D8E286EA412294(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_4EA80D691DA591E4_METHOD_2_B1D8E286EA412294_OFFSET))(this, a1, a2);
	}

	/*
	static ::UnityEngine::Quaternion Method_2_BEA3EF017D8A92A6(::RootMotion::IKJob::IKTransformRef a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::UnityEngine::Quaternion(*)(::RootMotion::IKJob::IKTransformRef, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_4EA80D691DA591E4_METHOD_2_BEA3EF017D8A92A6_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4EA80D691DA591E4_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}
};
