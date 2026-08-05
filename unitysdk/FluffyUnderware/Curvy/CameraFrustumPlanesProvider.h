#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T> class Lazy_1; }
namespace UnityEngine { class Camera; }

#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER_GETFRUSTUMPLANES_OFFSET UNITYSDK_OFFSET(0x1F7A07F0)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1F7A0770)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER_ISCACHEOUTDATED_OFFSET UNITYSDK_OFFSET(0x1F7A0EA0)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7A1000)
#define FLUFFYUNDERWARE_CURVY_CAMERAFRUSTUMPLANESPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7A0F90)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CameraFrustumPlanesProvider_TypeDefinitionIndex = 39493;

	class CameraFrustumPlanesProvider : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_lockObject()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraFrustumPlanesProvider_TypeDefinitionIndex)->GetStaticField(0x2AE20);
		}
		static ::System::Lazy_1<::FluffyUnderware::Curvy::CameraFrustumPlanesProvider*>** StaticGet_instance()
		{
			return (::System::Lazy_1<::FluffyUnderware::Curvy::CameraFrustumPlanesProvider*>**)Il2CppClass::FromTypeDefinitionIndex(CameraFrustumPlanesProvider_TypeDefinitionIndex)->GetStaticField(0x2AE28);
		}
		::Il2CppArray<::UnityEngine::Plane>* cachedPlanes; // 0x10
		::UnityEngine::Vector3 cachedForward; // 0x18
		::System::Int32 cachedPixelWidth; // 0x24
		::System::Int32 cachedPixelHeight; // 0x28
		::UnityEngine::Vector3 cachedPosition; // 0x2C
		::System::Single cachedFov; // 0x38

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
