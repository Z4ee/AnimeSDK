#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/WebFeature.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18466AB0)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18466B30)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x184628F0)
#define MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x184669C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetWebFeatureDelegate_TypeDefinitionIndex = 7803;

	class WebDelegate_SetWebFeatureDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::MiHoYo::SDK::WebFeature a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::MiHoYo::SDK::WebFeature))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::MiHoYo::SDK::WebFeature a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::MiHoYo::SDK::WebFeature, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETWEBFEATUREDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
