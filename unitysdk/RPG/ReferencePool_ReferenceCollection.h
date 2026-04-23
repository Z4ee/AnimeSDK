#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace RPG { class IReference; }
namespace System { class Type; }

#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x17AD93E0)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x17AD96B0)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_GET_REFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x17AD9DA0)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_RELEASE_OFFSET UNITYSDK_OFFSET(0x17AD8C30)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x17AD9080)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x17AD98B0)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD99A0)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_ReferenceCollection_TypeDefinitionIndex = 6422;

	class ReferencePool_ReferenceCollection : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::IReference*>* m_References; // 0x10
		::System::Type* m_ReferenceType; // 0x18
		::System::Boolean m_IsReferenceEx; // 0x20
		::System::Int32 m_UnusedReferenceCount; // 0x24

		::System::Void _ctor(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION__CTOR_OFFSET))(this, typeHandle);
		}

		::System::Type* get_ReferenceType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_GET_REFERENCETYPE_OFFSET))(this);
		}

		::RPG::IReference* Acquire()
		{
			return ((::RPG::IReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_ACQUIRE_OFFSET))(this);
		}

		::System::Void Release(::RPG::IReference* reference)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::IReference*))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_RELEASE_OFFSET))(this, reference);
		}

		::System::Void Add(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_ADD_OFFSET))(this, count);
		}

		::System::Void Remove(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVE_OFFSET))(this, count);
		}

		::System::Void RemoveAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVEALL_OFFSET))(this);
		}
	};
}
