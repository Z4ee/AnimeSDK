#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Spine { class Attachment; }
namespace Spine { class Bone; }
namespace Spine { class MeshAttachment; }
namespace Spine { class PointAttachment; }
namespace Spine { class RegionAttachment; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { class VertexAttachment; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLORTINTBLACK_OFFSET UNITYSDK_OFFSET(0x1E64B8B0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1E64B7F0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_2_OFFSET UNITYSDK_OFFSET(0x1E64B820)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_3_OFFSET UNITYSDK_OFFSET(0x1E64B870)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1E64B7B0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1E64BC90)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_OFFSET UNITYSDK_OFFSET(0x1E64BE50)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1E64BEC0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALVERTICES_OFFSET UNITYSDK_OFFSET(0x1E64C260)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1E64C0B0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x1E64BBB0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x1E63A9C0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1E64BCF0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET UNITYSDK_OFFSET(0x1E64BCC0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1E64BDD0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_2_OFFSET UNITYSDK_OFFSET(0x1E64C870)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_3_OFFSET UNITYSDK_OFFSET(0x1E64C940)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1E64BD50)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1E64BF00)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x1E64C660)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1E64B930)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_2_OFFSET UNITYSDK_OFFSET(0x1E64B9A0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_3_OFFSET UNITYSDK_OFFSET(0x1E64B9E0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_4_OFFSET UNITYSDK_OFFSET(0x1E6370C0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_5_OFFSET UNITYSDK_OFFSET(0x1E64BA50)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_6_OFFSET UNITYSDK_OFFSET(0x1E64BAC0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_7_OFFSET UNITYSDK_OFFSET(0x1E64BB10)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1E64B8F0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1E64BC60)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1E64BC30)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1E64BB80)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETPOSITIONSKELETONSPACE_OFFSET UNITYSDK_OFFSET(0x1E64C010)
#define SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1E64BF80)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonExtensions_TypeDefinitionIndex = 43912;

	class SkeletonExtensions : public ::System::Object
	{
	public:
		// static const ::System::Single ByteToFloat; // 0x0

		static ::UnityEngine::Color GetColor(::Spine::Skeleton* a1)
		{
			return ((::UnityEngine::Color(*)(::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET))(a1);
		}

		static ::UnityEngine::Color GetColor_1(::Spine::RegionAttachment* a1)
		{
			return ((::UnityEngine::Color(*)(::Spine::RegionAttachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_1_OFFSET))(a1);
		}

		static ::UnityEngine::Color GetColor_2(::Spine::MeshAttachment* a1)
		{
			return ((::UnityEngine::Color(*)(::Spine::MeshAttachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_2_OFFSET))(a1);
		}

		static ::UnityEngine::Color GetColor_3(::Spine::Slot* a1)
		{
			return ((::UnityEngine::Color(*)(::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_3_OFFSET))(a1);
		}

		static ::UnityEngine::Color GetColorTintBlack(::Spine::Slot* a1)
		{
			return ((::UnityEngine::Color(*)(::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLORTINTBLACK_OFFSET))(a1);
		}

		static ::System::Void SetColor(::Spine::Skeleton* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(a1, a2);
		}

		static ::System::Void SetColor_1(::Spine::Skeleton* a1, ::UnityEngine::Color32 a2)
		{
			return ((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_1_OFFSET))(a1, a2);
		}

		static ::System::Void SetColor_2(::Spine::Slot* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::Spine::Slot*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_2_OFFSET))(a1, a2);
		}

		static ::System::Void SetColor_3(::Spine::Slot* a1, ::UnityEngine::Color32 a2)
		{
			return ((::System::Void(*)(::Spine::Slot*, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_3_OFFSET))(a1, a2);
		}

		static ::System::Void SetColor_4(::Spine::RegionAttachment* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_4_OFFSET))(a1, a2);
		}

		static ::System::Void SetColor_5(::Spine::RegionAttachment* a1, ::UnityEngine::Color32 a2)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_5_OFFSET))(a1, a2);
		}

		static ::System::Void SetColor_6(::Spine::MeshAttachment* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::Spine::MeshAttachment*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_6_OFFSET))(a1, a2);
		}

		static ::System::Void SetColor_7(::Spine::MeshAttachment* a1, ::UnityEngine::Color32 a2)
		{
			return ((::System::Void(*)(::Spine::MeshAttachment*, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_7_OFFSET))(a1, a2);
		}

		static ::System::Void SetLocalScale(::Spine::Skeleton* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALSCALE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix4x4(::Spine::Bone* a1)
		{
			return ((::UnityEngine::Matrix4x4(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_OFFSET))(a1);
		}

		static ::System::Void SetLocalPosition(::Spine::Bone* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET))(a1, a2);
		}

		static ::System::Void SetLocalPosition_1(::Spine::Bone* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 GetLocalPosition(::Spine::Bone* a1)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 GetSkeletonSpacePosition(::Spine::Bone* a1)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 GetSkeletonSpacePosition_1(::Spine::Bone* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_1_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetWorldPosition(::Spine::Bone* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::Bone*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_1(::Spine::Bone* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::Bone*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_1_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Quaternion GetQuaternion(::Spine::Bone* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_OFFSET))(a1);
		}

		static ::UnityEngine::Quaternion GetLocalQuaternion(::Spine::Bone* a1)
		{
			return ((::UnityEngine::Quaternion(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 GetLocalScale(::Spine::Skeleton* a1)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALSCALE_OFFSET))(a1);
		}

		static ::System::Void GetWorldToLocalMatrix(::Spine::Bone* a1, ::System::Single& a2, ::System::Single& a3, ::System::Single& a4, ::System::Single& a5)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector2 WorldToLocal(::Spine::Bone* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector2 SetPositionSkeletonSpace(::Spine::Bone* a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETPOSITIONSKELETONSPACE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Material* GetMaterial(::Spine::Attachment* a1)
		{
			return ((::UnityEngine::Material*(*)(::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETMATERIAL_OFFSET))(a1);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetLocalVertices(::Spine::VertexAttachment* a1, ::Spine::Slot* a2, ::Il2CppArray<::UnityEngine::Vector2>* a3)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Spine::VertexAttachment*, ::Spine::Slot*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALVERTICES_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetWorldVertices(::Spine::VertexAttachment* a1, ::Spine::Slot* a2, ::Il2CppArray<::UnityEngine::Vector2>* a3)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Spine::VertexAttachment*, ::Spine::Slot*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDVERTICES_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_2(::Spine::PointAttachment* a1, ::Spine::Slot* a2, ::UnityEngine::Transform* a3)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::PointAttachment*, ::Spine::Slot*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_2_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_3(::Spine::PointAttachment* a1, ::Spine::Bone* a2, ::UnityEngine::Transform* a3)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::PointAttachment*, ::Spine::Bone*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_3_OFFSET))(a1, a2, a3);
		}
	};
}
