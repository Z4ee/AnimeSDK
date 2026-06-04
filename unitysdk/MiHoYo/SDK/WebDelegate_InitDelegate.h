#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184645F0)
#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18464670)
#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x184611A0)
#define MIHOYO_SDK_WEBDELEGATE_INITDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x18464570)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_InitDelegate_TypeDefinitionIndex = 7760;

	class WebDelegate_InitDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* Invoke(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::Boolean a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_INITDELEGATE_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
