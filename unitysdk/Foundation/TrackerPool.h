#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class AssetPoolRunMode; }
namespace Foundation { class AssetTracker; }
namespace Foundation { class InstanceTracker; }
namespace Foundation { class TemporarayTracker; }
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define FOUNDATION_TRACKERPOOL_ASSETTRACKERCREATER_OFFSET UNITYSDK_OFFSET(0x1EF837E0)
#define FOUNDATION_TRACKERPOOL_GETASSETTRAKER_OFFSET UNITYSDK_OFFSET(0x1EF83390)
#define FOUNDATION_TRACKERPOOL_GETINSTANCETRACKER_OFFSET UNITYSDK_OFFSET(0x1EF834E0)
#define FOUNDATION_TRACKERPOOL_GETTEMPORARAYTRACKER_OFFSET UNITYSDK_OFFSET(0x1EF83690)
#define FOUNDATION_TRACKERPOOL_INSTANCETRACKERCREATER_OFFSET UNITYSDK_OFFSET(0x1EF83850)
#define FOUNDATION_TRACKERPOOL_RELEASEASSETTRACKER_OFFSET UNITYSDK_OFFSET(0x1EF83450)
#define FOUNDATION_TRACKERPOOL_RELEASEINSTANCETRACKER_OFFSET UNITYSDK_OFFSET(0x1EF83600)
#define FOUNDATION_TRACKERPOOL_RELEASETEMPORARAYTRACKER_OFFSET UNITYSDK_OFFSET(0x1EF83750)
#define FOUNDATION_TRACKERPOOL_TEMPORARAYTRACKERCREATER_OFFSET UNITYSDK_OFFSET(0x1EF83900)
#define FOUNDATION_TRACKERPOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF839B0)

namespace Foundation
{
	inline static constexpr unsigned int TrackerPool_TypeDefinitionIndex = 7918;

	class TrackerPool : public ::System::Object
	{
	public:
		::Foundation::ObjectPool_1<::Foundation::AssetTracker*>* assetTrackerPool; // 0x10
		::Foundation::ObjectPool_1<::Foundation::InstanceTracker*>* instanceTrackerPool; // 0x18
		::Foundation::ObjectPool_1<::Foundation::TemporarayTracker*>* tempTrackerPool; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL__CTOR_OFFSET))(this);
		}

		::Foundation::AssetTracker* GetAssetTraker(::System::Int32 timeout)
		{
			return ((::Foundation::AssetTracker*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL_GETASSETTRAKER_OFFSET))(this, timeout);
		}

		::System::Void ReleaseAssetTracker(::Foundation::AssetTracker* tracker)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetTracker*))((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL_RELEASEASSETTRACKER_OFFSET))(this, tracker);
		}

		::Foundation::InstanceTracker* GetInstanceTracker(::Foundation::AssetPoolRunMode* pool, ::System::String* path, ::UnityEngine::GameObject* originPrefab, ::System::Int32 timeout, ::System::Int32 capcity)
		{
			return ((::Foundation::InstanceTracker*(*)(::PVOID, ::Foundation::AssetPoolRunMode*, ::System::String*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL_GETINSTANCETRACKER_OFFSET))(this, pool, path, originPrefab, timeout, capcity);
		}

		::System::Void ReleaseInstanceTracker(::Foundation::InstanceTracker* tracker)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::InstanceTracker*))((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL_RELEASEINSTANCETRACKER_OFFSET))(this, tracker);
		}

		::Foundation::TemporarayTracker* GetTemporarayTracker(::System::Int32 timeout, ::System::Int32 capcity)
		{
			return ((::Foundation::TemporarayTracker*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL_GETTEMPORARAYTRACKER_OFFSET))(this, timeout, capcity);
		}

		::System::Void ReleaseTemporarayTracker(::Foundation::TemporarayTracker* tracker)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::TemporarayTracker*))((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL_RELEASETEMPORARAYTRACKER_OFFSET))(this, tracker);
		}

		static ::Foundation::AssetTracker* AssetTrackerCreater()
		{
			return ((::Foundation::AssetTracker*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL_ASSETTRACKERCREATER_OFFSET))();
		}

		static ::Foundation::InstanceTracker* InstanceTrackerCreater()
		{
			return ((::Foundation::InstanceTracker*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL_INSTANCETRACKERCREATER_OFFSET))();
		}

		static ::Foundation::TemporarayTracker* TemporarayTrackerCreater()
		{
			return ((::Foundation::TemporarayTracker*(*)())((::PBYTE)hIl2Cpp + FOUNDATION_TRACKERPOOL_TEMPORARAYTRACKERCREATER_OFFSET))();
		}
	};
}
