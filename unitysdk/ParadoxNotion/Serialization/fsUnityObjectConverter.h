#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsConverter.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class Type; }

#define PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_CANPROCESS_OFFSET UNITYSDK_OFFSET(0x1EBC3B40)
#define PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EBC4080)
#define PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_REQUESTCYCLESUPPORT_OFFSET UNITYSDK_OFFSET(0x1EBC3BD0)
#define PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_REQUESTINHERITANCESUPPORT_OFFSET UNITYSDK_OFFSET(0x1EBC3BE0)
#define PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_TRYDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBC3DD0)
#define PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_TRYSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EBC3BF0)
#define PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC4090)

namespace ParadoxNotion::Serialization
{
	inline static constexpr unsigned int fsUnityObjectConverter_TypeDefinitionIndex = 31510;

	class fsUnityObjectConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsConverter
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER__CTOR_OFFSET))(this);
		}

		::System::Boolean CanProcess(::System::Type* type)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_CANPROCESS_OFFSET))(this, type);
		}

		::System::Boolean RequestCycleSupport(::System::Type* storageType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_REQUESTCYCLESUPPORT_OFFSET))(this, storageType);
		}

		::System::Boolean RequestInheritanceSupport(::System::Type* storageType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_REQUESTINHERITANCESUPPORT_OFFSET))(this, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TrySerialize(::System::Object* instance, ::ParadoxNotion::Serialization::FullSerializer::fsData*& serialized, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Object*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_TRYSERIALIZE_OFFSET))(this, instance, serialized, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult TryDeserialize(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Object*& instance, ::System::Type* storageType)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Object*&, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_TRYDESERIALIZE_OFFSET))(this, data, instance, storageType);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FSUNITYOBJECTCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}
	};
}
