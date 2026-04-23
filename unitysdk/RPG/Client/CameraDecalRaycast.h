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

#define RPG_CLIENT_CAMERADECALRAYCAST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F1AB80)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETDEPTHSAMPLE_OFFSET UNITYSDK_OFFSET(0x9F1D510)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETHITGAMEOBJECTARRAYCOPY_OFFSET UNITYSDK_OFFSET(0x9F1CB00)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETREFPOINTS_OFFSET UNITYSDK_OFFSET(0x9F1CBF0)
#define RPG_CLIENT_CAMERADECALRAYCAST_GETSAMPLEUVS_OFFSET UNITYSDK_OFFSET(0x9F1CC30)
#define RPG_CLIENT_CAMERADECALRAYCAST_RESET_OFFSET UNITYSDK_OFFSET(0x9F1A980)
#define RPG_CLIENT_CAMERADECALRAYCAST_TRYGETDECALPOSANDDIR_OFFSET UNITYSDK_OFFSET(0x9F1AC30)
#define RPG_CLIENT_CAMERADECALRAYCAST__CALDEPTHVARSUM_OFFSET UNITYSDK_OFFSET(0x9F1B8F0)
#define RPG_CLIENT_CAMERADECALRAYCAST__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F1D910)
#define RPG_CLIENT_CAMERADECALRAYCAST__CTOR_OFFSET UNITYSDK_OFFSET(0x9F1D8C0)
#define RPG_CLIENT_CAMERADECALRAYCAST__GETEVGCENTERPOS_OFFSET UNITYSDK_OFFSET(0x9F1D550)
#define RPG_CLIENT_CAMERADECALRAYCAST__GETEVGDECALFORWARD_OFFSET UNITYSDK_OFFSET(0x9F1C8D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraDecalRaycast_TypeDefinitionIndex = 58103;

	class CameraDecalRaycast : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_DECAL_CAST_RAY_SAMPLE_SPLIT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraDecalRaycast_TypeDefinitionIndex)->GetStaticField(0xF560);
		}
		static ::System::Int32* StaticGet_DECAL_CENTER_DEPTH_SAMPLE_COUNT()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CameraDecalRaycast_TypeDefinitionIndex)->GetStaticField(0xF564);
		}
		::UnityEngine::Transform* _CameraTargetTrans; // 0x10
		::Il2CppArray<::UnityEngine::Vector3>* _RefPoints; // 0x18
		::Il2CppArray<::UnityEngine::Vector3>* _HitPoints; // 0x20
		::Class_1_977C244C3A57E250* _DepthSampleModule; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* _HitNormals; // 0x30
		::UnityEngine::Camera* _TargetCamera; // 0x38
		::UnityEngine::Collider* HitCollider; // 0x40
		::Il2CppArray<::System::Single>* _DepthVars; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _HitGameObjectList; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* _SampleUVs; // 0x58
		::Il2CppArray<::UnityEngine::Ray>* _DecalRayArray; // 0x60
		::System::Single MaxRaycastLength; // 0x68
		::System::Single _Sin45; // 0x6C
		::UnityEngine::RaycastHit _CenterHit; // 0x70
		::System::Single DecalWidth; // 0xA0
		::UnityEngine::Vector3 DecalRight; // 0xA4
		::RPG::Client::CameraDecalRaycast_DecalResultState ResultState; // 0xB0
		::UnityEngine::Vector3 DecalCenterPos; // 0xB4
		::System::Single MaxDepthTestVariance; // 0xC0
		::System::Int32 _DecalCastRayCount; // 0xC4
		::System::Single MaxDepthVariance; // 0xC8
		::System::Boolean CanRayCast; // 0xCC
		::UnityEngine::Vector3 DecalForward; // 0xD0
		::System::Single DepthBufferSampleRadiusRatio; // 0xDC
		::System::Single DecalHeight; // 0xE0
		::System::Single PI4; // 0xE4

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
