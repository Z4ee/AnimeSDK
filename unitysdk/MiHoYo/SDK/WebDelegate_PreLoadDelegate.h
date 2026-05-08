#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A4091A0)
#define MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A409230)
#define MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A408B80)
#define MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A408B70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int WebDelegate_PreLoadDelegate_TypeDefinitionIndex = 18680;

	class WebDelegate_PreLoadDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* env, ::System::String* gameBiz, ::System::Boolean runtimeCache)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_INVOKE_OFFSET))(this, env, gameBiz, runtimeCache);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* env, ::System::String* gameBiz, ::System::Boolean runtimeCache, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_BEGININVOKE_OFFSET))(this, env, gameBiz, runtimeCache, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WEBDELEGATE_PRELOADDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
