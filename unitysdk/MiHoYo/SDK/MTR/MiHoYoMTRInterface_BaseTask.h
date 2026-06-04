#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_BASETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA189DE0)

namespace MiHoYo::SDK::MTR
{
	inline static constexpr unsigned int MiHoYoMTRInterface_BaseTask_TypeDefinitionIndex = 44043;

	class MiHoYoMTRInterface_BaseTask : public ::System::Object
	{
	public:
		::System::Int32 m_nCount; // 0x10
		::System::Int32 m_nAbortTimeoutCount; // 0x14
		::System::Single m_fTimeoutMillisec; // 0x18
		::System::Int32 m_nTaskID; // 0x1C
		::System::Int32 m_nTimeIntervalMillisec; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MTR_MIHOYOMTRINTERFACE_BASETASK__CTOR_OFFSET))(this);
		}
	};
}
