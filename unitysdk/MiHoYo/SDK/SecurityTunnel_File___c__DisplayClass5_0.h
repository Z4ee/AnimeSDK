#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel_File_Range; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB2A91D0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILE___C__DISPLAYCLASS5_0__GET_DOWNLOADCOMPLETED_B__0_OFFSET UNITYSDK_OFFSET(0xB2A91E0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_File___c__DisplayClass5_0_TypeDefinitionIndex = 46840;

	class SecurityTunnel_File___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::System::UInt64 offset; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_DownloadCompleted_b__0(::MiHoYo::SDK::SecurityTunnel_File_Range* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_File_Range*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILE___C__DISPLAYCLASS5_0__GET_DOWNLOADCOMPLETED_B__0_OFFSET))(this, a1);
		}
	};
}
