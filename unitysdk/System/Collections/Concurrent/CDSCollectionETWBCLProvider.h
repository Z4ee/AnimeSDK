#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventKeywords.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTBAG_TRYPEEKSTEALS_OFFSET UNITYSDK_OFFSET(0x1C6F3CC0)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTBAG_TRYTAKESTEALS_OFFSET UNITYSDK_OFFSET(0x1C6F3CB0)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTDICTIONARY_ACQUIRINGALLLOCKS_OFFSET UNITYSDK_OFFSET(0x1C6F3CA0)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPOPFAILED_OFFSET UNITYSDK_OFFSET(0x1C6F3C90)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPUSHFAILED_OFFSET UNITYSDK_OFFSET(0x1C6F3C80)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6F3CD0)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F3C30)

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int CDSCollectionETWBCLProvider_TypeDefinitionIndex = 4006;

	class CDSCollectionETWBCLProvider : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Collections::Concurrent::CDSCollectionETWBCLProvider** StaticGet_Log()
		{
			return (::System::Collections::Concurrent::CDSCollectionETWBCLProvider**)Il2CppClass::FromTypeDefinitionIndex(CDSCollectionETWBCLProvider_TypeDefinitionIndex)->GetStaticField(0x2AD0);
		}
		// static const ::System::Diagnostics::Tracing::EventKeywords ALL_KEYWORDS; // 0x0
		// static const ::System::Int32 CONCURRENTSTACK_FASTPUSHFAILED_ID = 0x1; // 0x0
		// static const ::System::Int32 CONCURRENTSTACK_FASTPOPFAILED_ID = 0x2; // 0x0
		// static const ::System::Int32 CONCURRENTDICTIONARY_ACQUIRINGALLLOCKS_ID = 0x3; // 0x0
		// static const ::System::Int32 CONCURRENTBAG_TRYTAKESTEALS_ID = 0x4; // 0x0
		// static const ::System::Int32 CONCURRENTBAG_TRYPEEKSTEALS_ID = 0x5; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CCTOR_OFFSET))();
		}

		::System::Void ConcurrentStack_FastPushFailed(::System::Int32 spinCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPUSHFAILED_OFFSET))(this, spinCount);
		}

		::System::Void ConcurrentStack_FastPopFailed(::System::Int32 spinCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTSTACK_FASTPOPFAILED_OFFSET))(this, spinCount);
		}

		::System::Void ConcurrentDictionary_AcquiringAllLocks(::System::Int32 numOfBuckets)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTDICTIONARY_ACQUIRINGALLLOCKS_OFFSET))(this, numOfBuckets);
		}

		::System::Void ConcurrentBag_TryTakeSteals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTBAG_TRYTAKESTEALS_OFFSET))(this);
		}

		::System::Void ConcurrentBag_TryPeekSteals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTBAG_TRYPEEKSTEALS_OFFSET))(this);
		}
	};
}
