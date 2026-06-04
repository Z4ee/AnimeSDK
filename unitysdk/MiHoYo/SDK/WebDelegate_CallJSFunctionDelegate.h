#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18463900)
#define MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18463970)
#define MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18462730)
#define MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18463810)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_CallJSFunctionDelegate_TypeDefinitionIndex = 7793;

	class WebDelegate_CallJSFunctionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* a1, ::System::String* a2, ::System::String* a3, ::System::Boolean a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_CALLJSFUNCTIONDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
