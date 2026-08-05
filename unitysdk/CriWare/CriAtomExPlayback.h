#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriAtomExPlayback_Status.h"
#include "unitysdk/System/ValueType.h"

#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x1FBAADB0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET UNITYSDK_OFFSET(0x1FBAACB0)
#define CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOP_OFFSET UNITYSDK_OFFSET(0x1FBAAC30)
#define CRIWARE_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET UNITYSDK_OFFSET(0xACBE00)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_ID_OFFSET UNITYSDK_OFFSET(0x325570)
#define CRIWARE_CRIATOMEXPLAYBACK_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xACBE00)
#define CRIWARE_CRIATOMEXPLAYBACK_SET_ID_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define CRIWARE_CRIATOMEXPLAYBACK_STOP_1_OFFSET UNITYSDK_OFFSET(0xACBE80)
#define CRIWARE_CRIATOMEXPLAYBACK_STOP_OFFSET UNITYSDK_OFFSET(0xACBDF0)
#define CRIWARE_CRIATOMEXPLAYBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtomExPlayback_TypeDefinitionIndex = 34946;

	struct alignas(4) CriAtomExPlayback
	{
		::System::UInt32 _id_k__BackingField; // 0x10

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK__CTOR_OFFSET))(this, id);
		}

		::System::Void Stop(::System::Boolean ignoresReleaseTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_STOP_OFFSET))(this, ignoresReleaseTime);
		}

		::CriWare::CriAtomExPlayback_Status GetStatus()
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET))(this);
		}

		::System::UInt32 get_id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_ID_OFFSET))(this);
		}

		::System::Void set_id(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_SET_ID_OFFSET))(this, value);
		}

		::CriWare::CriAtomExPlayback_Status get_status()
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_GET_STATUS_OFFSET))(this);
		}

		::System::Void Stop_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_STOP_1_OFFSET))(this);
		}

		static ::System::Void criAtomExPlayback_Stop(::System::UInt32 id)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOP_OFFSET))(id);
		}

		static ::System::Void criAtomExPlayback_StopWithoutReleaseTime(::System::UInt32 id)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_STOPWITHOUTRELEASETIME_OFFSET))(id);
		}

		static ::CriWare::CriAtomExPlayback_Status criAtomExPlayback_GetStatus(::System::UInt32 id)
		{
			return ((::CriWare::CriAtomExPlayback_Status(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMEXPLAYBACK_CRIATOMEXPLAYBACK_GETSTATUS_OFFSET))(id);
		}
	};
}
