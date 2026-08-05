#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsDirectConverter_1.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"
#include "unitysdk/UnityEngine/Keyframe.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_KEYFRAME_DIRECTCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1E733C60)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_KEYFRAME_DIRECTCONVERTER_DODESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7339E0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_KEYFRAME_DIRECTCONVERTER_DOSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E7337C0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_KEYFRAME_DIRECTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E733CB0)

namespace ParadoxNotion::Serialization::FullSerializer::Internal::DirectConverters
{
	inline static constexpr unsigned int Keyframe_DirectConverter_TypeDefinitionIndex = 30436;

	class Keyframe_DirectConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsDirectConverter_1<::UnityEngine::Keyframe>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_KEYFRAME_DIRECTCONVERTER__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult DoSerialize(::UnityEngine::Keyframe model, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* serialized)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::UnityEngine::Keyframe, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_KEYFRAME_DIRECTCONVERTER_DOSERIALIZE_OFFSET))(this, model, serialized);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult DoDeserialize(::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* data, ::UnityEngine::Keyframe& model)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*, ::UnityEngine::Keyframe&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_KEYFRAME_DIRECTCONVERTER_DODESERIALIZE_OFFSET))(this, data, model);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_KEYFRAME_DIRECTCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}
	};
}
