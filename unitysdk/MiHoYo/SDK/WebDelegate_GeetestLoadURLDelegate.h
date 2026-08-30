#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace MiHoYo::SDK { class GeetestView; }
namespace MiHoYo::SDK { class MmtManager_GeetestModel; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BB144C0)
#define MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BB14500)
#define MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BB144A0)
#define MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB143B0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_GeetestLoadURLDelegate_TypeDefinitionIndex = 7798;

	class WebDelegate_GeetestLoadURLDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::MiHoYo::SDK::GeetestView* a1, ::System::String* a2, ::MiHoYo::SDK::MmtManager_GeetestModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::GeetestView*, ::System::String*, ::MiHoYo::SDK::MmtManager_GeetestModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::MiHoYo::SDK::GeetestView* a1, ::System::String* a2, ::MiHoYo::SDK::MmtManager_GeetestModel* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::MiHoYo::SDK::GeetestView*, ::System::String*, ::MiHoYo::SDK::MmtManager_GeetestModel*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_GEETESTLOADURLDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
