#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PARSEURLCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xAC36F70)
#define RPG_CLIENT_PARSEURLCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xAC36FA0)
#define RPG_CLIENT_PARSEURLCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0xAC36A20)
#define RPG_CLIENT_PARSEURLCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAC36A00)

namespace RPG::Client
{
	inline static constexpr unsigned int ParseUrlCallBack_TypeDefinitionIndex = 54703;

	class ParseUrlCallBack : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARSEURLCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::String* url)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARSEURLCALLBACK_INVOKE_OFFSET))(this, url);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* url, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARSEURLCALLBACK_BEGININVOKE_OFFSET))(this, url, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARSEURLCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
