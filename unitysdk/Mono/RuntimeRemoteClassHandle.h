#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/RuntimeStructs_RemoteClass.h"
#include "unitysdk/System/ValueType.h"

#define MONO_RUNTIMEREMOTECLASSHANDLE_GET_PROXYCLASS_OFFSET UNITYSDK_OFFSET(0x20CB910)

namespace Mono
{
	inline static constexpr unsigned int RuntimeRemoteClassHandle_TypeDefinitionIndex = 6;

	struct alignas(8) RuntimeRemoteClassHandle
	{
		::Mono::RuntimeStructs_RemoteClass* value; // 0x10

		/*
		::Mono::RuntimeClassHandle get_ProxyClass()
		{
			return ((::Mono::RuntimeClassHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_RUNTIMEREMOTECLASSHANDLE_GET_PROXYCLASS_OFFSET))(this);
		}
		*/
	};
}
