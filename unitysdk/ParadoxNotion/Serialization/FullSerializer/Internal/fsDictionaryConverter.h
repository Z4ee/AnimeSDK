#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsConverter.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER_CANPROCESS_OFFSET UNITYSDK_OFFSET(0x1D070A80)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D070AF0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER_TRYDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D0717F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER_TRYSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D070BD0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D073020)

namespace ParadoxNotion::Serialization::FullSerializer::Internal
{
	inline static constexpr unsigned int fsDictionaryConverter_TypeDefinitionIndex = 30581;

	class fsDictionaryConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanProcess(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER_CANPROCESS_OFFSET))(this, type);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TrySerialize(::System::Object* instance_, ::ParadoxNotion::Serialization::FullSerializer::fsData*& serialized, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER_TRYSERIALIZE_OFFSET))(this, instance_, serialized, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryDeserialize(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Object*& instance_, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Object*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSDICTIONARYCONVERTER_TRYDESERIALIZE_OFFSET))(this, data, instance_, storageType);
		}
	};
}
