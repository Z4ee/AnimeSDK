#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_TIMEHELPER_CLIENTNOWSECONDS_OFFSET UNITYSDK_OFFSET(0x1AE3F690)
#define MIHOYO_SDK_TIMEHELPER_CLIENTNOW_OFFSET UNITYSDK_OFFSET(0x1AE3F600)
#define MIHOYO_SDK_TIMEHELPER_GETNOWTICK_OFFSET UNITYSDK_OFFSET(0x1AE3F730)
#define MIHOYO_SDK_TIMEHELPER_MILLISECONDSTODATETIME_OFFSET UNITYSDK_OFFSET(0x1AE3FA20)
#define MIHOYO_SDK_TIMEHELPER_NOW_OFFSET UNITYSDK_OFFSET(0x1AE3F930)
#define MIHOYO_SDK_TIMEHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE3FB20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TimeHelper_TypeDefinitionIndex = 34959;

	class TimeHelper : public ::System::Object
	{
	public:
		static ::System::Int64* StaticGet_epoch()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(TimeHelper_TypeDefinitionIndex)->GetStaticField(0x8420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER__CCTOR_OFFSET))();
		}

		static ::System::Int64 ClientNow()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_CLIENTNOW_OFFSET))();
		}

		static ::System::Int64 ClientNowSeconds()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_CLIENTNOWSECONDS_OFFSET))();
		}

		static ::System::UInt32 GetNowTick()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_GETNOWTICK_OFFSET))();
		}

		static ::System::Int64 Now()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_NOW_OFFSET))();
		}

		static ::System::DateTime MillisecondsToDateTime(::System::Int64 millis)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TIMEHELPER_MILLISECONDSTODATETIME_OFFSET))(millis);
		}
	};
}
