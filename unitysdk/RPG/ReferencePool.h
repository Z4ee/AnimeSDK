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

#define RPG_REFERENCEPOOL_ACQUIRESTRINGBUILDER_OFFSET UNITYSDK_OFFSET(0x1BF1B660)
#define RPG_REFERENCEPOOL_ACQUIRE_OFFSET UNITYSDK_OFFSET(0x1BF1B080)
#define RPG_REFERENCEPOOL_ADD_OFFSET UNITYSDK_OFFSET(0x1BF1B730)
#define RPG_REFERENCEPOOL_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1BF1AF00)
#define RPG_REFERENCEPOOL_GETREFERENCECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1BF1B300)
#define RPG_REFERENCEPOOL_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1BF1AED0)
#define RPG_REFERENCEPOOL_GET_ENABLESTRICTCHECK_OFFSET UNITYSDK_OFFSET(0x1BF1AEB0)
#define RPG_REFERENCEPOOL_INTERNALCHECKREFERENCETYPE_OFFSET UNITYSDK_OFFSET(0x1BF1B0B0)
#define RPG_REFERENCEPOOL_RELEASEALLAUTORELEASEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1BF1A890)
#define RPG_REFERENCEPOOL_RELEASE_OFFSET UNITYSDK_OFFSET(0x1BF1B6C0)
#define RPG_REFERENCEPOOL_REMOVEALL_OFFSET UNITYSDK_OFFSET(0x1BF1B9C0)
#define RPG_REFERENCEPOOL_REMOVE_OFFSET UNITYSDK_OFFSET(0x1BF1B8D0)
#define RPG_REFERENCEPOOL_SET_ENABLESTRICTCHECK_OFFSET UNITYSDK_OFFSET(0x1BF1AEC0)
#define RPG_REFERENCEPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF1BB50)

namespace RPG
{
	inline static constexpr unsigned int ReferencePool_TypeDefinitionIndex = 5614;

	class ReferencePool : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::ReferencePool_AutoReleaseReferenceObjectDatas>** StaticGet__AutoReleaseRefrenceDataList()
		{
			return (::System::Collections::Generic::List_1<::RPG::ReferencePool_AutoReleaseReferenceObjectDatas>**)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_TypeDefinitionIndex)->GetStaticField(0x2D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::RPG::ReferencePool_ReferenceCollection*>** StaticGet_s_ReferenceCollections()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::RPG::ReferencePool_ReferenceCollection*>**)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_TypeDefinitionIndex)->GetStaticField(0x2D8);
		}
		static ::System::Boolean* StaticGet_m_EnableStrictCheck()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ReferencePool_TypeDefinitionIndex)->GetStaticField(0x1F0);
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

		static ::System::Void set_EnableStrictCheck(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_SET_ENABLESTRICTCHECK_OFFSET))(a1);
		}

		static ::System::Int32 get_Count()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_GET_COUNT_OFFSET))();
		}

		static ::System::Void ClearAll()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_CLEARALL_OFFSET))();
		}

		static ::RPG::IReference* Acquire(::System::RuntimeTypeHandle a1)
		{
			return ((::RPG::IReference*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_ACQUIRE_OFFSET))(a1);
		}

		static ::Class_1_85D8814B23485BB2* AcquireStringBuilder()
		{
			return ((::Class_1_85D8814B23485BB2*(*)())((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_ACQUIRESTRINGBUILDER_OFFSET))();
		}

		static ::System::Void Release(::RPG::IReference* a1)
		{
			return ((::System::Void(*)(::RPG::IReference*))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_RELEASE_OFFSET))(a1);
		}

		static ::System::Void Add(::System::RuntimeTypeHandle a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_ADD_OFFSET))(a1, a2);
		}

		static ::System::Void Remove(::System::RuntimeTypeHandle a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REMOVE_OFFSET))(a1, a2);
		}

		static ::System::Void RemoveAll(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_REMOVEALL_OFFSET))(a1);
		}

		static ::System::Void InternalCheckReferenceType(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Void(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_INTERNALCHECKREFERENCETYPE_OFFSET))(a1);
		}

		static ::RPG::ReferencePool_ReferenceCollection* GetReferenceCollection(::System::RuntimeTypeHandle a1)
		{
			return ((::RPG::ReferencePool_ReferenceCollection*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_REFERENCEPOOL_GETREFERENCECOLLECTION_OFFSET))(a1);
		}
	};
}
