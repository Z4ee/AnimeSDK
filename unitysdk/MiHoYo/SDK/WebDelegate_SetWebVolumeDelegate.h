#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x176A7990)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x176A79E0)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x176A76A0)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x176A7680)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetWebVolumeDelegate_TypeDefinitionIndex = 6894;

	class WebDelegate_SetWebVolumeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 v)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_INVOKE_OFFSET))(this, v);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 v, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_BEGININVOKE_OFFSET))(this, v, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBVOLUMEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
