#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace RPG { class IReference; }
namespace System { class Type; }

#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x1D2F64A0)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1D2F6830)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_GET_REFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x1D2F6F50)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1D2F5C00)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1D2F60F0)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1D2F6A20)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2F6AF0)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_ReferenceCollection_TypeDefinitionIndex = 5629;

	class ReferencePool_ReferenceCollection : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::IReference*>* m_References; // 0x10
		::System::Type* m_ReferenceType; // 0x18
		::System::Boolean m_IsReferenceEx; // 0x20
		::System::Int32 m_UnusedReferenceCount; // 0x24

		::System::Void _ctor(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION__CTOR_OFFSET))(this, a1);
		}

		::System::Type* get_ReferenceType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_GET_REFERENCETYPE_OFFSET))(this);
		}

		::RPG::IReference* Acquire()
		{
			return ((::RPG::IReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_ACQUIRE_OFFSET))(this);
		}

		::System::Void Release(::RPG::IReference* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::IReference*))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_RELEASE_OFFSET))(this, a1);
		}

		::System::Void Add(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_ADD_OFFSET))(this, a1);
		}

		::System::Void Remove(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVEALL_OFFSET))(this);
		}
	};
}
