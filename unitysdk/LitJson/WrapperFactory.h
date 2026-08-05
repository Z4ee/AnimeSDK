#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace LitJson { class IJsonWrapper; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LITJSON_WRAPPERFACTORY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1F630A30)
#define LITJSON_WRAPPERFACTORY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1F630A60)
#define LITJSON_WRAPPERFACTORY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F6307A0)
#define LITJSON_WRAPPERFACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F630780)

namespace LitJson
{
	inline static constexpr unsigned int WrapperFactory_TypeDefinitionIndex = 7861;

	class WrapperFactory : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LITJSON_WRAPPERFACTORY__CTOR_OFFSET))(this, object, method);
		}

		::LitJson::IJsonWrapper* Invoke()
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID))((::PBYTE)hIl2Cpp + LITJSON_WRAPPERFACTORY_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_WRAPPERFACTORY_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::LitJson::IJsonWrapper* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::LitJson::IJsonWrapper*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LITJSON_WRAPPERFACTORY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
