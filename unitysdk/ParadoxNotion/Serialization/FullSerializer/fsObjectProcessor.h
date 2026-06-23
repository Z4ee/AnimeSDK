#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_CANPROCESS_OFFSET UNITYSDK_OFFSET(0x1D84A3A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D84A430)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONAFTERSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D84A400)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONBEFOREDESERIALIZEAFTERINSTANCECREATION_OFFSET UNITYSDK_OFFSET(0x1D84A420)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONBEFOREDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D84A410)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D84A3F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D84A440)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsObjectProcessor_TypeDefinitionIndex = 30216;

	class fsObjectProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR__CTOR_OFFSET))(this);
		}

		::System::Boolean CanProcess(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_CANPROCESS_OFFSET))(this, type);
		}

		::System::Void OnBeforeSerialize(::System::Type* storageType, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONBEFORESERIALIZE_OFFSET))(this, storageType, instance);
		}

		::System::Void OnAfterSerialize(::System::Type* storageType, ::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONAFTERSERIALIZE_OFFSET))(this, storageType, instance, data);
		}

		::System::Void OnBeforeDeserialize(::System::Type* storageType, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONBEFOREDESERIALIZE_OFFSET))(this, storageType, data);
		}

		::System::Void OnBeforeDeserializeAfterInstanceCreation(::System::Type* storageType, ::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONBEFOREDESERIALIZEAFTERINSTANCECREATION_OFFSET))(this, storageType, instance, data);
		}

		::System::Void OnAfterDeserialize(::System::Type* storageType, ::System::Object* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSOBJECTPROCESSOR_ONAFTERDESERIALIZE_OFFSET))(this, storageType, instance);
		}
	};
}
