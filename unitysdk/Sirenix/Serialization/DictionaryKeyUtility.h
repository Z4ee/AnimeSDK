#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IDictionaryKeyPathProvider; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class Assembly; }

#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_FROMTO_OFFSET UNITYSDK_OFFSET(0x1FB0E030)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_GETDICTIONARYKEYSTRING_OFFSET UNITYSDK_OFFSET(0x1FB0C460)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_GETDICTIONARYKEYVALUE_OFFSET UNITYSDK_OFFSET(0x1FB0D520)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_GETPERSISTENTPATHKEYTYPES_OFFSET UNITYSDK_OFFSET(0x1FB0C120)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_KEYTYPESUPPORTSPERSISTENTPATHS_OFFSET UNITYSDK_OFFSET(0x1FB0C170)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_LOGINVALIDKEYPATHPROVIDER_OFFSET UNITYSDK_OFFSET(0x1FB0BF70)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_PRIVATEISSUPPORTEDDICTIONARYKEYTYPE_OFFSET UNITYSDK_OFFSET(0x1FB0C310)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB0A150)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryKeyUtility_TypeDefinitionIndex = 7563;

	class DictionaryKeyUtility : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::Sirenix::Serialization::IDictionaryKeyPathProvider*, ::System::String*>** StaticGet_ProviderToID()
		{
			return (::System::Collections::Generic::Dictionary_2<::Sirenix::Serialization::IDictionaryKeyPathProvider*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_TypeDefinitionIndex)->GetStaticField(0x6620);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Type*>** StaticGet_BaseSupportedDictionaryKeyTypes()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_TypeDefinitionIndex)->GetStaticField(0x6628);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_TempKeysToObjects()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_TypeDefinitionIndex)->GetStaticField(0x6630);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>** StaticGet_ObjectsToTempKeys()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_TypeDefinitionIndex)->GetStaticField(0x6638);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::Sirenix::Serialization::IDictionaryKeyPathProvider*>** StaticGet_IDToKeyPathProviders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::Sirenix::Serialization::IDictionaryKeyPathProvider*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_TypeDefinitionIndex)->GetStaticField(0x6640);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Char>** StaticGet_AllowedSpecialKeyStrChars()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_TypeDefinitionIndex)->GetStaticField(0x6648);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>** StaticGet_GetSupportedDictionaryKeyTypesResults()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_TypeDefinitionIndex)->GetStaticField(0x6650);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Sirenix::Serialization::IDictionaryKeyPathProvider*>** StaticGet_TypeToKeyPathProviders()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::Sirenix::Serialization::IDictionaryKeyPathProvider*>**)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_TypeDefinitionIndex)->GetStaticField(0x6658);
		}
		static ::System::Int64* StaticGet_tempKeyCounter()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(DictionaryKeyUtility_TypeDefinitionIndex)->GetStaticField(0x3360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void LogInvalidKeyPathProvider(::System::Type* type, ::System::Reflection::Assembly* assembly, ::System::String* reason)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Reflection::Assembly*, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_LOGINVALIDKEYPATHPROVIDER_OFFSET))(type, assembly, reason);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetPersistentPathKeyTypes()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Type*>*(*)())((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_GETPERSISTENTPATHKEYTYPES_OFFSET))();
		}

		static ::System::Boolean KeyTypeSupportsPersistentPaths(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_KEYTYPESUPPORTSPERSISTENTPATHS_OFFSET))(type);
		}

		static ::System::Boolean PrivateIsSupportedDictionaryKeyType(::System::Type* type)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_PRIVATEISSUPPORTEDDICTIONARYKEYTYPE_OFFSET))(type);
		}

		static ::System::String* GetDictionaryKeyString(::System::Object* key)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_GETDICTIONARYKEYSTRING_OFFSET))(key);
		}

		static ::System::Object* GetDictionaryKeyValue(::System::String* keyStr, ::System::Type* expectedType)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_GETDICTIONARYKEYVALUE_OFFSET))(keyStr, expectedType);
		}

		static ::System::String* FromTo(::System::String* str, ::System::Int32 from, ::System::Int32 to)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY_FROMTO_OFFSET))(str, from, to);
		}
	};
}
