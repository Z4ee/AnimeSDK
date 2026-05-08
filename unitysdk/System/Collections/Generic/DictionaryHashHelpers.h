#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::CompilerServices { template <typename T1, typename T2> class ConditionalWeakTable_2; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_COLLECTIONS_GENERIC_DICTIONARYHASHHELPERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E04C30)
#define SYSTEM_COLLECTIONS_GENERIC_DICTIONARYHASHHELPERS__CTOR_OFFSET UNITYSDK_OFFSET(0x19E04C20)

namespace System::Collections::Generic
{
	inline static constexpr unsigned int DictionaryHashHelpers_TypeDefinitionIndex = 1528;

	class DictionaryHashHelpers : public ::System::Object
	{
	public:
		static ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>** StaticGet__SerializationInfoTable_k__BackingField()
		{
			return (::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Runtime::Serialization::SerializationInfo*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryHashHelpers_TypeDefinitionIndex)->GetStaticField(0xC50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_DICTIONARYHASHHELPERS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_GENERIC_DICTIONARYHASHHELPERS__CCTOR_OFFSET))();
		}
	};
}
