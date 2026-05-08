#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsConverter.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_CANPROCESS_OFFSET UNITYSDK_OFFSET(0x1AF36870)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1AF368C0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_REQUESTCYCLESUPPORT_OFFSET UNITYSDK_OFFSET(0x1AF368A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_REQUESTINHERITANCESUPPORT_OFFSET UNITYSDK_OFFSET(0x1AF368B0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_TRYDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AF37020)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_TRYSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1AF36910)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF37700)

namespace ParadoxNotion::Serialization::FullSerializer::Internal
{
	inline static constexpr unsigned int fsEnumConverter_TypeDefinitionIndex = 27414;

	class fsEnumConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanProcess(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_CANPROCESS_OFFSET))(this, type);
		}

		::System::Boolean RequestCycleSupport(::System::Type* storageType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_REQUESTCYCLESUPPORT_OFFSET))(this, storageType);
		}

		::System::Boolean RequestInheritanceSupport(::System::Type* storageType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_REQUESTINHERITANCESUPPORT_OFFSET))(this, storageType);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TrySerialize(::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& serialized, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_TRYSERIALIZE_OFFSET))(this, instance, serialized, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryDeserialize(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Object*& instance, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Object*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSENUMCONVERTER_TRYDESERIALIZE_OFFSET))(this, data, instance, storageType);
		}
	};
}
