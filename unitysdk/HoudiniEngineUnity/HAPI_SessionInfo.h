#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_TCP_PortType.h"
#include "unitysdk/HoudiniEngineUnity/HAPI_ThriftSharedMemoryBufferType.h"
#include "unitysdk/System/ValueType.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HAPI_SessionInfo_TypeDefinitionIndex = 38337;

	struct alignas(8) HAPI_SessionInfo
	{
		::System::Int32 connectionCount; // 0x10
		::HoudiniEngineUnity::HAPI_TCP_PortType portType; // 0x14
		::System::Int32 minPort; // 0x18
		::System::Int32 maxPort; // 0x1C
		::Il2CppArray<::System::Int32>* ports; // 0x20
		::HoudiniEngineUnity::HAPI_ThriftSharedMemoryBufferType sharedMemoryBufferType; // 0x28
		::System::Int64 sharedMemoryBufferSize; // 0x30
		::System::Boolean enableSharedMemoryDataTransfer; // 0x38
	};
}
