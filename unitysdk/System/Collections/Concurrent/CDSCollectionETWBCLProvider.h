#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"

#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTBAG_TRYPEEKSTEALS_OFFSET UNITYSDK_OFFSET(0x1A0B1350)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER_CONCURRENTBAG_TRYTAKESTEALS_OFFSET UNITYSDK_OFFSET(0x1A0B1310)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0B1390)
#define SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B12D0)

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int CDSCollectionETWBCLProvider_TypeDefinitionIndex = 3048;

	class CDSCollectionETWBCLProvider : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::System::Collections::Concurrent::CDSCollectionETWBCLProvider** StaticGet_Log()
		{
			return (::System::Collections::Concurrent::CDSCollectionETWBCLProvider**)Il2CppClass::FromTypeDefinitionIndex(CDSCollectionETWBCLProvider_TypeDefinitionIndex)->GetStaticField(0x11950);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_CONCURRENT_CDSCOLLECTIONETWBCLPROVIDER__CCTOR_OFFSET))();
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
