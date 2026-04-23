#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOCHANNELSDK_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8D12C70)
#define MIHOYO_SDK_HOYOCHANNELSDK_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8D12CD0)
#define MIHOYO_SDK_HOYOCHANNELSDK_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x8D12920)
#define MIHOYO_SDK_HOYOCHANNELSDK_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x8D0D310)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoChannelSDK_CallBack_TypeDefinitionIndex = 43133;

	class HoYoChannelSDK_CallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 code, ::System::String* jsonResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CALLBACK_INVOKE_OFFSET))(this, code, jsonResponse);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 code, ::System::String* jsonResponse, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CALLBACK_BEGININVOKE_OFFSET))(this, code, jsonResponse, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOCHANNELSDK_CALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
