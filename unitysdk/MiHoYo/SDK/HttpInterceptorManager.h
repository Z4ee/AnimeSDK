#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_HTTPINTERCEPTORMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x15F13C70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HttpInterceptorManager_TypeDefinitionIndex = 6960;

	class HttpInterceptorManager : public ::System::Object
	{
	public:
		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPINTERCEPTORMANAGER_INIT_OFFSET))();
		}
	};
}
