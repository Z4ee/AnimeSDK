#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"

#define SERIALIZEDDEPTHSTATE_METHOD_2_59D721641B0589C1_1_OFFSET UNITYSDK_OFFSET(0x15FDE0)
#define SERIALIZEDDEPTHSTATE_METHOD_2_59D721641B0589C1_OFFSET UNITYSDK_OFFSET(0x15FD80)

inline static constexpr unsigned int SerializedDepthState_TypeDefinitionIndex = 47877;

struct alignas(4) SerializedDepthState
{
	::System::Boolean writeEnabled; // 0x10
	::UnityEngine::Rendering::CompareFunction compareFunction; // 0x14

	/*
	::System::Void Method_2_59D721641B0589C1(::UnityEngine::Rendering::DepthState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DepthState&))((::PBYTE)hIl2Cpp + SERIALIZEDDEPTHSTATE_METHOD_2_59D721641B0589C1_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_59D721641B0589C1_1(::UnityEngine::Rendering::DepthState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DepthState&))((::PBYTE)hIl2Cpp + SERIALIZEDDEPTHSTATE_METHOD_2_59D721641B0589C1_1_OFFSET))(this, a1);
	}
	*/
};
