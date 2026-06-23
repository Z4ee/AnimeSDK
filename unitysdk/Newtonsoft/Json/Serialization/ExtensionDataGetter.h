#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E2B58C0)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E2B58F0)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E2B5380)
#define NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B5360)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int ExtensionDataGetter_TypeDefinitionIndex = 7123;

	class ExtensionDataGetter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER__CTOR_OFFSET))(this, object, method);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::Object*>>* Invoke(::System::Object* o)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::Object*>>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_INVOKE_OFFSET))(this, o);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* o, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_BEGININVOKE_OFFSET))(this, o, callback, object);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::Object*>>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::System::Object*, ::System::Object*>>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_EXTENSIONDATAGETTER_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
