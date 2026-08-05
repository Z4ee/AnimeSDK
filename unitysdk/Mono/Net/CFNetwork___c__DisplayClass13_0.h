#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Net { class CFProxy; }
namespace Mono::Net { class CFRunLoop; }

#define MONO_NET_CFNETWORK___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1CBEC790)
#define MONO_NET_CFNETWORK___C__DISPLAYCLASS13_0__EXECUTEPROXYAUTOCONFIGURATIONURL_B__0_OFFSET UNITYSDK_OFFSET(0x1CBEC7A0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNetwork___c__DisplayClass13_0_TypeDefinitionIndex = 2602;

	class CFNetwork___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::Mono::Net::CFRunLoop* runLoop; // 0x10
		::Il2CppArray<::Mono::Net::CFProxy*>* proxies; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
		}

		::System::Void _ExecuteProxyAutoConfigurationURL_b__0(::System::IntPtr client, ::System::IntPtr proxyList, ::System::IntPtr error)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK___C__DISPLAYCLASS13_0__EXECUTEPROXYAUTOCONFIGURATIONURL_B__0_OFFSET))(this, client, proxyList, error);
		}
	};
}
