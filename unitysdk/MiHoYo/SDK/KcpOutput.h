#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_KCPOUTPUT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA1820F0)
#define MIHOYO_SDK_KCPOUTPUT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA1821A0)
#define MIHOYO_SDK_KCPOUTPUT_INVOKE_OFFSET UNITYSDK_OFFSET(0xA1820C0)
#define MIHOYO_SDK_KCPOUTPUT__CTOR_OFFSET UNITYSDK_OFFSET(0xA182050)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int KcpOutput_TypeDefinitionIndex = 43542;

	class KcpOutput : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPOUTPUT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 Invoke(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::IntPtr a4)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPOUTPUT_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3, ::System::IntPtr a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPOUTPUT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Int32 EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_KCPOUTPUT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
