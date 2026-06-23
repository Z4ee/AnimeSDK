#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::PC::OS { class PayErrorHandler; }
namespace System { class String; }

#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5316E0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS10_0__OPENAGELIMITWEBPASSPORT_B__0_OFFSET UNITYSDK_OFFSET(0x1B5316F0)
#define MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS10_0__OPENAGELIMITWEBPASSPORT_B__1_OFFSET UNITYSDK_OFFSET(0x1B5317C0)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int PayErrorHandler___c__DisplayClass10_0_TypeDefinitionIndex = 20465;

	class PayErrorHandler___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::PayErrorHandler* __4__this; // 0x10
		::System::String* accountId; // 0x18
		::System::String* cookieToken; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OpenAgeLimitWebPassport_b__0(::MiHoYo::SDK::Web* web, ::System::String* _)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS10_0__OPENAGELIMITWEBPASSPORT_B__0_OFFSET))(this, web, _);
		}

		::System::Void _OpenAgeLimitWebPassport_b__1(::MiHoYo::SDK::Web* web)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_PAYERRORHANDLER___C__DISPLAYCLASS10_0__OPENAGELIMITWEBPASSPORT_B__1_OFFSET))(this, web);
		}
	};
}
