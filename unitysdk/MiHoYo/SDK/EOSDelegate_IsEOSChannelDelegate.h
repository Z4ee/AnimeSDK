#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15EDD860)
#define MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15EDD890)
#define MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15EDD5B0)
#define MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDD590)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int EOSDelegate_IsEOSChannelDelegate_TypeDefinitionIndex = 6723;

	class EOSDelegate_IsEOSChannelDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_EOSDELEGATE_ISEOSCHANNELDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
