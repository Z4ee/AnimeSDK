#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsConverter.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsForwardAttribute; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsMetaProperty; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_CANPROCESS_OFFSET UNITYSDK_OFFSET(0x1D416490)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D416B90)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_GETPROPERTY_OFFSET UNITYSDK_OFFSET(0x1D4164E0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_TRYDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D416980)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_TRYSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D4167D0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D416470)

namespace ParadoxNotion::Serialization::FullSerializer::Internal
{
	inline static constexpr unsigned int fsForwardConverter_TypeDefinitionIndex = 29637;

	class fsForwardConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsConverter
	{
	public:
		::System::String* _memberName; // 0x18

		::System::Void _ctor(::ParadoxNotion::Serialization::FullSerializer::fsForwardAttribute* attribute)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsForwardAttribute*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER__CTOR_OFFSET))(this, attribute);
		}

		::System::Boolean CanProcess(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_CANPROCESS_OFFSET))(this, type);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult GetProperty(::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*& property)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsMetaProperty*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_GETPROPERTY_OFFSET))(this, instance, property);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TrySerialize(::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& serialized, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_TRYSERIALIZE_OFFSET))(this, instance, serialized, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryDeserialize(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Object*& instance, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Object*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_TRYDESERIALIZE_OFFSET))(this, data, instance, storageType);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSFORWARDCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}
	};
}
