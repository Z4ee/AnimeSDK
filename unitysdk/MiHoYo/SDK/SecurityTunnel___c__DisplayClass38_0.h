#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel; }
namespace MiHoYo::SDK { class SecurityTunnel_File; }
namespace System { class String; }
namespace System { template <typename T> class Predicate_1; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB29F630)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS38_0__FILEPARTRECEIVED_B__0_OFFSET UNITYSDK_OFFSET(0xB2A6ED0)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS38_0__FILEPARTRECEIVED_B__1_OFFSET UNITYSDK_OFFSET(0xB2A6F00)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS38_0__FILEPARTRECEIVED_B__2_OFFSET UNITYSDK_OFFSET(0xB2A7020)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass38_0_TypeDefinitionIndex = 46880;

	class SecurityTunnel___c__DisplayClass38_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::MiHoYo::SDK::SecurityTunnel_File*>* __9__2; // 0x10
		::MiHoYo::SDK::SecurityTunnel* __4__this; // 0x18
		::MiHoYo::SDK::SecurityTunnel_File* file; // 0x20
		::System::UInt64 id; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FilePartReceived_b__0(::MiHoYo::SDK::SecurityTunnel_File* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_File*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS38_0__FILEPARTRECEIVED_B__0_OFFSET))(this, a1);
		}

		::System::Void _FilePartReceived_b__1(::System::Boolean a1, ::Il2CppArray<::System::Byte>* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS38_0__FILEPARTRECEIVED_B__1_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _FilePartReceived_b__2(::MiHoYo::SDK::SecurityTunnel_File* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_File*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS38_0__FILEPARTRECEIVED_B__2_OFFSET))(this, a1);
		}
	};
}
