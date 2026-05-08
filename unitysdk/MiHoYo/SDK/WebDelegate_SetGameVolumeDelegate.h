#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19465090)
#define MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19465140)
#define MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19464D10)
#define MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19464D00)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_SetGameVolumeDelegate_TypeDefinitionIndex = 18717;

	class WebDelegate_SetGameVolumeDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 audioEffect, ::System::Int32 voice, ::System::Int32 bgm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_INVOKE_OFFSET))(this, audioEffect, voice, bgm);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 audioEffect, ::System::Int32 voice, ::System::Int32 bgm, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_BEGININVOKE_OFFSET))(this, audioEffect, voice, bgm, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_SETGAMEVOLUMEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
