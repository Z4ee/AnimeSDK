#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A519E70)
#define MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A519EA0)
#define MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A519BD0)
#define MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A519BC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_UnregisterNPStateCallbackDelegate_TypeDefinitionIndex = 18636;

	class PSDelegate_UnregisterNPStateCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
