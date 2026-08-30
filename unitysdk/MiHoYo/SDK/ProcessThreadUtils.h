#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_PROCESSTHREADUTILS_GETTHREADCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA77870)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProcessThreadUtils_TypeDefinitionIndex = 7929;

	class ProcessThreadUtils : public ::System::Object
	{
	public:
		static ::System::Int32 GetThreadCount(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROCESSTHREADUTILS_GETTHREADCOUNT_OFFSET))(a1);
		}
	};
}
