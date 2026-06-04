#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCIntersectContext.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCRay.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RTCRayHit.h"
#include "unitysdk/RPG/Embree/EmbreeWrapper_RaycastHitInfo.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define RPG_EMBREE_EMBREEWRAPPER_ADDMESH_OFFSET UNITYSDK_OFFSET(0xA236D80)
#define RPG_EMBREE_EMBREEWRAPPER_CLEANUP_OFFSET UNITYSDK_OFFSET(0xA238380)
#define RPG_EMBREE_EMBREEWRAPPER_COMMITSCENE_OFFSET UNITYSDK_OFFSET(0xA2378C0)
#define RPG_EMBREE_EMBREEWRAPPER_GET_SCENE_OFFSET UNITYSDK_OFFSET(0xA23A450)
#define RPG_EMBREE_EMBREEWRAPPER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA236320)
#define RPG_EMBREE_EMBREEWRAPPER_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0xA238120)
#define RPG_EMBREE_EMBREEWRAPPER_RAYCAST_OFFSET UNITYSDK_OFFSET(0xA237BA0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCATTACHGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA23A890)
#define RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA23A9E0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITSCENE_OFFSET UNITYSDK_OFFSET(0xA23A700)
#define RPG_EMBREE_EMBREEWRAPPER_RTCGETDEVICEERROR_OFFSET UNITYSDK_OFFSET(0xA23A580)
#define RPG_EMBREE_EMBREEWRAPPER_RTCGETGEOMETRYBUFFERDATA_OFFSET UNITYSDK_OFFSET(0xA23AA60)
#define RPG_EMBREE_EMBREEWRAPPER_RTCINTERSECT1_OFFSET UNITYSDK_OFFSET(0xA23AAF0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCNEWDEVICE_OFFSET UNITYSDK_OFFSET(0xA23A460)
#define RPG_EMBREE_EMBREEWRAPPER_RTCNEWGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA23A780)
#define RPG_EMBREE_EMBREEWRAPPER_RTCNEWSCENE_OFFSET UNITYSDK_OFFSET(0xA23A600)
#define RPG_EMBREE_EMBREEWRAPPER_RTCOCCLUDED1_OFFSET UNITYSDK_OFFSET(0xA23AB80)
#define RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEDEVICE_OFFSET UNITYSDK_OFFSET(0xA23A500)
#define RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEGEOMETRY_OFFSET UNITYSDK_OFFSET(0xA23A810)
#define RPG_EMBREE_EMBREEWRAPPER_RTCRELEASESCENE_OFFSET UNITYSDK_OFFSET(0xA23A680)
#define RPG_EMBREE_EMBREEWRAPPER_RTCSETNEWGEOMETRYBUFFER_OFFSET UNITYSDK_OFFSET(0xA23A920)
#define RPG_EMBREE_EMBREEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0xA2362C0)

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapper_TypeDefinitionIndex = 44370;

	class EmbreeWrapper : public ::System::Object
	{
	public:
		// static const ::System::String* EMBREE_DLL; // 0x0
		// static const ::System::Int32 RTC_MAX_INSTANCE_LEVEL_COUNT = 0x1; // 0x0
		::System::Collections::Generic::List_1<::System::IntPtr>* geometries; // 0x10
		::System::Boolean isInitialized; // 0x18
		::System::IntPtr scene; // 0x20
		::System::IntPtr device; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER__CTOR_OFFSET))(this);
		}

		::System::IntPtr get_Scene()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_GET_SCENE_OFFSET))(this);
		}

		static ::System::IntPtr rtcNewDevice(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCNEWDEVICE_OFFSET))(a1);
		}

		static ::System::Void rtcReleaseDevice(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEDEVICE_OFFSET))(a1);
		}

		static ::System::Int32 rtcGetDeviceError(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCGETDEVICEERROR_OFFSET))(a1);
		}

		static ::System::IntPtr rtcNewScene(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCNEWSCENE_OFFSET))(a1);
		}

		static ::System::Void rtcReleaseScene(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCRELEASESCENE_OFFSET))(a1);
		}

		static ::System::Void rtcCommitScene(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITSCENE_OFFSET))(a1);
		}

		static ::System::IntPtr rtcNewGeometry(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCNEWGEOMETRY_OFFSET))(a1, a2);
		}

		static ::System::Void rtcReleaseGeometry(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEGEOMETRY_OFFSET))(a1);
		}

		static ::System::UInt32 rtcAttachGeometry(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCATTACHGEOMETRY_OFFSET))(a1, a2);
		}

		static ::System::IntPtr rtcSetNewGeometryBuffer(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt32 a3, ::System::Int32 a4, ::System::UInt32 a5, ::System::UInt32 a6)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCSETNEWGEOMETRYBUFFER_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void rtcCommitGeometry(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITGEOMETRY_OFFSET))(a1);
		}

		static ::System::IntPtr rtcGetGeometryBufferData(::System::IntPtr a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCGETGEOMETRYBUFFERDATA_OFFSET))(a1, a2, a3);
		}

		static ::System::Void rtcIntersect1(::System::IntPtr a1, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext& a2, ::RPG::Embree::EmbreeWrapper_RTCRayHit& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext&, ::RPG::Embree::EmbreeWrapper_RTCRayHit&))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCINTERSECT1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void rtcOccluded1(::System::IntPtr a1, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext& a2, ::RPG::Embree::EmbreeWrapper_RTCRay& a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext&, ::RPG::Embree::EmbreeWrapper_RTCRay&))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCOCCLUDED1_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Initialize(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_INITIALIZE_OFFSET))(this, a1);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_CLEANUP_OFFSET))(this);
		}

		::System::UInt32 AddMesh(::UnityEngine::Mesh* a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_ADDMESH_OFFSET))(this, a1, a2);
		}

		::System::Void CommitScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_COMMITSCENE_OFFSET))(this);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo&))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RAYCAST_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IsOccluded(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_ISOCCLUDED_OFFSET))(this, a1, a2, a3);
		}
	};
}
