#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x183D28E0)
#define MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x183D2960)
#define MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x183D28C0)
#define MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x183D2850)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PSDelegate_AuthCodeCallback_TypeDefinitionIndex = 7672;

	class PSDelegate_AuthCodeCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::String* a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PSDELEGATE_AUTHCODECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
