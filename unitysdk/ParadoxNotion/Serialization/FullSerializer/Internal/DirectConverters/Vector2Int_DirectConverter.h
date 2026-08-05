#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsDirectConverter_1.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_VECTOR2INT_DIRECTCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1DFE3290)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_VECTOR2INT_DIRECTCONVERTER_DODESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DFE31A0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_VECTOR2INT_DIRECTCONVERTER_DOSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1DFE30C0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_VECTOR2INT_DIRECTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE32C0)

namespace ParadoxNotion::Serialization::FullSerializer::Internal::DirectConverters
{
	inline static constexpr unsigned int Vector2Int_DirectConverter_TypeDefinitionIndex = 30528;

	class Vector2Int_DirectConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsDirectConverter_1<::UnityEngine::Vector2Int>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_VECTOR2INT_DIRECTCONVERTER__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult DoSerialize(::UnityEngine::Vector2Int model, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* serialized)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_VECTOR2INT_DIRECTCONVERTER_DOSERIALIZE_OFFSET))(this, model, serialized);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult DoDeserialize(::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* data, ::UnityEngine::Vector2Int& model)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*, ::UnityEngine::Vector2Int&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_VECTOR2INT_DIRECTCONVERTER_DODESERIALIZE_OFFSET))(this, data, model);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_VECTOR2INT_DIRECTCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}
	};
}
