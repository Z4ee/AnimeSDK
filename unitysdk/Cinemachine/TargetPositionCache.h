#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/TargetPositionCache_Mode.h"
#include "unitysdk/Cinemachine/TargetPositionCache_TimeRange.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class TargetPositionCache_CacheEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_TARGETPOSITIONCACHE_CLEARCACHE_OFFSET UNITYSDK_OFFSET(0x1EF0B8B0)
#define CINEMACHINE_TARGETPOSITIONCACHE_CREATEPLAYBACKCURVES_OFFSET UNITYSDK_OFFSET(0x1EF0B990)
#define CINEMACHINE_TARGETPOSITIONCACHE_GETTARGETPOSITION_OFFSET UNITYSDK_OFFSET(0x1EF09630)
#define CINEMACHINE_TARGETPOSITIONCACHE_GETTARGETROTATION_OFFSET UNITYSDK_OFFSET(0x1EF09A70)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_CACHEMODE_OFFSET UNITYSDK_OFFSET(0x1EF0B770)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_CACHETIMERANGE_OFFSET UNITYSDK_OFFSET(0x1EF0BC30)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1EF0BBF0)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_CURRENTPLAYBACKTIMEVALID_OFFSET UNITYSDK_OFFSET(0x1EF0BB30)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1EF0BBD0)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_HASHURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1EF0BB70)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_ISCAMERACUT_OFFSET UNITYSDK_OFFSET(0x1EF0BC10)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1EF0BBA0)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_ISRECORDING_OFFSET UNITYSDK_OFFSET(0x1EF0BB10)
#define CINEMACHINE_TARGETPOSITIONCACHE_GET_USECACHE_OFFSET UNITYSDK_OFFSET(0x1EF0B750)
#define CINEMACHINE_TARGETPOSITIONCACHE_SET_CACHEMODE_OFFSET UNITYSDK_OFFSET(0x1EF0B780)
#define CINEMACHINE_TARGETPOSITIONCACHE_SET_CURRENTFRAME_OFFSET UNITYSDK_OFFSET(0x1EF0BC00)
#define CINEMACHINE_TARGETPOSITIONCACHE_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1EF0BBE0)
#define CINEMACHINE_TARGETPOSITIONCACHE_SET_ISCAMERACUT_OFFSET UNITYSDK_OFFSET(0x1EF0BC20)
#define CINEMACHINE_TARGETPOSITIONCACHE_SET_USECACHE_OFFSET UNITYSDK_OFFSET(0x1EF0B760)
#define CINEMACHINE_TARGETPOSITIONCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF0C620)

namespace Cinemachine
{
	inline static constexpr unsigned int TargetPositionCache_TypeDefinitionIndex = 38549;

	class TargetPositionCache : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Cinemachine::TargetPositionCache_CacheEntry*>** StaticGet_m_Cache()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Transform*, ::Cinemachine::TargetPositionCache_CacheEntry*>**)Il2CppClass::FromTypeDefinitionIndex(TargetPositionCache_TypeDefinitionIndex)->GetStaticField(0xE40);
		}
		static ::Cinemachine::TargetPositionCache_TimeRange* StaticGet_m_CacheTimeRange()
		{
			return (::Cinemachine::TargetPositionCache_TimeRange*)Il2CppClass::FromTypeDefinitionIndex(TargetPositionCache_TypeDefinitionIndex)->GetStaticField(0x7A0);
		}
		static ::System::Boolean* StaticGet__UseCache_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TargetPositionCache_TypeDefinitionIndex)->GetStaticField(0x7A8);
		}
		static ::System::Boolean* StaticGet__IsCameraCut_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TargetPositionCache_TypeDefinitionIndex)->GetStaticField(0x7A9);
		}
		static ::System::Single* StaticGet__CurrentTime_k__BackingField()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(TargetPositionCache_TypeDefinitionIndex)->GetStaticField(0x7AC);
		}
		static ::Cinemachine::TargetPositionCache_Mode* StaticGet_m_CacheMode()
		{
			return (::Cinemachine::TargetPositionCache_Mode*)Il2CppClass::FromTypeDefinitionIndex(TargetPositionCache_TypeDefinitionIndex)->GetStaticField(0x7B0);
		}
		static ::System::Int32* StaticGet__CurrentFrame_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(TargetPositionCache_TypeDefinitionIndex)->GetStaticField(0x7B4);
		}
		// static const ::System::Single CacheStepSize; // 0x0
		// static const ::System::Single kWraparoundSlush; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_UseCache()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_USECACHE_OFFSET))();
		}

		static ::System::Void set_UseCache(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_SET_USECACHE_OFFSET))(a1);
		}

		static ::Cinemachine::TargetPositionCache_Mode get_CacheMode()
		{
			return ((::Cinemachine::TargetPositionCache_Mode(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_CACHEMODE_OFFSET))();
		}

		static ::System::Void set_CacheMode(::Cinemachine::TargetPositionCache_Mode a1)
		{
			return ((::System::Void(*)(::Cinemachine::TargetPositionCache_Mode))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_SET_CACHEMODE_OFFSET))(a1);
		}

		static ::System::Boolean get_IsRecording()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_ISRECORDING_OFFSET))();
		}

		static ::System::Boolean get_CurrentPlaybackTimeValid()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_CURRENTPLAYBACKTIMEVALID_OFFSET))();
		}

		static ::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_ISEMPTY_OFFSET))();
		}

		static ::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_CURRENTTIME_OFFSET))();
		}

		static ::System::Void set_CurrentTime(::System::Single a1)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_SET_CURRENTTIME_OFFSET))(a1);
		}

		static ::System::Int32 get_CurrentFrame()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_CURRENTFRAME_OFFSET))();
		}

		static ::System::Void set_CurrentFrame(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_SET_CURRENTFRAME_OFFSET))(a1);
		}

		static ::System::Boolean get_IsCameraCut()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_ISCAMERACUT_OFFSET))();
		}

		static ::System::Void set_IsCameraCut(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_SET_ISCAMERACUT_OFFSET))(a1);
		}

		static ::Cinemachine::TargetPositionCache_TimeRange get_CacheTimeRange()
		{
			return ((::Cinemachine::TargetPositionCache_TimeRange(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_CACHETIMERANGE_OFFSET))();
		}

		static ::System::Boolean get_HasHurrentTime()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GET_HASHURRENTTIME_OFFSET))();
		}

		static ::System::Void ClearCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CLEARCACHE_OFFSET))();
		}

		static ::System::Void CreatePlaybackCurves()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_CREATEPLAYBACKCURVES_OFFSET))();
		}

		static ::UnityEngine::Vector3 GetTargetPosition(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GETTARGETPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion GetTargetRotation(::UnityEngine::Transform* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_TARGETPOSITIONCACHE_GETTARGETROTATION_OFFSET))(a1);
		}
	};
}
