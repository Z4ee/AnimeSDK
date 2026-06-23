#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsDataType.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace ParadoxNotion::Serialization::FullSerializer { class fsSerializer; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_CHECKKEY_1_OFFSET UNITYSDK_OFFSET(0x1BCD1880)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_CHECKKEY_OFFSET UNITYSDK_OFFSET(0x1BCD0F60)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_CHECKTYPE_OFFSET UNITYSDK_OFFSET(0x1BCD0A20)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BCD1600)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_FAILEXPECTEDTYPE_OFFSET UNITYSDK_OFFSET(0x1BCD0FF0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_REQUESTCYCLESUPPORT_OFFSET UNITYSDK_OFFSET(0x1BCD1760)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_REQUESTINHERITANCESUPPORT_OFFSET UNITYSDK_OFFSET(0x1BCD1850)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCD1D10)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsBaseConverter_TypeDefinitionIndex = 30764;

	class fsBaseConverter : public ::System::Object
	{
	public:
		::ParadoxNotion::Serialization::FullSerializer::fsSerializer* Serializer; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER__CTOR_OFFSET))(this);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}

		::System::Boolean RequestCycleSupport(::System::Type* storageType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_REQUESTCYCLESUPPORT_OFFSET))(this, storageType);
		}

		::System::Boolean RequestInheritanceSupport(::System::Type* storageType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_REQUESTINHERITANCESUPPORT_OFFSET))(this, storageType);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult FailExpectedType(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::Il2CppArray<::ParadoxNotion::Serialization::FullSerializer::fsDataType>* types)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::Il2CppArray<::ParadoxNotion::Serialization::FullSerializer::fsDataType>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_FAILEXPECTEDTYPE_OFFSET))(this, data, types);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult CheckType(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::ParadoxNotion::Serialization::FullSerializer::fsDataType type)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::ParadoxNotion::Serialization::FullSerializer::fsDataType))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_CHECKTYPE_OFFSET))(this, data, type);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult CheckKey(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::String* key, ::ParadoxNotion::Serialization::FullSerializer::fsData*& subitem)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_CHECKKEY_OFFSET))(this, data, key, subitem);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult CheckKey_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* data, ::System::String* key, ::ParadoxNotion::Serialization::FullSerializer::fsData*& subitem)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*, ::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSBASECONVERTER_CHECKKEY_1_OFFSET))(this, data, key, subitem);
		}
	};
}
