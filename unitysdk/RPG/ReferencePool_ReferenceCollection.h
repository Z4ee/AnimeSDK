#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace RPG { class IReference; }
namespace System { class Type; }

#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x18887040)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x18887370)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_GET_REFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x18887A20)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_RELEASE_OFFSET UNITYSDK_OFFSET(0x18886920)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x18886D40)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x18887560)
#define RPG_REFERENCEPOOL_REFERENCECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18887630)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_ReferenceCollection_TypeDefinitionIndex = 5624;

	class ReferencePool_ReferenceCollection : public ::System::Object
	{
	public:
		::System::Type* m_ReferenceType; // 0x10
		::Il2CppArray<::RPG::IReference*>* m_References; // 0x18
		::System::Int32 m_UnusedReferenceCount; // 0x20
		::System::Boolean m_IsReferenceEx; // 0x24

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
