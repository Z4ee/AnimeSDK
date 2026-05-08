#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xA994D90)
#define AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xA994DF0)
#define AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xA994A50)
#define AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xA994A40)

inline static constexpr unsigned int Audio_PINVOKE_IDirectInput8_DirectInputEnumDevicesDelegate_TypeDefinitionIndex = 67769;

class Audio_PINVOKE_IDirectInput8_DirectInputEnumDevicesDelegate : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE__CTOR_OFFSET))(this, object, method);
	}

	::System::Int32 Invoke(::System::Void* deviceInstance, ::System::IntPtr data)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Void*, ::System::IntPtr))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_INVOKE_OFFSET))(this, deviceInstance, data);
	}

	::System::IAsyncResult* BeginInvoke(::System::Void* deviceInstance, ::System::IntPtr data, ::System::AsyncCallback* callback, ::System::Object* object)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::System::Void*, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_BEGININVOKE_OFFSET))(this, deviceInstance, data, callback, object);
	}

	::System::Int32 EndInvoke(::System::IAsyncResult* result)
	{
		return ((::System::Int32(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + AUDIO_PINVOKE_IDIRECTINPUT8_DIRECTINPUTENUMDEVICESDELEGATE_ENDINVOKE_OFFSET))(this, result);
	}
};
