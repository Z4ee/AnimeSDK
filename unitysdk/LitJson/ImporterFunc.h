#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define LITJSON_IMPORTERFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D989440)
#define LITJSON_IMPORTERFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D989470)
#define LITJSON_IMPORTERFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D988F20)
#define LITJSON_IMPORTERFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D988F00)

namespace LitJson
{
	inline static constexpr unsigned int ImporterFunc_TypeDefinitionIndex = 8284;

	class ImporterFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + LITJSON_IMPORTERFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::System::Object* input)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_IMPORTERFUNC_INVOKE_OFFSET))(this, input);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* input, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + LITJSON_IMPORTERFUNC_BEGININVOKE_OFFSET))(this, input, callback, object);
		}

		::System::Object* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + LITJSON_IMPORTERFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
