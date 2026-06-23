#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsDirectConverter_1.h"
#include "unitysdk/ParadoxNotion/Serialization/FullSerializer/fsResult.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GUIStyle; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GUISTYLE_DIRECTCONVERTER_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x1D415E60)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GUISTYLE_DIRECTCONVERTER_DODESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D414670)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GUISTYLE_DIRECTCONVERTER_DOSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1D413880)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GUISTYLE_DIRECTCONVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D415EF0)

namespace ParadoxNotion::Serialization::FullSerializer::Internal::DirectConverters
{
	inline static constexpr unsigned int GUIStyle_DirectConverter_TypeDefinitionIndex = 30854;

	class GUIStyle_DirectConverter : public ::ParadoxNotion::Serialization::FullSerializer::fsDirectConverter_1<::UnityEngine::GUIStyle*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GUISTYLE_DIRECTCONVERTER__CTOR_OFFSET))(this);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult DoSerialize(::UnityEngine::GUIStyle* model, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* serialized)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::UnityEngine::GUIStyle*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GUISTYLE_DIRECTCONVERTER_DOSERIALIZE_OFFSET))(this, model, serialized);
		}

		::ParadoxNotion::Serialization::FullSerializer::fsResult DoDeserialize(::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* data, ::UnityEngine::GUIStyle*& model)
		{
			return ((::ParadoxNotion::Serialization::FullSerializer::fsResult(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*, ::UnityEngine::GUIStyle*&))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GUISTYLE_DIRECTCONVERTER_DODESERIALIZE_OFFSET))(this, data, model);
		}

		::System::Object* CreateInstance(::ParadoxNotion::Serialization::FullSerializer::fsData* data, ::System::Type* storageType)
		{
			return ((::System::Object*(*)(::PVOID, ::ParadoxNotion::Serialization::FullSerializer::fsData*, ::System::Type*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_INTERNAL_DIRECTCONVERTERS_GUISTYLE_DIRECTCONVERTER_CREATEINSTANCE_OFFSET))(this, data, storageType);
		}
	};
}
