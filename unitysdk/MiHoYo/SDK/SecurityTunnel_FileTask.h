#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel_FileHeader; }
namespace MiHoYo::SDK { class SecurityTunnel_FilePart; }
namespace MiHoYo::SDK { class SecurityTunnel_Packet; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILETASK__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA2141F0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILETASK__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA206D30)
#define MIHOYO_SDK_SECURITYTUNNEL_FILETASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA209710)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_FileTask_TypeDefinitionIndex = 43786;

	class SecurityTunnel_FileTask : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_FileHeader* Header; // 0x10
		::MiHoYo::SDK::SecurityTunnel_FilePart* Part; // 0x18

		::System::Void _ctor(::MiHoYo::SDK::SecurityTunnel_FileHeader* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FileHeader*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILETASK__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::SecurityTunnel_FilePart* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_FilePart*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILETASK__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::MiHoYo::SDK::SecurityTunnel_Packet* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_Packet*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILETASK__CTOR_2_OFFSET))(this, a1);
		}
	};
}
