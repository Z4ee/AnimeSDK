#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16479430)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16479470)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x16478DF0)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1646FAE0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ExtensionDataSetter_TypeDefinitionIndex = 8325;

	class ExtensionDataSetter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* o, ::System::String* key, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_INVOKE_OFFSET))(this, o, key, value);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* o, ::System::String* key, ::System::Object* value, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_BEGININVOKE_OFFSET))(this, o, key, value, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATASETTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
