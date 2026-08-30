#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_HTTPINTERCEPTORMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1AEAD020)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HttpInterceptorManager_TypeDefinitionIndex = 7919;

	class HttpInterceptorManager : public ::System::Object
	{
	public:
		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPINTERCEPTORMANAGER_INIT_OFFSET))();
		}
	};
}
