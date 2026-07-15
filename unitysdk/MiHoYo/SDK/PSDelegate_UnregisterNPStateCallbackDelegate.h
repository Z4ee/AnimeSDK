#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1945FFE0)
#define MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19460010)
#define MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1943F4C0)
#define MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1945FF70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_UnregisterNPStateCallbackDelegate_TypeDefinitionIndex = 7723;

	class PSDelegate_UnregisterNPStateCallbackDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_UNREGISTERNPSTATECALLBACKDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
