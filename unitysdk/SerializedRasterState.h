#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CullMode.h"

#define SERIALIZEDRASTERSTATE_METHOD_2_5319DB7EC3C0925F_1_OFFSET UNITYSDK_OFFSET(0x14ACC0)
#define SERIALIZEDRASTERSTATE_METHOD_2_5319DB7EC3C0925F_OFFSET UNITYSDK_OFFSET(0x14AC30)

inline static constexpr unsigned int SerializedRasterState_TypeDefinitionIndex = 44710;

struct alignas(4) SerializedRasterState
{
	::UnityEngine::Rendering::CullMode cullingMode; // 0x10
	::System::Boolean depthClip; // 0x14
	::System::Int32 offsetUnits; // 0x18
	::System::Single offsetFactor; // 0x1C
	::System::Boolean conservative; // 0x20

	/*
	::System::Void Method_2_5319DB7EC3C0925F(::UnityEngine::Rendering::RasterState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RasterState&))((::PBYTE)hIl2Cpp + SERIALIZEDRASTERSTATE_METHOD_2_5319DB7EC3C0925F_OFFSET))(this, a1);
	}
	*/

	/*
	::System::Void Method_2_5319DB7EC3C0925F_1(::UnityEngine::Rendering::RasterState& a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RasterState&))((::PBYTE)hIl2Cpp + SERIALIZEDRASTERSTATE_METHOD_2_5319DB7EC3C0925F_1_OFFSET))(this, a1);
	}
	*/
};
