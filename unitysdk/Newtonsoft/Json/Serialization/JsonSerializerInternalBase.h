#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json { class IJsonLineInfo; }
namespace Newtonsoft::Json { class JsonSerializer; }
namespace Newtonsoft::Json::Serialization { class ErrorContext; }
namespace Newtonsoft::Json::Serialization { class ITraceWriter; }
namespace Newtonsoft::Json::Serialization { class JsonContract; }
namespace Newtonsoft::Json::Serialization { class JsonSerializerProxy; }
namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class BidirectionalDictionary_2; }
namespace System { class Exception; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_CLEARERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x1DB1D120)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GETERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x1DB1D070)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GET_DEFAULTREFERENCEMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1DB1CCE0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_ISERRORHANDLED_OFFSET UNITYSDK_OFFSET(0x1DB1D190)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1CFB0)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalBase_TypeDefinitionIndex = 7135;

	class JsonSerializerInternalBase : public ::System::Object
	{
	public:
		::Newtonsoft::Json::JsonSerializer* Serializer; // 0x10
		::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter; // 0x18
		::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>* _mappings; // 0x20
		::Newtonsoft::Json::Serialization::JsonSerializerProxy* InternalSerializer; // 0x28
		::Newtonsoft::Json::Serialization::ErrorContext* _currentErrorContext; // 0x30

		::System::Void _ctor(::Newtonsoft::Json::JsonSerializer* serializer)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE__CTOR_OFFSET))(this, serializer);
		}

		::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>* get_DefaultReferenceMappings()
		{
			return ((::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GET_DEFAULTREFERENCEMAPPINGS_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::ErrorContext* GetErrorContext(::System::Object* currentObject, ::System::Object* member, ::System::String* path, ::System::Exception* error)
		{
			return ((::Newtonsoft::Json::Serialization::ErrorContext*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GETERRORCONTEXT_OFFSET))(this, currentObject, member, path, error);
		}

		::System::Void ClearErrorContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_CLEARERRORCONTEXT_OFFSET))(this);
		}

		::System::Boolean IsErrorHandled(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::JsonContract* contract, ::System::Object* keyValue, ::Newtonsoft::Json::IJsonLineInfo* lineInfo, ::System::String* path, ::System::Exception* ex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_ISERRORHANDLED_OFFSET))(this, currentObject, contract, keyValue, lineInfo, path, ex);
		}
	};
}
