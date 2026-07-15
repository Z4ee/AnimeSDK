#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class URLConfig_URL; }
namespace System { class String; }

#define MIHOYO_SDK_URLCONFIG_GETURL_OFFSET UNITYSDK_OFFSET(0x1B6C56F0)
#define MIHOYO_SDK_URLCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6C5A20)
#define MIHOYO_SDK_URLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6C5A10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int URLConfig_TypeDefinitionIndex = 8029;

	class URLConfig : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::URLConfig_URL** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::URLConfig_URL**)Il2CppClass::FromTypeDefinitionIndex(URLConfig_TypeDefinitionIndex)->GetStaticField(0xC5B0);
		}
		// static const ::System::String* AccountRSAKey; // 0x0
		// static const ::System::String* AccountRSAKeyOSTest; // 0x0
		// static const ::System::String* AccountRSAKeyOSPre; // 0x0
		// static const ::System::String* AccountRSAKeyOSSandbox; // 0x0
		// static const ::System::String* AccountRSAKeyOSProd; // 0x0
		// static const ::System::String* NoticeString; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::URLConfig_URL* GetURL(::MiHoYo::SDK::EnvType a1)
		{
			return ((::MiHoYo::SDK::URLConfig_URL*(*)(::MiHoYo::SDK::EnvType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_URLCONFIG_GETURL_OFFSET))(a1);
		}
	};
}
