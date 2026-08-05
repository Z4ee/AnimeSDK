#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ParadoxNotion::Serialization::FullSerializer { class fsData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_FSLAZYCYCLEDEFINITIONWRITER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E8C87F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_FSLAZYCYCLEDEFINITIONWRITER_WRITEDEFINITION_OFFSET UNITYSDK_OFFSET(0x1E8C8400)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_FSLAZYCYCLEDEFINITIONWRITER_WRITEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E8C8590)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_FSLAZYCYCLEDEFINITIONWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C88C0)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsSerializer_fsLazyCycleDefinitionWriter_TypeDefinitionIndex = 29803;

	class fsSerializer_fsLazyCycleDefinitionWriter : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* _pendingDefinitions; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Int32>* _references; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_FSLAZYCYCLEDEFINITIONWRITER__CTOR_OFFSET))(this);
		}

		::System::Void WriteDefinition(::System::Int32 id, ::ParadoxNotion::Serialization::FullSerializer::fsData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ParadoxNotion::Serialization::FullSerializer::fsData*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_FSLAZYCYCLEDEFINITIONWRITER_WRITEDEFINITION_OFFSET))(this, id, data);
		}

		::System::Void WriteReference(::System::Int32 id, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>* dict)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::ParadoxNotion::Serialization::FullSerializer::fsData*>*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_FSLAZYCYCLEDEFINITIONWRITER_WRITEREFERENCE_OFFSET))(this, id, dict);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSSERIALIZER_FSLAZYCYCLEDEFINITIONWRITER_CLEAR_OFFSET))(this);
		}
	};
}
