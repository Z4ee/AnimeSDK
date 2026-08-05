#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsDirectConverter_1.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Gradient; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GRADIENT_DIRECTCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1EB8CC50)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GRADIENT_DIRECTCONVERTER_DODESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8CA70)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GRADIENT_DIRECTCONVERTER_DOSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1EB8C910)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GRADIENT_DIRECTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8CCA0)

namespace ParadoxNotion::Serialization::FullSerializer::Internal::DirectConverters
{
	inline static constexpr unsigned int Gradient_DirectConverter_TypeDefinitionIndex = 30102;

	class Gradient_DirectConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsDirectConverter_1<::UnityEngine::Gradient*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GRADIENT_DIRECTCONVERTER__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult DoSerialize(::UnityEngine::Gradient* model, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* serialized)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::UnityEngine::Gradient*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GRADIENT_DIRECTCONVERTER_DOSERIALIZE_OFFSET))(this, model, serialized);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult DoDeserialize(::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* data, ::UnityEngine::Gradient*& model)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*, ::UnityEngine::Gradient*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GRADIENT_DIRECTCONVERTER_DODESERIALIZE_OFFSET))(this, data, model);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GRADIENT_DIRECTCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}
	};
}
