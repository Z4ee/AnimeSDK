#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define STRUCT_2_0DC8B4C201AFD519_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0x87970)

inline static constexpr unsigned int Struct_2_0DC8B4C201AFD519_TypeDefinitionIndex = 68419;

struct alignas(8) Struct_2_0DC8B4C201AFD519
{
	::RootMotion::IKJob::IKTransformRef DHIPFJBEJPI; // 0x10
	::RootMotion::IKJob::IKTransformRef DICDJJOJKGF; // 0x20
	::System::Single APAKCBFMCAB; // 0x30
	::UnityEngine::Quaternion HGLBGLANIIO; // 0x34

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0DC8B4C201AFD519_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}
};
