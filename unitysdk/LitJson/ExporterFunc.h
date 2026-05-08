#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace LitJson { class JsonWriter; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LITJSON_EXPORTERFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B61ACD0)
#define LITJSON_EXPORTERFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B61AD10)
#define LITJSON_EXPORTERFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B61A750)
#define LITJSON_EXPORTERFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B61A740)

namespace LitJson
{
	inline static constexpr unsigned int ExporterFunc_TypeDefinitionIndex = 8137;

	class ExporterFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LITJSON_EXPORTERFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* obj, ::LitJson::JsonWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*))((::PBYTE)hIl2Cpp + LITJSON_EXPORTERFUNC_INVOKE_OFFSET))(this, obj, writer);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* obj, ::LitJson::JsonWriter* writer, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::LitJson::JsonWriter*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_EXPORTERFUNC_BEGININVOKE_OFFSET))(this, obj, writer, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LITJSON_EXPORTERFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
