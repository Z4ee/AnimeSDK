#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define STRUCT_2_0DC8B4C201AFD519_METHOD_2_C561FF611C07A44C_OFFSET UNITYSDK_OFFSET(0xB0D710)

inline static constexpr unsigned int Struct_2_0DC8B4C201AFD519_TypeDefinitionIndex = 63117;

struct alignas(8) Struct_2_0DC8B4C201AFD519
{
	::RootMotion::IKJob::IKTransformRef Field_2_0; // 0x10
	::RootMotion::IKJob::IKTransformRef Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x30
	::UnityEngine::Quaternion Field_2_3; // 0x34

	::System::Void Method_2_C561FF611C07A44C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_0DC8B4C201AFD519_METHOD_2_C561FF611C07A44C_OFFSET))(this);
	}
};
