#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class MeshFilter; }

#define MOLEMOLE_MONOTUBERENDERER_AWAKE_OFFSET UNITYSDK_OFFSET(0x12FA5730)
#define MOLEMOLE_MONOTUBERENDERER_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x12FA5440)
#define MOLEMOLE_MONOTUBERENDERER_GETLENGTHATPOINT_OFFSET UNITYSDK_OFFSET(0x12FA56B0)
#define MOLEMOLE_MONOTUBERENDERER_GETROTATIONATPOINT_OFFSET UNITYSDK_OFFSET(0x12FA5610)
#define MOLEMOLE_MONOTUBERENDERER_GET_CALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x12FA5240)
#define MOLEMOLE_MONOTUBERENDERER_GET_EDGECOUNT_OFFSET UNITYSDK_OFFSET(0x12FA5170)
#define MOLEMOLE_MONOTUBERENDERER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x12FA5420)
#define MOLEMOLE_MONOTUBERENDERER_GET_MESH_OFFSET UNITYSDK_OFFSET(0x12FA5430)
#define MOLEMOLE_MONOTUBERENDERER_GET_POINTS_OFFSET UNITYSDK_OFFSET(0x12FA4E00)
#define MOLEMOLE_MONOTUBERENDERER_GET_RADIUSES_OFFSET UNITYSDK_OFFSET(0x12FA4FA0)
#define MOLEMOLE_MONOTUBERENDERER_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x12FA5050)
#define MOLEMOLE_MONOTUBERENDERER_GET_UVANTISTRETCHING_OFFSET UNITYSDK_OFFSET(0x12FA53B0)
#define MOLEMOLE_MONOTUBERENDERER_GET_UVRECT_OFFSET UNITYSDK_OFFSET(0x12FA5320)
#define MOLEMOLE_MONOTUBERENDERER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x12FA5490)
#define MOLEMOLE_MONOTUBERENDERER_MARKDYNAMIC_OFFSET UNITYSDK_OFFSET(0x12FA55A0)
#define MOLEMOLE_MONOTUBERENDERER_METHOD_5_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x12FA5E70)
#define MOLEMOLE_MONOTUBERENDERER_METHOD_5_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x12FA7A60)
#define MOLEMOLE_MONOTUBERENDERER_METHOD_5_A40475C44AA8CEAB_OFFSET UNITYSDK_OFFSET(0x12FA8A10)
#define MOLEMOLE_MONOTUBERENDERER_METHOD_5_B2C0ADBFEA309440_OFFSET UNITYSDK_OFFSET(0x12FA8660)
#define MOLEMOLE_MONOTUBERENDERER_METHOD_5_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0x12FA7570)
#define MOLEMOLE_MONOTUBERENDERER_METHOD_5_CD9F3CEFB366C27A_OFFSET UNITYSDK_OFFSET(0x12FA5FF0)
#define MOLEMOLE_MONOTUBERENDERER_METHOD_5_D308836DB54415C3_OFFSET UNITYSDK_OFFSET(0x12FA7D70)
#define MOLEMOLE_MONOTUBERENDERER_METHOD_5_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x12FA9060)
#define MOLEMOLE_MONOTUBERENDERER_METHOD_5_DE5BCBAF4D29B552_OFFSET UNITYSDK_OFFSET(0x12FA4F50)
#define MOLEMOLE_MONOTUBERENDERER_SET_CALCULATETANGENTS_OFFSET UNITYSDK_OFFSET(0x12FA5250)
#define MOLEMOLE_MONOTUBERENDERER_SET_EDGECOUNT_OFFSET UNITYSDK_OFFSET(0x12FA5180)
#define MOLEMOLE_MONOTUBERENDERER_SET_POINTS_OFFSET UNITYSDK_OFFSET(0x12FA4E10)
#define MOLEMOLE_MONOTUBERENDERER_SET_RADIUSES_OFFSET UNITYSDK_OFFSET(0x12FA4FB0)
#define MOLEMOLE_MONOTUBERENDERER_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x12FA5060)
#define MOLEMOLE_MONOTUBERENDERER_SET_UVANTISTRETCHING_OFFSET UNITYSDK_OFFSET(0x12FA53C0)
#define MOLEMOLE_MONOTUBERENDERER_SET_UVRECT_OFFSET UNITYSDK_OFFSET(0x12FA5330)
#define MOLEMOLE_MONOTUBERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x12FA8F90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoTubeRenderer_TypeDefinitionIndex = 82265;

	class MonoTubeRenderer : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Single Field_5_34; // 0x0
		// static const ::System::Int32 Field_5_35 = 0xFDE8; // 0x0
		// static const ::System::String* Field_5_36; // 0x0
		::Il2CppArray<::UnityEngine::Vector3>* _points; // 0x18
		::System::Single _radius; // 0x20
		::Il2CppArray<::System::Single>* _radiuses; // 0x28
		::System::Int32 _edgeCount; // 0x30
		::System::Boolean _calculateTangents; // 0x34
		::UnityEngine::Rect _uvRect; // 0x38
		::System::Boolean _uvAntiStretching; // 0x48
		::UnityEngine::Mesh* Field_5_7; // 0x50
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_8; // 0x58
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_9; // 0x60
		::Il2CppArray<::System::Int32>* Field_5_10; // 0x68
		::Il2CppArray<::System::Int32>* Field_5_11; // 0x70
		::Il2CppArray<::UnityEngine::Vector2>* Field_5_12; // 0x78
		::Il2CppArray<::UnityEngine::Vector4>* Field_5_13; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_14; // 0x88
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_15; // 0x90
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_16; // 0x98
		::Il2CppArray<::UnityEngine::Quaternion>* Field_5_17; // 0xA0
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_18; // 0xA8
		::Il2CppArray<::System::Single>* Field_5_19; // 0xB0
		::Il2CppArray<::System::Single>* Field_5_20; // 0xB8
		::Il2CppArray<::System::Single>* Field_5_21; // 0xC0
		::UnityEngine::Vector3 Field_5_22; // 0xC8
		::Il2CppArray<::UnityEngine::Vector3>* Field_5_23; // 0xD8
		::Il2CppArray<::System::Int32>* Field_5_24; // 0xE0
		::System::Single Field_5_25; // 0xE8
		::UnityEngine::MeshFilter* Field_5_26; // 0xF0
		::System::Boolean Field_5_27; // 0xF8
		::System::Boolean Field_5_28; // 0xF9
		::System::Boolean Field_5_29; // 0xFA
		::System::Boolean Field_5_30; // 0xFB
		::System::Boolean Field_5_31; // 0xFC
		::System::Boolean Field_5_32; // 0xFD
		::System::Boolean Field_5_33; // 0xFE

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* get_points()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_points(::Il2CppArray<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_POINTS_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Single>* get_radiuses()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_RADIUSES_OFFSET))(this);
		}

		::System::Void set_radiuses(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_RADIUSES_OFFSET))(this, a1);
		}

		::System::Single get_radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Int32 get_edgeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_EDGECOUNT_OFFSET))(this);
		}

		::System::Void set_edgeCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_EDGECOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_calculateTangents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_CALCULATETANGENTS_OFFSET))(this);
		}

		::System::Void set_calculateTangents(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_CALCULATETANGENTS_OFFSET))(this, a1);
		}

		::UnityEngine::Rect get_uvRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_UVRECT_OFFSET))(this);
		}

		::System::Void set_uvRect(::UnityEngine::Rect a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_UVRECT_OFFSET))(this, a1);
		}

		::System::Boolean get_uvAntiStretching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_UVANTISTRETCHING_OFFSET))(this);
		}

		::System::Void set_uvAntiStretching(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_SET_UVANTISTRETCHING_OFFSET))(this, a1);
		}

		::System::Single get_length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_LENGTH_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GET_MESH_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void MarkDynamic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_MARKDYNAMIC_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotationAtPoint(::System::Int32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GETROTATIONATPOINT_OFFSET))(this, a1);
		}

		::System::Single GetLengthAtPoint(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_GETLENGTHATPOINT_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_AWAKE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Method_5_B2C0ADBFEA309440()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_METHOD_5_B2C0ADBFEA309440_OFFSET))(this);
		}

		::System::Void Method_5_D308836DB54415C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_METHOD_5_D308836DB54415C3_OFFSET))(this);
		}

		::System::Void Method_5_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_METHOD_5_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Void Method_5_DAEB67F34AF80609()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_METHOD_5_DAEB67F34AF80609_OFFSET))(this);
		}

		::System::Void Method_5_A40475C44AA8CEAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_METHOD_5_A40475C44AA8CEAB_OFFSET))(this);
		}

		::System::Void Method_5_C72B925A491E9859()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_METHOD_5_C72B925A491E9859_OFFSET))(this);
		}

		::System::Void Method_5_CD9F3CEFB366C27A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_METHOD_5_CD9F3CEFB366C27A_OFFSET))(this);
		}

		static ::System::Int32 Method_5_DE5BCBAF4D29B552(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_METHOD_5_DE5BCBAF4D29B552_OFFSET))(a1, a2);
		}

		::System::Void Method_5_8714CF4AE9195CA2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOTUBERENDERER_METHOD_5_8714CF4AE9195CA2_OFFSET))(this);
		}
	};
}
