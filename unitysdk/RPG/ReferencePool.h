#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/ReferencePool_AutoReleaseReferenceObjectDatas.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

class Class_1_85D8814B23485BB2;
namespace RPG { class IReference; }
namespace RPG { class ReferencePool_ReferenceCollection; }
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG { template <typename T1, typename T2> class PoolablePooledDictionary_2; }
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG { template <typename T> class PoolQueue_1; }
namespace RPG { template <typename T> class PoolablePooledList_1; }
namespace RPG { template <typename T> class PoolablePooledQueue_1; }
namespace RPG { template <typename T> class PoolablePooledSet_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_REFERENCEPOOL_ACQUIRESTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x164ADDA0)
#define RPG_REFERENCEPOOL_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x164AD8D0)
#define RPG_REFERENCEPOOL_ADD_OFFSET UNITYSDK_OFFSET(0x164ADE60)
#define RPG_REFERENCEPOOL_CLEARALL_OFFSET UNITYSDK_OFFSET(0x164AD710)
#define RPG_REFERENCEPOOL_GETREFERENCECOLLECTION_OFFSET UNITYSDK_OFFSET(0x164ADAB0)
#define RPG_REFERENCEPOOL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x164AD6E0)
#define RPG_REFERENCEPOOL_GET_ENABLESTRICTCHECK_OFFSET UNITYSDK_OFFSET(0x164AD6C0)
#define RPG_REFERENCEPOOL_INTERNALCHECKREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x164AD900)
#define RPG_REFERENCEPOOL_RELEASEALLAUTORELEASEREFERENCE_OFFSET UNITYSDK_OFFSET(0x164AD160)
#define RPG_REFERENCEPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x164ADDF0)
#define RPG_REFERENCEPOOL_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x164AE110)
#define RPG_REFERENCEPOOL_REMOVE_OFFSET UNITYSDK_OFFSET(0x164AE010)
#define RPG_REFERENCEPOOL_SET_ENABLESTRICTCHECK_OFFSET UNITYSDK_OFFSET(0x164AD6D0)
#define RPG_REFERENCEPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x164AE250)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_TypeDefinitionIndex = 6385;

	class ReferencePool : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::ReferencePool_AutoReleaseReferenceObjectDatas>** StaticGet__AutoReleaseRefrenceDataList()
		{
			return (::System::Collections::Generic::List_1<::RPG::ReferencePool_AutoReleaseReferenceObjectDatas>**)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_TypeDefinitionIndex)->GetStaticField(0x490);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::RPG::ReferencePool_ReferenceCollection*>** StaticGet_s_ReferenceCollections()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::RPG::ReferencePool_ReferenceCollection*>**)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_TypeDefinitionIndex)->GetStaticField(0x498);
		}
		static ::System::Boolean* StaticGet_m_EnableStrictCheck()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_TypeDefinitionIndex)->GetStaticField(0x380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL__CCTOR_OFFSET))();
		}

		static ::System::Void ReleaseAllAutoReleaseReference()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RELEASEALLAUTORELEASEREFERENCE_OFFSET))();
		}

		static ::System::Boolean get_EnableStrictCheck()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_GET_ENABLESTRICTCHECK_OFFSET))();
		}

		static ::System::Void set_EnableStrictCheck(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_SET_ENABLESTRICTCHECK_OFFSET))(value);
		}

		static ::System::Int32 get_Count()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_GET_COUNT_OFFSET))();
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_CLEARALL_OFFSET))();
		}

		static ::RPG::IReference* Acquire(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::RPG::IReference*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_ACQUIRE_OFFSET))(typeHandle);
		}

		static ::Class_1_85D8814B23485BB2* AcquireStringBuilder()
		{
			return ((::Class_1_85D8814B23485BB2*(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_ACQUIRESTRINGBUILDER_OFFSET))();
		}

		static ::System::Void Release(::RPG::IReference* reference)
		{
			return ((::System::Void(*)(::RPG::IReference*))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RELEASE_OFFSET))(reference);
		}

		static ::System::Void Add(::System::RuntimeTypeHandle typeHandle, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_ADD_OFFSET))(typeHandle, count);
		}

		static ::System::Void Remove(::System::RuntimeTypeHandle typeHandle, ::System::Int32 count)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REMOVE_OFFSET))(typeHandle, count);
		}

		static ::System::Void RemoveAll(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REMOVEALL_OFFSET))(typeHandle);
		}

		static ::System::Void InternalCheckReferenceType(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_INTERNALCHECKREFERENCETYPE_OFFSET))(typeHandle);
		}

		static ::RPG::ReferencePool_ReferenceCollection* GetReferenceCollection(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::RPG::ReferencePool_ReferenceCollection*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_GETREFERENCECOLLECTION_OFFSET))(typeHandle);
		}
	};
}
