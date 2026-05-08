#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_OBJECTREFERENCEEQUALITYCOMPARATOR_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__EQUALS_OFFSET UNITYSDK_OFFSET(0x1AFD7500)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_OBJECTREFERENCEEQUALITYCOMPARATOR_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AFD7510)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_OBJECTREFERENCEEQUALITYCOMPARATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFD7530)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_OBJECTREFERENCEEQUALITYCOMPARATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD7520)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsCyclicReferenceManager_ObjectReferenceEqualityComparator_TypeDefinitionIndex = 28079;

	class fsCyclicReferenceManager_ObjectReferenceEqualityComparator : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEqualityComparer_1<::System::Object*>** StaticGet_Instance()
		{
			return (::System::Collections::Generic::IEqualityComparer_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(fsCyclicReferenceManager_ObjectReferenceEqualityComparator_TypeDefinitionIndex)->GetStaticField(0x209E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_OBJECTREFERENCEEQUALITYCOMPARATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_OBJECTREFERENCEEQUALITYCOMPARATOR__CCTOR_OFFSET))();
		}

		::System::Boolean System_Collections_Generic_IEqualityComparer_System_Object__Equals(::System::Object* x, ::System::Object* y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_OBJECTREFERENCEEQUALITYCOMPARATOR_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__EQUALS_OFFSET))(this, x, y);
		}

		::System::Int32 System_Collections_Generic_IEqualityComparer_System_Object__GetHashCode(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_OBJECTREFERENCEEQUALITYCOMPARATOR_SYSTEM_COLLECTIONS_GENERIC_IEQUALITYCOMPARER_SYSTEM_OBJECT__GETHASHCODE_OFFSET))(this, obj);
		}
	};
}
