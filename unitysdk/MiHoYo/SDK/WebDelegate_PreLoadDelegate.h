#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7FE40)
#define MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7FEB0)
#define MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CD7BFF0)
#define MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD7FDC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_PreLoadDelegate_TypeDefinitionIndex = 7768;

	class WebDelegate_PreLoadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::String* a2, ::System::Boolean a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
