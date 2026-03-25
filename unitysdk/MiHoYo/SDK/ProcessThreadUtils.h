#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PROCESSTHREADUTILS_GETTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x15F9D320)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProcessThreadUtils_TypeDefinitionIndex = 6970;

	class ProcessThreadUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetThreadCount(::System::Int32 processId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROCESSTHREADUTILS_GETTHREADCOUNT_OFFSET))(processId);
		}
	};
}
