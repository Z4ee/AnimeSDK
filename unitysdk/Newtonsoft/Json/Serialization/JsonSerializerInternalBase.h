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

#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_CLEARERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x15B9F2D0)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GETERRORCONTEXT_OFFSET UNITYSDK_OFFSET(0x15B9F220)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GET_DEFAULTREFERENCEMAPPINGS_OFFSET UNITYSDK_OFFSET(0x15B98840)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_ISERRORHANDLED_OFFSET UNITYSDK_OFFSET(0x15B9F340)
#define NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B9F150)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int JsonSerializerInternalBase_TypeDefinitionIndex = 9396;

	class JsonSerializerInternalBase : public ::System::Object
	{
	public:
		::Newtonsoft::Json::Serialization::ITraceWriter* TraceWriter; // 0x10
		::Newtonsoft::Json::Serialization::JsonSerializerProxy* InternalSerializer; // 0x18
		::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>* _mappings; // 0x20
		::Newtonsoft::Json::Serialization::ErrorContext* _currentErrorContext; // 0x28
		::Newtonsoft::Json::JsonSerializer* Serializer; // 0x30

		::System::Void _ctor(::Newtonsoft::Json::JsonSerializer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::JsonSerializer*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE__CTOR_OFFSET))(this, a1);
		}

		::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>* get_DefaultReferenceMappings()
		{
			return ((::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GET_DEFAULTREFERENCEMAPPINGS_OFFSET))(this);
		}

		::Newtonsoft::Json::Serialization::ErrorContext* GetErrorContext(::System::Object* a1, ::System::Object* a2, ::System::String* a3, ::System::Exception* a4)
		{
			return ((::Newtonsoft::Json::Serialization::ErrorContext*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_GETERRORCONTEXT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ClearErrorContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_CLEARERRORCONTEXT_OFFSET))(this);
		}

		::System::Boolean IsErrorHandled(::System::Object* a1, ::Newtonsoft::Json::Serialization::JsonContract* a2, ::System::Object* a3, ::Newtonsoft::Json::IJsonLineInfo* a4, ::System::String* a5, ::System::Exception* a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::Newtonsoft::Json::Serialization::JsonContract*, ::System::Object*, ::Newtonsoft::Json::IJsonLineInfo*, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_JSONSERIALIZERINTERNALBASE_ISERRORHANDLED_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}
	};
}
