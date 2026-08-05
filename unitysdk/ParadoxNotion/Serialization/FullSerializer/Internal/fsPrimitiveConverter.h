#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsConverter.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_CANPROCESS_OFFSET UNITYSDK_OFFSET(0x1EBC2500)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_REQUESTCYCLESUPPORT_OFFSET UNITYSDK_OFFSET(0x1EBC2590)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_REQUESTINHERITANCESUPPORT_OFFSET UNITYSDK_OFFSET(0x1EBC25A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_TRYDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBC2F60)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_TRYSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBC2850)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_USEBOOL_OFFSET UNITYSDK_OFFSET(0x1EBC25B0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_USEDOUBLE_OFFSET UNITYSDK_OFFSET(0x1EBC2750)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_USEINT64_OFFSET UNITYSDK_OFFSET(0x1EBC25F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_USESTRING_OFFSET UNITYSDK_OFFSET(0x1EBC27E0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC3A50)

namespace ParadoxNotion::Serialization::FullSerializer::Internal
{
	inline static constexpr unsigned int fsPrimitiveConverter_TypeDefinitionIndex = 30218;

	class fsPrimitiveConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanProcess(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_CANPROCESS_OFFSET))(this, type);
		}

		::System::Boolean RequestCycleSupport(::System::Type* storageType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_REQUESTCYCLESUPPORT_OFFSET))(this, storageType);
		}

		::System::Boolean RequestInheritanceSupport(::System::Type* storageType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_REQUESTINHERITANCESUPPORT_OFFSET))(this, storageType);
		}

		static ::System::Boolean UseBool(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_USEBOOL_OFFSET))(type);
		}

		static ::System::Boolean UseInt64(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_USEINT64_OFFSET))(type);
		}

		static ::System::Boolean UseDouble(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_USEDOUBLE_OFFSET))(type);
		}

		static ::System::Boolean UseString(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_USESTRING_OFFSET))(type);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TrySerialize(::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& serialized, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_TRYSERIALIZE_OFFSET))(this, instance, serialized, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryDeserialize(::ParadoxNotion::Serialization::FullSerializer::fsData* storage, ::System::Object*& instance, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Object*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_FSPRIMITIVECONVERTER_TRYDESERIALIZE_OFFSET))(this, storage, instance, storageType);
		}
	};
}
