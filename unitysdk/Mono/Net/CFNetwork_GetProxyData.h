#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { class ManualResetEvent; }

#define MONO_NET_CFNETWORK_GETPROXYDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AF04140)
#define MONO_NET_CFNETWORK_GETPROXYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF04100)

namespace Mono::Net
{
	inline static constexpr unsigned int CFNetwork_GetProxyData_TypeDefinitionIndex = 2407;

	class CFNetwork_GetProxyData : public ::System::Object
	{
	public:
		::System::Threading::ManualResetEvent* evt; // 0x10
		::System::IntPtr error; // 0x18
		::System::IntPtr targetUri; // 0x20
		::System::IntPtr script; // 0x28
		::System::IntPtr result; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXYDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFNETWORK_GETPROXYDATA_DISPOSE_OFFSET))(this);
		}
	};
}
