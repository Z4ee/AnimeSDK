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

#define RPG_EMBREE_EMBREEWRAPPER_ADDMESH_OFFSET UNITYSDK_OFFSET(0x85B5340)
#define RPG_EMBREE_EMBREEWRAPPER_CLEANUP_OFFSET UNITYSDK_OFFSET(0x85B43D0)
#define RPG_EMBREE_EMBREEWRAPPER_COMMITSCENE_OFFSET UNITYSDK_OFFSET(0x85B5EC0)
#define RPG_EMBREE_EMBREEWRAPPER_GET_SCENE_OFFSET UNITYSDK_OFFSET(0x85B7530)
#define RPG_EMBREE_EMBREEWRAPPER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x85B4C30)
#define RPG_EMBREE_EMBREEWRAPPER_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x85B4160)
#define RPG_EMBREE_EMBREEWRAPPER_RAYCAST_OFFSET UNITYSDK_OFFSET(0x85B7CF0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCATTACHGEOMETRY_OFFSET UNITYSDK_OFFSET(0x85B7970)
#define RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITGEOMETRY_OFFSET UNITYSDK_OFFSET(0x85B7AC0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITSCENE_OFFSET UNITYSDK_OFFSET(0x85B77E0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCGETDEVICEERROR_OFFSET UNITYSDK_OFFSET(0x85B7660)
#define RPG_EMBREE_EMBREEWRAPPER_RTCGETGEOMETRYBUFFERDATA_OFFSET UNITYSDK_OFFSET(0x85B7B40)
#define RPG_EMBREE_EMBREEWRAPPER_RTCINTERSECT1_OFFSET UNITYSDK_OFFSET(0x85B7BD0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCNEWDEVICE_OFFSET UNITYSDK_OFFSET(0x85B7540)
#define RPG_EMBREE_EMBREEWRAPPER_RTCNEWGEOMETRY_OFFSET UNITYSDK_OFFSET(0x85B7860)
#define RPG_EMBREE_EMBREEWRAPPER_RTCNEWSCENE_OFFSET UNITYSDK_OFFSET(0x85B76E0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCOCCLUDED1_OFFSET UNITYSDK_OFFSET(0x85B7C60)
#define RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEDEVICE_OFFSET UNITYSDK_OFFSET(0x85B75E0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEGEOMETRY_OFFSET UNITYSDK_OFFSET(0x85B78F0)
#define RPG_EMBREE_EMBREEWRAPPER_RTCRELEASESCENE_OFFSET UNITYSDK_OFFSET(0x85B7760)
#define RPG_EMBREE_EMBREEWRAPPER_RTCSETNEWGEOMETRYBUFFER_OFFSET UNITYSDK_OFFSET(0x85B7A00)
#define RPG_EMBREE_EMBREEWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x85B4BD0)

namespace RPG::Embree
{
	inline static constexpr unsigned int EmbreeWrapper_TypeDefinitionIndex = 37951;

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

		static ::System::IntPtr rtcNewDevice(::System::String* config)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCNEWDEVICE_OFFSET))(config);
		}

		static ::System::Void rtcReleaseDevice(::System::IntPtr device)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEDEVICE_OFFSET))(device);
		}

		static ::System::Int32 rtcGetDeviceError(::System::IntPtr device)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCGETDEVICEERROR_OFFSET))(device);
		}

		static ::System::IntPtr rtcNewScene(::System::IntPtr device)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCNEWSCENE_OFFSET))(device);
		}

		static ::System::Void rtcReleaseScene(::System::IntPtr scene)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCRELEASESCENE_OFFSET))(scene);
		}

		static ::System::Void rtcCommitScene(::System::IntPtr scene)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITSCENE_OFFSET))(scene);
		}

		static ::System::IntPtr rtcNewGeometry(::System::IntPtr device, ::System::Int32 type)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCNEWGEOMETRY_OFFSET))(device, type);
		}

		static ::System::Void rtcReleaseGeometry(::System::IntPtr geometry)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCRELEASEGEOMETRY_OFFSET))(geometry);
		}

		static ::System::UInt32 rtcAttachGeometry(::System::IntPtr scene, ::System::IntPtr geometry)
		{
			return ((::System::UInt32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCATTACHGEOMETRY_OFFSET))(scene, geometry);
		}

		static ::System::IntPtr rtcSetNewGeometryBuffer(::System::IntPtr geometry, ::System::Int32 bufferType, ::System::UInt32 slot, ::System::Int32 format, ::System::UInt32 byteStride, ::System::UInt32 itemCount)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::UInt32, ::System::Int32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCSETNEWGEOMETRYBUFFER_OFFSET))(geometry, bufferType, slot, format, byteStride, itemCount);
		}

		static ::System::Void rtcCommitGeometry(::System::IntPtr geometry)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCCOMMITGEOMETRY_OFFSET))(geometry);
		}

		static ::System::IntPtr rtcGetGeometryBufferData(::System::IntPtr geometry, ::System::Int32 type, ::System::UInt32 slot)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCGETGEOMETRYBUFFERDATA_OFFSET))(geometry, type, slot);
		}

		static ::System::Void rtcIntersect1(::System::IntPtr scene, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext& context, ::RPG::Embree::EmbreeWrapper_RTCRayHit& rayhit)
		{
			return ((::System::Void(*)(::System::IntPtr, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext&, ::RPG::Embree::EmbreeWrapper_RTCRayHit&))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCINTERSECT1_OFFSET))(scene, context, rayhit);
		}

		static ::System::Void rtcOccluded1(::System::IntPtr scene, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext& context, ::RPG::Embree::EmbreeWrapper_RTCRay& ray)
		{
			return ((::System::Void(*)(::System::IntPtr, ::RPG::Embree::EmbreeWrapper_RTCIntersectContext&, ::RPG::Embree::EmbreeWrapper_RTCRay&))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RTCOCCLUDED1_OFFSET))(scene, context, ray);
		}

		::System::Boolean Initialize(::System::String* config)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_INITIALIZE_OFFSET))(this, config);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_CLEANUP_OFFSET))(this);
		}

		::System::UInt32 AddMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 transform)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_ADDMESH_OFFSET))(this, mesh, transform);
		}

		::System::Void CommitScene()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_COMMITSCENE_OFFSET))(this);
		}

		::System::Boolean Raycast(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo& hitInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::RPG::Embree::EmbreeWrapper_RaycastHitInfo&))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_RAYCAST_OFFSET))(this, origin, direction, maxDistance, hitInfo);
		}

		::System::Boolean IsOccluded(::UnityEngine::Vector3 origin, ::UnityEngine::Vector3 direction, ::System::Single maxDistance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_EMBREE_EMBREEWRAPPER_ISOCCLUDED_OFFSET))(this, origin, direction, maxDistance);
		}
	};
}
