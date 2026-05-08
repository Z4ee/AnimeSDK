#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x127DEA80)
#define AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x127DEB70)
#define AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x127DE660)
#define AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x127DE650)

inline static constexpr unsigned int Audio_PINVOKE_IDirectInput8_EnumDevicesDelegate_TypeDefinitionIndex = 67770;

class Audio_PINVOKE_IDirectInput8_EnumDevicesDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICESDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Int32 Invoke(::System::IntPtr nativePtr, ::System::Int32 dwDevType, ::System::IntPtr lpCallback, ::System::IntPtr pvRef, ::System::Int32 dwFlags)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICESDELEGATE_INVOKE_OFFSET))(this, nativePtr, dwDevType, lpCallback, pvRef, dwFlags);
	}

	::System::IAsyncResult* BeginInvoke(::System::IntPtr nativePtr, ::System::Int32 dwDevType, ::System::IntPtr lpCallback, ::System::IntPtr pvRef, ::System::Int32 dwFlags, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICESDELEGATE_BEGININVOKE_OFFSET))(this, nativePtr, dwDevType, lpCallback, pvRef, dwFlags, callback, object);
	}

	::System::Int32 EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_ENUMDEVICESDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
