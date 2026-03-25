#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraDecalRaycast_DecalResultState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_977C244C3A57E250;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CAMERADECALRAYCAST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9256FD0)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETDEPTHSAMPLE_OFFSET UNITYSDK_OFFSET(0x92598C0)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETHITGAMEOBJECTARRAYCOPY_OFFSET UNITYSDK_OFFSET(0x9258EA0)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETREFPOINTS_OFFSET UNITYSDK_OFFSET(0x9258F90)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETSAMPLEUVS_OFFSET UNITYSDK_OFFSET(0x9258FD0)
#define RPG_CLIENT_CAMERADECALRAYCAST_RESET_OFFSET UNITYSDK_OFFSET(0x9256DD0)
#define RPG_CLIENT_CAMERADECALRAYCAST_TRYGETDECALPOSANDDIR_OFFSET UNITYSDK_OFFSET(0x9257070)
#define RPG_CLIENT_CAMERADECALRAYCAST__CALDEPTHVARSUM_OFFSET UNITYSDK_OFFSET(0x9257CF0)
#define RPG_CLIENT_CAMERADECALRAYCAST__CCTOR_OFFSET UNITYSDK_OFFSET(0x9259CB0)
#define RPG_CLIENT_CAMERADECALRAYCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x9259C70)
#define RPG_CLIENT_CAMERADECALRAYCAST__GETEVGCENTERPOS_OFFSET UNITYSDK_OFFSET(0x9259900)
#define RPG_CLIENT_CAMERADECALRAYCAST__GETEVGDECALFORWARD_OFFSET UNITYSDK_OFFSET(0x9258C70)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDecalRaycast_TypeDefinitionIndex = 51182;

	class CameraDecalRaycast : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DECAL_CENTER_DEPTH_SAMPLE_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraDecalRaycast_TypeDefinitionIndex)->GetStaticField(0x119E0);
		}
		static ::System::Int32* StaticGet_DECAL_CAST_RAY_SAMPLE_SPLIT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraDecalRaycast_TypeDefinitionIndex)->GetStaticField(0x119E4);
		}
		::Class_1_977C244C3A57E250* _DepthSampleModule; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* _SampleUVs; // 0x18
		::Il2CppArray<::UnityEngine::Ray>* _DecalRayArray; // 0x20
		::Il2CppArray<::System::Single>* _DepthVars; // 0x28
		::UnityEngine::Camera* _TargetCamera; // 0x30
		::Il2CppArray<::UnityEngine::Vector3>* _RefPoints; // 0x38
		::Il2CppArray<::UnityEngine::Vector3>* _HitPoints; // 0x40
		::UnityEngine::Collider* HitCollider; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* _HitNormals; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _HitGameObjectList; // 0x58
		::UnityEngine::Transform* _CameraTargetTrans; // 0x60
		::RPG::Client::CameraDecalRaycast_DecalResultState ResultState; // 0x68
		::System::Single MaxDepthTestVariance; // 0x6C
		::System::Single MaxDepthVariance; // 0x70
		::System::Single DecalHeight; // 0x74
		::System::Single _Sin45; // 0x78
		::UnityEngine::Vector3 DecalRight; // 0x7C
		::UnityEngine::Vector3 DecalForward; // 0x88
		::System::Single DepthBufferSampleRadiusRatio; // 0x94
		::System::Single PI4; // 0x98
		::UnityEngine::Vector3 DecalCenterPos; // 0x9C
		::UnityEngine::RaycastHit _CenterHit; // 0xA8
		::System::Single DecalWidth; // 0xD8
		::System::Single MaxRaycastLength; // 0xDC
		::System::Boolean CanRayCast; // 0xE0
		::System::Int32 _DecalCastRayCount; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__CCTOR_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_DISPOSE_OFFSET))(this);
		}

		::System::Boolean TryGetDecalPosAndDir()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_TRYGETDECALPOSANDDIR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::GameObject*>* GetHitGameObjectArrayCopy()
		{
			return ((::Il2CppArray<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_GETHITGAMEOBJECTARRAYCOPY_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetRefPoints()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_GETREFPOINTS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetSampleUVs()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_GETSAMPLEUVS_OFFSET))(this);
		}

		::Class_1_977C244C3A57E250* GetDepthSample()
		{
			return ((::Class_1_977C244C3A57E250*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST_GETDEPTHSAMPLE_OFFSET))(this);
		}

		::System::Single _CalDepthVarSum(::UnityEngine::Vector3 center, ::UnityEngine::Vector3 normal)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__CALDEPTHVARSUM_OFFSET))(this, center, normal);
		}

		::UnityEngine::Vector3 _GetEvgCenterPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__GETEVGCENTERPOS_OFFSET))(this);
		}

		::System::Void _GetEvgDecalForward(::UnityEngine::Vector3& center)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERADECALRAYCAST__GETEVGDECALFORWARD_OFFSET))(this, center);
		}
	};
}
