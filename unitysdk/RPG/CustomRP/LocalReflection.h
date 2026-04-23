#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/RPG/CustomRP/ReflectionMode.h"
#include "unitysdk/RPG/CustomRP/ReflectionRenderData.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_LOCALREFLECTION_GETNAMESTR_OFFSET UNITYSDK_OFFSET(0x181433E0)
#define RPG_CUSTOMRP_LOCALREFLECTION_GETRT_OFFSET UNITYSDK_OFFSET(0x18143460)
#define RPG_CUSTOMRP_LOCALREFLECTION_GET_NAMEKEY_OFFSET UNITYSDK_OFFSET(0x18142050)
#define RPG_CUSTOMRP_LOCALREFLECTION_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x18141F00)
#define RPG_CUSTOMRP_LOCALREFLECTION_GET_RENDERLIST_OFFSET UNITYSDK_OFFSET(0x18141FB0)
#define RPG_CUSTOMRP_LOCALREFLECTION_GET_USERENDERLIST_OFFSET UNITYSDK_OFFSET(0x18141F10)
#define RPG_CUSTOMRP_LOCALREFLECTION_GET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0x181420F0)
#define RPG_CUSTOMRP_LOCALREFLECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18144000)
#define RPG_CUSTOMRP_LOCALREFLECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18143FB0)
#define RPG_CUSTOMRP_LOCALREFLECTION_RPG_CUSTOMRP_IPLANEREFLECTION_UPDATEREFLECTION_OFFSET UNITYSDK_OFFSET(0x18144420)
#define RPG_CUSTOMRP_LOCALREFLECTION_SET_NAMEKEY_OFFSET UNITYSDK_OFFSET(0x181420A0)
#define RPG_CUSTOMRP_LOCALREFLECTION_SET_RENDERLIST_OFFSET UNITYSDK_OFFSET(0x18142000)
#define RPG_CUSTOMRP_LOCALREFLECTION_SET_USERENDERLIST_OFFSET UNITYSDK_OFFSET(0x18141F60)
#define RPG_CUSTOMRP_LOCALREFLECTION_SET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0x18142100)
#define RPG_CUSTOMRP_LOCALREFLECTION_START_OFFSET UNITYSDK_OFFSET(0x18143880)
#define RPG_CUSTOMRP_LOCALREFLECTION_UPDATECAMERA_OFFSET UNITYSDK_OFFSET(0x181429F0)
#define RPG_CUSTOMRP_LOCALREFLECTION_UPDATEREFLECTION_OFFSET UNITYSDK_OFFSET(0x18142130)
#define RPG_CUSTOMRP_LOCALREFLECTION__ADDANDUPDATECAMERA_OFFSET UNITYSDK_OFFSET(0x18143F60)
#define RPG_CUSTOMRP_LOCALREFLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x181443E0)
#define RPG_CUSTOMRP_LOCALREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18144320)
#define RPG_CUSTOMRP_LOCALREFLECTION__GETRT_OFFSET UNITYSDK_OFFSET(0x18143120)
#define RPG_CUSTOMRP_LOCALREFLECTION__INITREFLECTIONCAMERA_OFFSET UNITYSDK_OFFSET(0x181440A0)
#define RPG_CUSTOMRP_LOCALREFLECTION__INIT_OFFSET UNITYSDK_OFFSET(0x181438D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LocalReflection_TypeDefinitionIndex = 35025;

	class LocalReflection : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Material** StaticGet__DecalMat()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(LocalReflection_TypeDefinitionIndex)->GetStaticField(0x66F10);
		}
		static ::System::Int32* StaticGet__ReflectionMatrixID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalReflection_TypeDefinitionIndex)->GetStaticField(0x10FD0);
		}
		static ::System::Single* StaticGet__CullDist()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(LocalReflection_TypeDefinitionIndex)->GetStaticField(0x10FD4);
		}
		static ::System::Int32* StaticGet__ReflectionIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalReflection_TypeDefinitionIndex)->GetStaticField(0x10FD8);
		}
		static ::System::Int32* StaticGet__RefTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LocalReflection_TypeDefinitionIndex)->GetStaticField(0x10FDC);
		}
		::UnityEngine::Vector3 ReflectionOffset; // 0x18
		::UnityEngine::Quaternion RelfectionDir; // 0x24
		::System::Single ClipRange; // 0x34
		::System::Int32 Width; // 0x38
		::System::Int32 Height; // 0x3C
		::System::Int32 RTWidth; // 0x40
		::System::Int32 RTHeight; // 0x44
		::RPG::CustomRP::ReflectionMode Mode; // 0x48
		::UnityEngine::Mesh* ReflectionMesh; // 0x50
		::UnityEngine::Renderer* ReflectionRenderer; // 0x58
		::System::Boolean IsEnable; // 0x60
		::System::Single BlurScale; // 0x64
		::System::Single Brightness; // 0x68
		::RPG::CustomRP::Quality ScaleQuality; // 0x6C
		::UnityEngine::Vector3 Center; // 0x70
		::UnityEngine::Vector3 _LastReflectionPos; // 0x7C
		::UnityEngine::Quaternion _LastReflectionRot; // 0x88
		::UnityEngine::Matrix4x4 _LastReflectionProj; // 0x98
		::System::Int32 _LastUpdateFrame; // 0xD8
		::UnityEngine::Matrix4x4 _PlaneMatrix; // 0xDC
		::UnityEngine::Matrix4x4 _ReflectionMatrix; // 0x11C
		::UnityEngine::Camera* _Camera; // 0x160
		::UnityEngine::Transform* _CameraTrans; // 0x168
		::UnityEngine::Plane _ReflectionPlane; // 0x170
		::UnityEngine::RenderTexture* _ReflectionRT; // 0x180
		::System::Boolean _ValidForRendering; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION__CCTOR_OFFSET))();
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_UseRenderList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_GET_USERENDERLIST_OFFSET))(this);
		}

		::System::Void set_UseRenderList(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_SET_USERENDERLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* get_RenderList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_GET_RENDERLIST_OFFSET))(this);
		}

		::System::Void set_RenderList(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_SET_RENDERLIST_OFFSET))(this, value);
		}

		::System::String* get_NameKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_GET_NAMEKEY_OFFSET))(this);
		}

		::System::Void set_NameKey(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_SET_NAMEKEY_OFFSET))(this, value);
		}

		::System::Boolean get_validForRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_GET_VALIDFORRENDERING_OFFSET))(this);
		}

		::System::Void set_validForRendering(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_SET_VALIDFORRENDERING_OFFSET))(this, value);
		}

		::System::Boolean UpdateReflection(::UnityEngine::Camera* baseCamera, ::UnityEngine::Transform* baseCameraTrans, ::RPG::CustomRP::GameCameraType baseCameraType, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::Vector3& baseCameraPos, ::UnityEngine::Vector3& baseCameraForward, ::RPG::CustomRP::ReflectionRenderData& reflectionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::RPG::CustomRP::ReflectionRenderData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_UPDATEREFLECTION_OFFSET))(this, baseCamera, baseCameraTrans, baseCameraType, width, height, baseCameraPos, baseCameraForward, reflectionData);
		}

		::System::String* GetNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_GETNAMESTR_OFFSET))(this);
		}

		static ::System::Boolean UpdateCamera(::UnityEngine::Camera* baseCamera, ::UnityEngine::Transform* baseCameraTrans, ::UnityEngine::Vector3& baseCameraPos, ::UnityEngine::Vector3& baseCameraForward, ::RPG::CustomRP::ReflectionRenderData& reflectionData, ::System::Boolean cullAngle)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Transform*, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::RPG::CustomRP::ReflectionRenderData&, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_UPDATECAMERA_OFFSET))(baseCamera, baseCameraTrans, baseCameraPos, baseCameraForward, reflectionData, cullAngle);
		}

		static ::System::Void GetRT(::UnityEngine::RenderTexture*& rt, ::System::Int32 w, ::System::Int32 h, ::System::Int32 colorRT)
		{
			return ((::System::Void(*)(::UnityEngine::RenderTexture*&, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_GETRT_OFFSET))(rt, w, h, colorRT);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_ONDESTROY_OFFSET))(this);
		}

		::System::Void _AddAndUpdateCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION__ADDANDUPDATECAMERA_OFFSET))(this);
		}

		::System::Void _Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION__INIT_OFFSET))(this);
		}

		static ::System::Void _InitReflectionCamera(::RPG::CustomRP::LocalReflection* lr, ::UnityEngine::Camera*& camera, ::UnityEngine::Transform*& cameraTrans, ::System::String* namePrefix)
		{
			return ((::System::Void(*)(::RPG::CustomRP::LocalReflection*, ::UnityEngine::Camera*&, ::UnityEngine::Transform*&, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION__INITREFLECTIONCAMERA_OFFSET))(lr, camera, cameraTrans, namePrefix);
		}

		::UnityEngine::RenderTexture* _GetRT(::RPG::CustomRP::GameCameraType baseCameraType)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::RPG::CustomRP::GameCameraType))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION__GETRT_OFFSET))(this, baseCameraType);
		}

		::System::Boolean RPG_CustomRP_IPlaneReflection_UpdateReflection(::UnityEngine::Camera* baseCamera, ::UnityEngine::Transform* baseCameraTrans, ::RPG::CustomRP::GameCameraType baseCameraType, ::System::Int32 width, ::System::Int32 height, ::UnityEngine::Vector3& baseCameraPos, ::UnityEngine::Vector3& baseCameraForward, ::RPG::CustomRP::ReflectionRenderData& reflectionData)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::RPG::CustomRP::ReflectionRenderData&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_LOCALREFLECTION_RPG_CUSTOMRP_IPLANEREFLECTION_UPDATEREFLECTION_OFFSET))(this, baseCamera, baseCameraTrans, baseCameraType, width, height, baseCameraPos, baseCameraForward, reflectionData);
		}
	};
}
