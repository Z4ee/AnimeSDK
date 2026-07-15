#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

#define SERIALIZEDSTENCILSTATE_METHOD_2_2295030FA58C78A0_1_OFFSET UNITYSDK_OFFSET(0x39E9EA0)
#define SERIALIZEDSTENCILSTATE_METHOD_2_2295030FA58C78A0_OFFSET UNITYSDK_OFFSET(0x39E9E00)

inline static constexpr unsigned int SerializedStencilState_TypeDefinitionIndex = 45627;

struct alignas(4) SerializedStencilState
{
	::System::Boolean enabled; // 0x10
	::System::Byte readMask; // 0x11
	::System::Byte writeMask; // 0x12
	::UnityEngine::Rendering::CompareFunction compareFunctionFront; // 0x14
	::UnityEngine::Rendering::StencilOp passOperationFront; // 0x18
	::UnityEngine::Rendering::StencilOp failOperationFront; // 0x1C
	::UnityEngine::Rendering::StencilOp zFailOperationFront; // 0x20
	::UnityEngine::Rendering::CompareFunction compareFunctionBack; // 0x24
	::UnityEngine::Rendering::StencilOp passOperationBack; // 0x28
	::UnityEngine::Rendering::StencilOp failOperationBack; // 0x2C
	::UnityEngine::Rendering::StencilOp zFailOperationBack; // 0x30

	/*
	::System::Void Method_2_2295030FA58C78A0(::UnityEngine::Rendering::StencilState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilState&))((::PBYTE)hIl2Cpp + SERIALIZEDSTENCILSTATE_METHOD_2_2295030FA58C78A0_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_2295030FA58C78A0_1(::UnityEngine::Rendering::StencilState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::StencilState&))((::PBYTE)hIl2Cpp + SERIALIZEDSTENCILSTATE_METHOD_2_2295030FA58C78A0_1_OFFSET))(this, a1);
	}
	*/
};
