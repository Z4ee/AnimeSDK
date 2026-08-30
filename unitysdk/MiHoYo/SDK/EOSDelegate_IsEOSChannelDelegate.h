#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B943E20)
#define MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B943E50)
#define MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B943E10)
#define MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B943DA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_IsEOSChannelDelegate_TypeDefinitionIndex = 7674;

	class EOSDelegate_IsEOSChannelDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
