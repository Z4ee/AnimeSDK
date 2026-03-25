#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/Struct_2_8024E8CD844B8863.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_DED0576FA812EDC9_METHOD_2_33FF1EACDFB8E102_OFFSET UNITYSDK_OFFSET(0x1425450)
#define STRUCT_2_DED0576FA812EDC9_METHOD_2_755870B55A8B3AFF_OFFSET UNITYSDK_OFFSET(0x1425470)
#define STRUCT_2_DED0576FA812EDC9_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x1425490)
#define STRUCT_2_DED0576FA812EDC9_METHOD_2_BEA3EF017D8A92A6_OFFSET UNITYSDK_OFFSET(0x1066A8B0)
#define STRUCT_2_DED0576FA812EDC9_METHOD_2_E42987AC35C6E85D_OFFSET UNITYSDK_OFFSET(0x1425480)

inline static constexpr unsigned int Struct_2_DED0576FA812EDC9_TypeDefinitionIndex = 55869;

struct alignas(8) Struct_2_DED0576FA812EDC9
{
	::Struct_2_8024E8CD844B8863 Field_2_0; // 0x10
	::Struct_2_8024E8CD844B8863 Field_2_1; // 0x80
	::Il2CppArray<::Struct_2_8024E8CD844B8863>* Field_2_2; // 0xF0
	::Il2CppArray<::System::Single>* Field_2_3; // 0xF8
	::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* Field_2_4; // 0x100
	::System::Single Field_2_5; // 0x108
	::UnityEngine::Vector3 Field_2_6; // 0x10C

	/*
	::UnityEngine::Quaternion Method_2_33FF1EACDFB8E102(::System::Int32 a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_DED0576FA812EDC9_METHOD_2_33FF1EACDFB8E102_OFFSET))(this, a1);
	}
	*/

	::System::Void Method_2_755870B55A8B3AFF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DED0576FA812EDC9_METHOD_2_755870B55A8B3AFF_OFFSET))(this);
	}

	::System::Single Method_2_E42987AC35C6E85D(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_DED0576FA812EDC9_METHOD_2_E42987AC35C6E85D_OFFSET))(this, a1);
	}

	/*
	static ::UnityEngine::Quaternion Method_2_BEA3EF017D8A92A6(::RootMotion::IKJob::IKTransformRef a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
	{
		return ((::UnityEngine::Quaternion(*)(::RootMotion::IKJob::IKTransformRef, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_DED0576FA812EDC9_METHOD_2_BEA3EF017D8A92A6_OFFSET))(a1, a2, a3, a4, a5);
	}
	*/

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_DED0576FA812EDC9_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}
};
