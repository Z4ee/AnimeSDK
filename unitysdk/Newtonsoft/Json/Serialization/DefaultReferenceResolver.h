#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class BidirectionalDictionary_2; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ADDREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B705F70)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1B705C00)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B705EB0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x1B705FE0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_RESOLVEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1B705E40)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B706050)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultReferenceResolver_TypeDefinitionIndex = 6976;

	class DefaultReferenceResolver : public ::System::Object
	{
	public:
		::System::Int32 _referenceCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>* GetMappings(::System::Object* context)
		{
			return ((::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETMAPPINGS_OFFSET))(this, context);
		}

		::System::Object* ResolveReference(::System::Object* context, ::System::String* reference)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_RESOLVEREFERENCE_OFFSET))(this, context, reference);
		}

		::System::String* GetReference(::System::Object* context, ::System::Object* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETREFERENCE_OFFSET))(this, context, value);
		}

		::System::Void AddReference(::System::Object* context, ::System::String* reference, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ADDREFERENCE_OFFSET))(this, context, reference, value);
		}

		::System::Boolean IsReferenced(::System::Object* context, ::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ISREFERENCED_OFFSET))(this, context, value);
		}
	};
}
