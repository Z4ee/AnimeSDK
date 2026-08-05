#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D3C7530)
#define MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D3C7560)
#define MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D3C72A0)
#define MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C7280)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_GetAccountIdDelegate_TypeDefinitionIndex = 19839;

	class PSDelegate_GetAccountIdDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::UInt64 Invoke()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::UInt64 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_GETACCOUNTIDDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
