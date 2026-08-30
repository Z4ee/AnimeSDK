#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeWrapperUnsafe_RaycastHitInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_CLEANUP_OFFSET UNITYSDK_OFFSET(0x19670210)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_COMMITSCENE_OFFSET UNITYSDK_OFFSET(0x1966FCB0)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1966F870)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x1966F880)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1966F890)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1966FD30)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCCOMMITSCENE_OFFSET UNITYSDK_OFFSET(0x1CD60330)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCGETDEVICEERROR_OFFSET UNITYSDK_OFFSET(0x1966F7F0)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCINTERSECT1_OFFSET UNITYSDK_OFFSET(0x1CD603B0)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCNEWDEVICE_OFFSET UNITYSDK_OFFSET(0x1CD60110)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCNEWSCENE_OFFSET UNITYSDK_OFFSET(0x1CD60230)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCRELEASEDEVICE_OFFSET UNITYSDK_OFFSET(0x1CD601B0)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCRELEASESCENE_OFFSET UNITYSDK_OFFSET(0x1CD602B0)
#define RPG_EMBREE_EMBREEWRAPPERUNSAFE__CTOR_OFFSET UNITYSDK_OFFSET(0x19670320)

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapperUnsafe_TypeDefinitionIndex = 47485;

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

		static ::System::IntPtr rtcNewDevice(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCNEWDEVICE_OFFSET))(a1);
		}

		static ::System::Void rtcReleaseDevice(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCRELEASEDEVICE_OFFSET))(a1);
		}

		static ::System::IntPtr rtcNewScene(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCNEWSCENE_OFFSET))(a1);
		}

		static ::System::Void rtcReleaseScene(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCRELEASESCENE_OFFSET))(a1);
		}

		static ::System::Void rtcCommitScene(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCCOMMITSCENE_OFFSET))(a1);
		}

		static ::System::Void rtcIntersect1(::System::IntPtr a1, ::System::Void* a2, ::System::Void* a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCINTERSECT1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 rtcGetDeviceError(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RTCGETDEVICEERROR_OFFSET))(a1);
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

		::System::Boolean Raycast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Embree::EmbreeWrapperUnsafe_RaycastHitInfo& a4, ::System::IntPtr a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Embree::EmbreeWrapperUnsafe_RaycastHitInfo&, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_RAYCAST_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPERUNSAFE_CLEANUP_OFFSET))(this);
		}
	};
}
