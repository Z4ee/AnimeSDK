#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeWrapperUnsafe_RaycastHitInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x8DEE900)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_COMMITSCENE_OFFSET UNITYSDK_OFFSET(0x8DEE880)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x8DEE440)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x8DEE450)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x8DEE460)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RAYCAST_OFFSET UNITYSDK_OFFSET(0x8DECA80)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCCOMMITSCENE_OFFSET UNITYSDK_OFFSET(0x8DEE2B0)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCGETDEVICEERROR_OFFSET UNITYSDK_OFFSET(0x8DEE3C0)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCINTERSECT1_OFFSET UNITYSDK_OFFSET(0x8DEE330)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCNEWDEVICE_OFFSET UNITYSDK_OFFSET(0x8DEE090)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCNEWSCENE_OFFSET UNITYSDK_OFFSET(0x8DEE1B0)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCRELEASEDEVICE_OFFSET UNITYSDK_OFFSET(0x8DEE130)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCRELEASESCENE_OFFSET UNITYSDK_OFFSET(0x8DEE230)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x8DECA70)

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapperUnsafe_TypeDefinitionIndex = 43837;

	class EmbreeWrapperUnsafe : public ::System::Object
	{
	public:
		// static const ::System::String* EMBREE_DLL; // 0x0
		// static const ::System::UInt32 RTC_RAY_QUERY_FLAG_NONE = 0x0; // 0x0
		// static const ::System::UInt32 RTC_RAY_QUERY_FLAG_INVOKE_ARGUMENT_FILTER = 0x2; // 0x0
		// static const ::System::UInt32 RTC_RAY_QUERY_FLAG_INCOHERENT = 0x0; // 0x0
		// static const ::System::UInt32 RTC_RAY_QUERY_FLAG_COHERENT = 0x10000; // 0x0
		// static const ::System::UInt32 RTC_FEATURE_FLAG_ALL = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 RTC_INVALID_GEOMETRY_ID = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 RTC_MAX_INSTANCE_LEVEL_COUNT = 0x1; // 0x0
		::System::IntPtr device; // 0x10
		::System::IntPtr scene; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr rtcNewDevice(::System::String* config)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCNEWDEVICE_OFFSET))(config);
		}

		static ::System::Void rtcReleaseDevice(::System::IntPtr device)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCRELEASEDEVICE_OFFSET))(device);
		}

		static ::System::IntPtr rtcNewScene(::System::IntPtr device)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCNEWSCENE_OFFSET))(device);
		}

		static ::System::Void rtcReleaseScene(::System::IntPtr scene)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCRELEASESCENE_OFFSET))(scene);
		}

		static ::System::Void rtcCommitScene(::System::IntPtr scene)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCCOMMITSCENE_OFFSET))(scene);
		}

		static ::System::Void rtcIntersect1(::System::IntPtr scene, ::System::Void* rayhit, ::System::Void* args)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCINTERSECT1_OFFSET))(scene, rayhit, args);
		}

		static ::System::Int32 rtcGetDeviceError(::System::IntPtr device)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCGETDEVICEERROR_OFFSET))(device);
		}

		::System::IntPtr get_Device()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_GET_DEVICE_OFFSET))(this);
		}

		::System::IntPtr get_Scene()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_GET_SCENE_OFFSET))(this);
		}

		::System::Boolean Initialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_INITIALIZE_OFFSET))(this);
		}

		::System::Void CommitScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_COMMITSCENE_OFFSET))(this);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::RPG::Embree::EmbreeWrapperUnsafe_RaycastHitInfo& hitInfo, ::System::IntPtr externalScene)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Embree::EmbreeWrapperUnsafe_RaycastHitInfo&, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RAYCAST_OFFSET))(this, origin, direction, maxDistance, hitInfo, externalScene);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_CLEANUP_OFFSET))(this);
		}
	};
}
