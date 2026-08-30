#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_8024E8CD844B8863_METHOD_2_8C8E201B42A915F8_OFFSET UNITYSDK_OFFSET(0x155ED0)
#define STRUCT_2_8024E8CD844B8863_METHOD_2_CCB4A821E6A9C153_OFFSET UNITYSDK_OFFSET(0x155EB0)

inline static constexpr unsigned int Struct_2_8024E8CD844B8863_TypeDefinitionIndex = 68402;

struct alignas(8) Struct_2_8024E8CD844B8863
{
	::UnityEngine::Vector3 FJMCLOIEMKG; // 0x10
	::RootMotion::IKJob::IKTransformRef NGOPIKCKJMA; // 0x20
	::System::Boolean EBHIPOBHENF; // 0x30
	::UnityEngine::Vector3 DEFIOCMDPGE; // 0x34
	::UnityEngine::Matrix4x4 DMOMEGLEDOA; // 0x40

	::System::Void Method_2_CCB4A821E6A9C153(::RootMotion::IKJob::IKTransformRef a1)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + STRUCT_2_8024E8CD844B8863_METHOD_2_CCB4A821E6A9C153_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8E201B42A915F8(::RootMotion::IKJob::IKTransformRef a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_8024E8CD844B8863_METHOD_2_8C8E201B42A915F8_OFFSET))(this, a1, a2, a3);
	}
};
