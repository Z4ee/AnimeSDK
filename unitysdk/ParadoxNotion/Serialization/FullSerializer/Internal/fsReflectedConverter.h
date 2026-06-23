#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsConverter.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER_CANPROCESS_OFFSET UNITYSDK_OFFSET(0x1C6414F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1C641FF0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER_TRYDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C641B30)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER_TRYSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1C641570)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6420D0)

namespace ParadoxNotion::Serialization::FullSerializer::Internal
{
	inline static constexpr unsigned int fsReflectedConverter_TypeDefinitionIndex = 30680;

	class fsReflectedConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanProcess(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER_CANPROCESS_OFFSET))(this, type);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TrySerialize(::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& serialized, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER_TRYSERIALIZE_OFFSET))(this, instance, serialized, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryDeserialize(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Object*& instance, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Object*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER_TRYDESERIALIZE_OFFSET))(this, data, instance, storageType);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSREFLECTEDCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}
	};
}
