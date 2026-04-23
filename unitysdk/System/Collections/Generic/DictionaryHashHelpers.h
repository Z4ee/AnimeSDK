#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_GENERIC_DICTIONARYHASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET UNITYSDK_OFFSET(0x177F3990)
#define SYSTEM_COLLECTIONS_GENERIC_DICTIONARYHASHHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x177F39F0)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int DictionaryHashHelpers_TypeDefinitionIndex = 1532;

	class DictionaryHashHelpers : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>** StaticGet__SerializationInfoTable_k__BackingField()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryHashHelpers_TypeDefinitionIndex)->GetStaticField(0x4A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_DICTIONARYHASHHELPERS__CCTOR_OFFSET))();
		}

		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>* get_SerializationInfoTable()
		{
			return ((::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_DICTIONARYHASHHELPERS_GET_SERIALIZATIONINFOTABLE_OFFSET))();
		}
	};
}
