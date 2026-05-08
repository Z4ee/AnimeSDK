#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Lazy_1; }
namespace UnityEngine { class Camera; }

#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER_GETFRUSTUMPLANES_OFFSET UNITYSDK_OFFSET(0x1C0B4640)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C0B45C0)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER_ISCACHEOUTDATED_OFFSET UNITYSDK_OFFSET(0x1C0B4D20)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0B4E80)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B4E10)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CameraFrustumPlanesProvider_TypeDefinitionIndex = 37176;

	class CameraFrustumPlanesProvider : public ::System::Object
	{
	public:
		static ::System::Lazy_1<::FluffyUnderware::Curvy::CameraFrustumPlanesProvider*>** StaticGet_instance()
		{
			return (::System::Lazy_1<::FluffyUnderware::Curvy::CameraFrustumPlanesProvider*>**)Il2CppClass::FromTypeDefinitionIndex(CameraFrustumPlanesProvider_TypeDefinitionIndex)->GetStaticField(0x27880);
		}
		static ::System::Object** StaticGet_lockObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraFrustumPlanesProvider_TypeDefinitionIndex)->GetStaticField(0x27888);
		}
		::Il2CppArray<::UnityEngine::Plane>* cachedPlanes; // 0x10
		::UnityEngine::Vector3 cachedPosition; // 0x18
		::System::Single cachedFov; // 0x24
		::System::Int32 cachedPixelWidth; // 0x28
		::UnityEngine::Vector3 cachedForward; // 0x2C
		::System::Int32 cachedPixelHeight; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER__CCTOR_OFFSET))();
		}

		static ::FluffyUnderware::Curvy::CameraFrustumPlanesProvider* get_Instance()
		{
			return ((::FluffyUnderware::Curvy::CameraFrustumPlanesProvider*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER_GET_INSTANCE_OFFSET))();
		}

		::Il2CppArray<::UnityEngine::Plane>* GetFrustumPlanes(::UnityEngine::Camera* camera)
		{
			return ((::Il2CppArray<::UnityEngine::Plane>*(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER_GETFRUSTUMPLANES_OFFSET))(this, camera);
		}

		::System::Boolean IsCacheOutdated(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraZDirection, ::System::Int32 cameraPixelWidth, ::System::Int32 cameraPixelHeight, ::System::Single cameraFieldOfView)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER_ISCACHEOUTDATED_OFFSET))(this, cameraPosition, cameraZDirection, cameraPixelWidth, cameraPixelHeight, cameraFieldOfView);
		}
	};
}
