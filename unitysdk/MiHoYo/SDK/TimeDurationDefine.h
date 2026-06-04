#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_TIMEDURATIONDEFINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1842F320)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TimeDurationDefine_TypeDefinitionIndex = 7551;

	class TimeDurationDefine : public ::System::Object
	{
	public:
		// static const ::System::Int64 ONE_MINTUE = 0x3C; // 0x0
		// static const ::System::Int64 FIVE_MINTUE = 0x12C; // 0x0
		// static const ::System::Int64 ONE_HOUR = 0xE10; // 0x0
		// static const ::System::Int64 ONE_DAY = 0x15180; // 0x0
		// static const ::System::Int64 SEVEN_DAY = 0x93A80; // 0x0
		// static const ::System::Int64 ONE_MONTH = 0x278D00; // 0x0
		// static const ::System::Int64 SIX_MONTH = 0xED4E00; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEDURATIONDEFINE__CTOR_OFFSET))(this);
		}
	};
}
