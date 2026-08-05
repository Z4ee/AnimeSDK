#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_KCPOUTPUT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D27FF80)
#define MIHOYO_SDK_KCPOUTPUT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D280050)
#define MIHOYO_SDK_KCPOUTPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D27FBE0)
#define MIHOYO_SDK_KCPOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D27FBC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KcpOutput_TypeDefinitionIndex = 37178;

	class KcpOutput : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPOUTPUT__CTOR_OFFSET))(this, object, method);
		}

		::System::Int32 Invoke(::System::IntPtr buf, ::System::Int32 len, ::System::IntPtr kcp, ::System::IntPtr user)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPOUTPUT_INVOKE_OFFSET))(this, buf, len, kcp, user);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr buf, ::System::Int32 len, ::System::IntPtr kcp, ::System::IntPtr user, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPOUTPUT_BEGININVOKE_OFFSET))(this, buf, len, kcp, user, callback, object);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPOUTPUT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
