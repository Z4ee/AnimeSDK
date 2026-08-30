#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7ED60)
#define MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7EDC0)
#define MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7D030)
#define MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7EC70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_HideBGDelegate_TypeDefinitionIndex = 7799;

	class WebDelegate_HideBGDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::Boolean a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEBGDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
