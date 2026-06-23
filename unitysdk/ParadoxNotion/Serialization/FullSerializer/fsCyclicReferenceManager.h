#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_ADDREFERENCEWITHID_OFFSET UNITYSDK_OFFSET(0x1D417130)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D416DD0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_ENTER_OFFSET UNITYSDK_OFFSET(0x1D416EC0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_EXIT_OFFSET UNITYSDK_OFFSET(0x1D416ED0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_GETREFERENCEID_OFFSET UNITYSDK_OFFSET(0x1D4171C0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_GETREFERENCEOBJECT_OFFSET UNITYSDK_OFFSET(0x1D417030)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_ISREFERENCE_OFFSET UNITYSDK_OFFSET(0x1D4172F0)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_MARKSERIALIZED_OFFSET UNITYSDK_OFFSET(0x1D417370)
#define PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D416C70)

namespace ParadoxNotion::Serialization::FullSerializer
{
	inline static constexpr unsigned int fsCyclicReferenceManager_TypeDefinitionIndex = 29530;

	class fsCyclicReferenceManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Int32>* _objectIds; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _marked; // 0x18
		::System::Int32 _nextId; // 0x20
		::System::Int32 _depth; // 0x24
		::System::Int32 _idStart; // 0x28

		::System::Void _ctor(::System::Int32 idStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER__CTOR_OFFSET))(this, idStart);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_ENTER_OFFSET))(this);
		}

		::System::Boolean Exit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_EXIT_OFFSET))(this);
		}

		::System::Object* GetReferenceObject(::System::Int32 id)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_GETREFERENCEOBJECT_OFFSET))(this, id);
		}

		::System::Void AddReferenceWithId(::System::Int32 id, ::System::Object* reference)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_ADDREFERENCEWITHID_OFFSET))(this, id, reference);
		}

		::System::Int32 GetReferenceId(::System::Object* item)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_GETREFERENCEID_OFFSET))(this, item);
		}

		::System::Boolean IsReference(::System::Object* item)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_ISREFERENCE_OFFSET))(this, item);
		}

		::System::Void MarkSerialized(::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PARADOXNOTION_SERIALIZATION_FULLSERIALIZER_FSCYCLICREFERENCEMANAGER_MARKSERIALIZED_OFFSET))(this, item);
		}
	};
}
