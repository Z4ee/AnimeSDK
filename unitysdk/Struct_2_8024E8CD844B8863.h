#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_8024E8CD844B8863_METHOD_2_8C8E201B42A915F8_OFFSET UNITYSDK_OFFSET(0x15AADD0)
#define STRUCT_2_8024E8CD844B8863_METHOD_2_CCB4A821E6A9C153_OFFSET UNITYSDK_OFFSET(0x15AADB0)

inline static constexpr unsigned int Struct_2_8024E8CD844B8863_TypeDefinitionIndex = 63102;

struct alignas(8) Struct_2_8024E8CD844B8863
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::RootMotion::IKJob::IKTransformRef Field_2_1; // 0x20
	::System::Boolean Field_2_2; // 0x30
	::UnityEngine::Vector3 Field_2_3; // 0x34
	::UnityEngine::Matrix4x4 Field_2_4; // 0x40

	::System::Void Method_2_CCB4A821E6A9C153(::RootMotion::IKJob::IKTransformRef a1)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef))((::PBYTE)hIl2Cpp + STRUCT_2_8024E8CD844B8863_METHOD_2_CCB4A821E6A9C153_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C8E201B42A915F8(::RootMotion::IKJob::IKTransformRef a1, ::UnityEngine::Vector3& a2, ::UnityEngine::Vector3& a3)
	{
		return ((::System::Void(*)(::PVOID, ::RootMotion::IKJob::IKTransformRef, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_8024E8CD844B8863_METHOD_2_8C8E201B42A915F8_OFFSET))(this, a1, a2, a3);
	}
};
