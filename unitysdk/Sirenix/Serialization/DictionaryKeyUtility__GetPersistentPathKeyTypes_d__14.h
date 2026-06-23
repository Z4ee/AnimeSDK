#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2_KeyCollection_Enumerator.h"
#include "unitysdk/System/Collections/Generic/HashSet_1_Enumerator.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization { class IDictionaryKeyPathProvider; }
namespace System { class Type; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1E8347F0)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TYPE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E834B00)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TYPE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E834A90)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1E834B70)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E834AF0)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1E834AA0)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E8347B0)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14__CTOR_OFFSET UNITYSDK_OFFSET(0x1E834790)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1E8347D0)
#define SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1E8347E0)

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int DictionaryKeyUtility__GetPersistentPathKeyTypes_d__14_TypeDefinitionIndex = 7565;

	class DictionaryKeyUtility__GetPersistentPathKeyTypes_d__14 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2_KeyCollection_Enumerator<::System::Type*, ::Sirenix::Serialization::IDictionaryKeyPathProvider*> __7__wrap2; // 0x10
		::System::Collections::Generic::HashSet_1_Enumerator<::System::Type*> __7__wrap1; // 0x28
		::System::Type* __2__current; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Int32 __l__initialThreadId; // 0x4C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14___M__FINALLY2_OFFSET))(this);
		}

		::System::Type* System_Collections_Generic_IEnumerator_System_Type__get_Current()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_TYPE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Type*>* System_Collections_Generic_IEnumerable_System_Type__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Type*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_TYPE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_SERIALIZATION_DICTIONARYKEYUTILITY__GETPERSISTENTPATHKEYTYPES_D__14_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}
	};
}
