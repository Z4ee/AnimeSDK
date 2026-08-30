#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel; }
namespace MiHoYo::SDK { class SecurityTunnel_File; }
namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6C5D10)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS37_0__FILETRANSFERTHREAD_B__0_OFFSET UNITYSDK_OFFSET(0x1C6CE290)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass37_0_TypeDefinitionIndex = 46879;

	class SecurityTunnel___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::SecurityTunnel_File* file; // 0x10
		::MiHoYo::SDK::SecurityTunnel* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _FileTransferThread_b__0(::System::Boolean a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS37_0__FILETRANSFERTHREAD_B__0_OFFSET))(this, a1, a2, a3);
		}
	};
}
