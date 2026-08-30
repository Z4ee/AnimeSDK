#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_4EA80D691DA591E4_METHOD_2_33FF1EACDFB8E102_OFFSET UNITYSDK_OFFSET(0x8C380)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0x8C3D0)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0x8C370)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_B1D8E286EA412294_OFFSET UNITYSDK_OFFSET(0x8C3C0)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_BEA3EF017D8A92A6_OFFSET UNITYSDK_OFFSET(0xBEA7AF0)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x8C3A0)
#define STRUCT_2_4EA80D691DA591E4_METHOD_2_E42987AC35C6E85D_OFFSET UNITYSDK_OFFSET(0x8C3B0)

inline static constexpr unsigned int Struct_2_4EA80D691DA591E4_TypeDefinitionIndex = 68404;

struct alignas(8) Struct_2_4EA80D691DA591E4
{
	::UnityEngine::Vector3 FJMCLOIEMKG; // 0x10
	::RootMotion::IKJob::IKTransformRef NGOPIKCKJMA; // 0x20
	::System::Boolean EBHIPOBHENF; // 0x30
	::Il2CppArray<::System::Single>* GDNGFPHJGAK; // 0x38
	::Il2CppArray<::RootMotion::IKJob::IKTransformRef>* JDGAKOINMEA; // 0x40
	::System::Single APAKCBFMCAB; // 0x48
	::UnityEngine::Vector3 MCLLALGABAB; // 0x4C
	::UnityEngine::Vector3 DEFIOCMDPGE; // 0x58
	::UnityEngine::Matrix4x4 DMOMEGLEDOA; // 0x64

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
