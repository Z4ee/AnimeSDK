#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18464390)
#define MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184643C0)
#define MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18461EE0)
#define MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x184642A0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_HideDelegate_TypeDefinitionIndex = 7773;

	class WebDelegate_HideDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_HIDEDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
