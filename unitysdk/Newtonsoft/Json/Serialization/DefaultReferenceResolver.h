#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Newtonsoft::Json::Utilities { template <typename T1, typename T2> class BidirectionalDictionary_2; }
namespace System { class String; }

#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ADDREFERENCE_OFFSET UNITYSDK_OFFSET(0x172E2E30)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETMAPPINGS_OFFSET UNITYSDK_OFFSET(0x172E2AA0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETREFERENCE_OFFSET UNITYSDK_OFFSET(0x172E2D70)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ISREFERENCED_OFFSET UNITYSDK_OFFSET(0x172E2EA0)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_RESOLVEREFERENCE_OFFSET UNITYSDK_OFFSET(0x172E2D00)
#define NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x172E2F10)

namespace Newtonsoft::Json::Serialization
{
	inline static constexpr unsigned int DefaultReferenceResolver_TypeDefinitionIndex = 9643;

	class DefaultReferenceResolver : public ::System::Object
	{
	public:
		::System::Int32 _referenceCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER__CTOR_OFFSET))(this);
		}

		::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>* GetMappings(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Utilities::BidirectionalDictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETMAPPINGS_OFFSET))(this, a1);
		}

		::System::Object* ResolveReference(::System::Object* a1, ::System::String* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_RESOLVEREFERENCE_OFFSET))(this, a1, a2);
		}

		::System::String* GetReference(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_GETREFERENCE_OFFSET))(this, a1, a2);
		}

		::System::Void AddReference(::System::Object* a1, ::System::String* a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ADDREFERENCE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsReferenced(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + NEWTONSOFT_JSON_SERIALIZATION_DEFAULTREFERENCERESOLVER_ISREFERENCED_OFFSET))(this, a1, a2);
		}
	};
}
