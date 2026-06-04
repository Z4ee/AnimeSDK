#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/TargetPositionCache_CacheEntry_RecordingItem.h"
#include "unitysdk/System/Object.h"

namespace Cinemachine { class TargetPositionCache_CacheCurve; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_ADDRAWITEM_OFFSET UNITYSDK_OFFSET(0x14665C00)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_CREATECURVES_OFFSET UNITYSDK_OFFSET(0x14665750)
#define CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x14665B60)

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_CacheEntry_TypeDefinitionIndex = 36912;

	class TargetPositionCache_CacheEntry : public ::System::Object
	{
	public:
		::Cinemachine::TargetPositionCache_CacheCurve* Curve; // 0x10
		::System::Collections::Generic::List_1<::Cinemachine::TargetPositionCache_CacheEntry_RecordingItem>* RawItems; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY__CTOR_OFFSET))(this);
		}

		::System::Void AddRawItem(::System::Single a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_ADDRAWITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CreateCurves()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CACHEENTRY_CREATECURVES_OFFSET))(this);
		}
	};
}
