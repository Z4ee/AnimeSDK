#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2B30)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2B80)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x15CD2B20)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x15CD2AB0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetWebVolumeDelegate_TypeDefinitionIndex = 7804;

	class WebDelegate_SetWebVolumeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
