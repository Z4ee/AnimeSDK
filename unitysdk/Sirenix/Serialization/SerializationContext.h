#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace Sirenix::Serialization { class IExternalGuidReferenceResolver; }
namespace Sirenix::Serialization { class IExternalIndexReferenceResolver; }
namespace Sirenix::Serialization { class IExternalStringReferenceResolver; }
namespace Sirenix::Serialization { class SerializationConfig; }
namespace Sirenix::Serialization { class TwoWaySerializationBinder; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Runtime::Serialization { class FormatterConverter; }
namespace System::Runtime::Serialization { class IFormatterConverter; }

#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_BINDER_OFFSET UNITYSDK_OFFSET(0x1C142A60)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C146830)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_FORMATTERCONVERTER_OFFSET UNITYSDK_OFFSET(0x1C1467C0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_GUIDREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1C146810)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_INDEXREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1C1467D0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_STREAMINGCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C1467B0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_STRINGREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1C1467F0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_RESETINTERNALREFERENCES_OFFSET UNITYSDK_OFFSET(0x1C1470A0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0x1C146700)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_BINDER_OFFSET UNITYSDK_OFFSET(0x1C1467A0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C1468A0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_GUIDREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1C146820)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_INDEXREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1C1467E0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_STRINGREFERENCERESOLVER_OFFSET UNITYSDK_OFFSET(0x1C146800)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONCLAIMED_OFFSET UNITYSDK_OFFSET(0x1C1471B0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONFREED_OFFSET UNITYSDK_OFFSET(0x1C147110)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYGETINTERNALREFERENCEID_OFFSET UNITYSDK_OFFSET(0x1C1468B0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYREGISTEREXTERNALREFERENCE_1_OFFSET UNITYSDK_OFFSET(0x1C146D20)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYREGISTEREXTERNALREFERENCE_2_OFFSET UNITYSDK_OFFSET(0x1C146EE0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYREGISTEREXTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C146AC0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYREGISTERINTERNALREFERENCE_OFFSET UNITYSDK_OFFSET(0x1C146970)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C146680)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C1466E0)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C146500)
#define SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1435C0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int SerializationContext_TypeDefinitionIndex = 7399;

	class SerializationContext : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::StreamingContext streamingContext; // 0x10
		::Sirenix::Serialization::IExternalGuidReferenceResolver* _GuidReferenceResolver_k__BackingField; // 0x20
		::Sirenix::Serialization::SerializationConfig* config; // 0x28
		::Sirenix::Serialization::TwoWaySerializationBinder* binder; // 0x30
		::Sirenix::Serialization::IExternalStringReferenceResolver* _StringReferenceResolver_k__BackingField; // 0x38
		::Sirenix::Serialization::IExternalIndexReferenceResolver* _IndexReferenceResolver_k__BackingField; // 0x40
		::System::Runtime::Serialization::IFormatterConverter* formatterConverter; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* internalReferenceIdMap; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT__CTOR_1_OFFSET))(this, context);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::FormatterConverter* formatterConverter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::FormatterConverter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT__CTOR_2_OFFSET))(this, formatterConverter);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::StreamingContext context, ::System::Runtime::Serialization::FormatterConverter* formatterConverter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::StreamingContext, ::System::Runtime::Serialization::FormatterConverter*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT__CTOR_3_OFFSET))(this, context, formatterConverter);
		}

		::Sirenix::Serialization::TwoWaySerializationBinder* get_Binder()
		{
			return ((::Sirenix::Serialization::TwoWaySerializationBinder*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_BINDER_OFFSET))(this);
		}

		::System::Void set_Binder(::Sirenix::Serialization::TwoWaySerializationBinder* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::TwoWaySerializationBinder*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_BINDER_OFFSET))(this, value);
		}

		::System::Runtime::Serialization::StreamingContext get_StreamingContext()
		{
			return ((::System::Runtime::Serialization::StreamingContext(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_STREAMINGCONTEXT_OFFSET))(this);
		}

		::System::Runtime::Serialization::IFormatterConverter* get_FormatterConverter()
		{
			return ((::System::Runtime::Serialization::IFormatterConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_FORMATTERCONVERTER_OFFSET))(this);
		}

		::Sirenix::Serialization::IExternalIndexReferenceResolver* get_IndexReferenceResolver()
		{
			return ((::Sirenix::Serialization::IExternalIndexReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_INDEXREFERENCERESOLVER_OFFSET))(this);
		}

		::System::Void set_IndexReferenceResolver(::Sirenix::Serialization::IExternalIndexReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::IExternalIndexReferenceResolver*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_INDEXREFERENCERESOLVER_OFFSET))(this, value);
		}

		::Sirenix::Serialization::IExternalStringReferenceResolver* get_StringReferenceResolver()
		{
			return ((::Sirenix::Serialization::IExternalStringReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_STRINGREFERENCERESOLVER_OFFSET))(this);
		}

		::System::Void set_StringReferenceResolver(::Sirenix::Serialization::IExternalStringReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::IExternalStringReferenceResolver*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_STRINGREFERENCERESOLVER_OFFSET))(this, value);
		}

		::Sirenix::Serialization::IExternalGuidReferenceResolver* get_GuidReferenceResolver()
		{
			return ((::Sirenix::Serialization::IExternalGuidReferenceResolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_GUIDREFERENCERESOLVER_OFFSET))(this);
		}

		::System::Void set_GuidReferenceResolver(::Sirenix::Serialization::IExternalGuidReferenceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::IExternalGuidReferenceResolver*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_GUIDREFERENCERESOLVER_OFFSET))(this, value);
		}

		::Sirenix::Serialization::SerializationConfig* get_Config()
		{
			return ((::Sirenix::Serialization::SerializationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::Sirenix::Serialization::SerializationConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::Sirenix::Serialization::SerializationConfig*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SET_CONFIG_OFFSET))(this, value);
		}

		::System::Boolean TryGetInternalReferenceId(::System::Object* reference, ::System::Int32& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYGETINTERNALREFERENCEID_OFFSET))(this, reference, id);
		}

		::System::Boolean TryRegisterInternalReference(::System::Object* reference, ::System::Int32& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYREGISTERINTERNALREFERENCE_OFFSET))(this, reference, id);
		}

		::System::Boolean TryRegisterExternalReference(::System::Object* obj, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYREGISTEREXTERNALREFERENCE_OFFSET))(this, obj, index);
		}

		::System::Boolean TryRegisterExternalReference_1(::System::Object* obj, ::System::Guid& guid)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Guid&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYREGISTEREXTERNALREFERENCE_1_OFFSET))(this, obj, guid);
		}

		::System::Boolean TryRegisterExternalReference_2(::System::Object* obj, ::System::String*& id)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::String*&))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_TRYREGISTEREXTERNALREFERENCE_2_OFFSET))(this, obj, id);
		}

		::System::Void ResetInternalReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_RESETINTERNALREFERENCES_OFFSET))(this);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_RESETTODEFAULT_OFFSET))(this);
		}

		::System::Void Sirenix_Serialization_Utilities_ICacheNotificationReceiver_OnFreed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONFREED_OFFSET))(this);
		}

		::System::Void Sirenix_Serialization_Utilities_ICacheNotificationReceiver_OnClaimed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_SERIALIZATIONCONTEXT_SIRENIX_SERIALIZATION_UTILITIES_ICACHENOTIFICATIONRECEIVER_ONCLAIMED_OFFSET))(this);
		}
	};
}
