#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BezierPointData.h"
#include "unitysdk/RPG/Client/Effect_GPUCrowdAnimation_PathAxia.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_B7321E41244C00FB;
namespace RPG::Client { class BezierCurve; }
namespace RPG::Client { class CrowdUnit; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }

#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x150ECC80)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GETMESHLIST_OFFSET UNITYSDK_OFFSET(0x150ED080)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GETMPBLIST_OFFSET UNITYSDK_OFFSET(0x150ED0E0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GETWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x150ED140)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x150ED2C0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_CURVECONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x150ED2A0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_CURVEPOINTS_OFFSET UNITYSDK_OFFSET(0x150ED240)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_HASBEBATCHED_OFFSET UNITYSDK_OFFSET(0x150ED1A0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_INSTANCEINIT_OFFSET UNITYSDK_OFFSET(0x150ED1C0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_PROXYNODE_OFFSET UNITYSDK_OFFSET(0x150ED220)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_TOWARDVECTOR_OFFSET UNITYSDK_OFFSET(0x150ED260)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_LATETICK_OFFSET UNITYSDK_OFFSET(0x150ECFD0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x150ECD60)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x150ECF40)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x150ECEB0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONINVISIBLE_OFFSET UNITYSDK_OFFSET(0x150ECE50)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONVISIBLE_OFFSET UNITYSDK_OFFSET(0x150ECDF0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_CURVECONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x150ED2B0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_CURVEPOINTS_OFFSET UNITYSDK_OFFSET(0x150ED250)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_HASBEBATCHED_OFFSET UNITYSDK_OFFSET(0x150ED1B0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_INSTANCEINIT_OFFSET UNITYSDK_OFFSET(0x150ED1F0)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_PROXYNODE_OFFSET UNITYSDK_OFFSET(0x150ED230)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_TOWARDVECTOR_OFFSET UNITYSDK_OFFSET(0x150ED280)
#define RPG_CLIENT_EFFECT_GPUCROWDANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x150ED2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_GPUCrowdAnimation_TypeDefinitionIndex = 67321;

	class Effect_GPUCrowdAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CrowdGoGroups; // 0x18
		::UnityEngine::Material* CrowdMaterial; // 0x20
		::System::Boolean NeedUpdateWorldMatrices; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::CrowdUnit*>* CrowdList; // 0x30
		::System::Single AnimationTime; // 0x38
		::System::Boolean UsePath; // 0x3C
		::RPG::Client::Effect_GPUCrowdAnimation_PathAxia TowardAxia; // 0x40
		::UnityEngine::Vector3 UpAxia; // 0x44
		::System::Boolean Field_5_8; // 0x50
		::System::Single PathValue; // 0x54
		::System::Int32 CurveSampleNum; // 0x58
		::RPG::Client::BezierCurve* Curve; // 0x60
		::UnityEngine::GameObject* _ProxyNode; // 0x68
		::Il2CppArray<::UnityEngine::Vector3>* _CurvePoints; // 0x70
		::UnityEngine::Vector3 _TowardVector; // 0x78
		::UnityEngine::Vector3 _UpVector; // 0x84
		::Il2CppArray<::RPG::Client::BezierPointData>* _CurveControlPoints; // 0x90
		::Class_2_B7321E41244C00FB* Field_5_17; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONVISIBLE_OFFSET))(this);
		}

		::System::Void OnInVisible()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONINVISIBLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_LATETICK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* GetMeshList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Mesh*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GETMESHLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* GetMPBList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GETMPBLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>* GetWorldMatrix()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GETWORLDMATRIX_OFFSET))(this);
		}

		::System::Boolean get_HasBeBatched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_HASBEBATCHED_OFFSET))(this);
		}

		::System::Void set_HasBeBatched(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_HASBEBATCHED_OFFSET))(this, a1);
		}

		::System::Boolean get_InstanceInit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_INSTANCEINIT_OFFSET))(this);
		}

		::System::Void set_InstanceInit(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_INSTANCEINIT_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_ProxyNode()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_PROXYNODE_OFFSET))(this);
		}

		::System::Void set_ProxyNode(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_PROXYNODE_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_CurvePoints()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_CURVEPOINTS_OFFSET))(this);
		}

		::System::Void set_CurvePoints(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_CURVEPOINTS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_TowardVector()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_TOWARDVECTOR_OFFSET))(this);
		}

		::System::Void set_TowardVector(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_TOWARDVECTOR_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::Client::BezierPointData>* get_CurveControlPoints()
		{
			return ((::Il2CppArray<::RPG::Client::BezierPointData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_CURVECONTROLPOINTS_OFFSET))(this);
		}

		::System::Void set_CurveControlPoints(::Il2CppArray<::RPG::Client::BezierPointData>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::BezierPointData>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_SET_CURVECONTROLPOINTS_OFFSET))(this, a1);
		}

		::Class_2_B7321E41244C00FB* get_Behavior()
		{
			return ((::Class_2_B7321E41244C00FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_GPUCROWDANIMATION_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
