#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class GeetestView; }
namespace MiHoYo::SDK { class MmtManager_GeetestModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4E600)
#define MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4E640)
#define MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CF4E040)
#define MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF4E020)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_GeetestLoadURLDelegate_TypeDefinitionIndex = 19953;

	class WebDelegate_GeetestLoadURLDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::MiHoYo::SDK::GeetestView* view, ::System::String* url, ::MiHoYo::SDK::MmtManager_GeetestModel* geetestModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*, ::System::String*, ::MiHoYo::SDK::MmtManager_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_INVOKE_OFFSET))(this, view, url, geetestModel);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::GeetestView* view, ::System::String* url, ::MiHoYo::SDK::MmtManager_GeetestModel* geetestModel, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::GeetestView*, ::System::String*, ::MiHoYo::SDK::MmtManager_GeetestModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_BEGININVOKE_OFFSET))(this, view, url, geetestModel, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
