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

#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLORTINTBLACK_OFFSET UNITYSDK_OFFSET(0x1C177240)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1C177180)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_2_OFFSET UNITYSDK_OFFSET(0x1C1771C0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_3_OFFSET UNITYSDK_OFFSET(0x1C177200)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1C177140)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1C177620)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_OFFSET UNITYSDK_OFFSET(0x1C1777E0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1C177850)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALVERTICES_OFFSET UNITYSDK_OFFSET(0x1C177BA0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C177A40)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_OFFSET UNITYSDK_OFFSET(0x1C177550)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_OFFSET UNITYSDK_OFFSET(0x1C161AA0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1C177680)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET UNITYSDK_OFFSET(0x1C177650)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1C177760)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_2_OFFSET UNITYSDK_OFFSET(0x1C1780A0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_3_OFFSET UNITYSDK_OFFSET(0x1C178170)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0x1C1776E0)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_OFFSET UNITYSDK_OFFSET(0x1C177890)
#define SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDVERTICES_OFFSET UNITYSDK_OFFSET(0x1C177ED0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_1_OFFSET UNITYSDK_OFFSET(0x1C1772C0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_2_OFFSET UNITYSDK_OFFSET(0x1C177330)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_3_OFFSET UNITYSDK_OFFSET(0x1C177370)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_4_OFFSET UNITYSDK_OFFSET(0x1C15D630)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_5_OFFSET UNITYSDK_OFFSET(0x1C1773E0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_6_OFFSET UNITYSDK_OFFSET(0x1C177450)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_7_OFFSET UNITYSDK_OFFSET(0x1C1774A0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1C177280)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1C1775F0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1C1775C0)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALSCALE_OFFSET UNITYSDK_OFFSET(0x1C177520)
#define SPINE_UNITY_SKELETONEXTENSIONS_SETPOSITIONSKELETONSPACE_OFFSET UNITYSDK_OFFSET(0x1C1779A0)
#define SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_OFFSET UNITYSDK_OFFSET(0x1C177910)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonExtensions_TypeDefinitionIndex = 40194;

	class SkeletonExtensions : public ::System::Object
	{
	public:
		// static const ::System::Single ByteToFloat; // 0x0

		static ::UnityEngine::Color GetColor(::Spine::Skeleton* s)
		{
			return ((::UnityEngine::Color(*)(::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_OFFSET))(s);
		}

		static ::UnityEngine::Color GetColor_1(::Spine::RegionAttachment* a)
		{
			return ((::UnityEngine::Color(*)(::Spine::RegionAttachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_1_OFFSET))(a);
		}

		static ::UnityEngine::Color GetColor_2(::Spine::MeshAttachment* a)
		{
			return ((::UnityEngine::Color(*)(::Spine::MeshAttachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_2_OFFSET))(a);
		}

		static ::UnityEngine::Color GetColor_3(::Spine::Slot* s)
		{
			return ((::UnityEngine::Color(*)(::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLOR_3_OFFSET))(s);
		}

		static ::UnityEngine::Color GetColorTintBlack(::Spine::Slot* s)
		{
			return ((::UnityEngine::Color(*)(::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETCOLORTINTBLACK_OFFSET))(s);
		}

		static ::System::Void SetColor(::Spine::Skeleton* skeleton, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_OFFSET))(skeleton, color);
		}

		static ::System::Void SetColor_1(::Spine::Skeleton* skeleton, ::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_1_OFFSET))(skeleton, color);
		}

		static ::System::Void SetColor_2(::Spine::Slot* slot, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::Spine::Slot*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_2_OFFSET))(slot, color);
		}

		static ::System::Void SetColor_3(::Spine::Slot* slot, ::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::Spine::Slot*, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_3_OFFSET))(slot, color);
		}

		static ::System::Void SetColor_4(::Spine::RegionAttachment* attachment, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_4_OFFSET))(attachment, color);
		}

		static ::System::Void SetColor_5(::Spine::RegionAttachment* attachment, ::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::Spine::RegionAttachment*, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_5_OFFSET))(attachment, color);
		}

		static ::System::Void SetColor_6(::Spine::MeshAttachment* attachment, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::Spine::MeshAttachment*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_6_OFFSET))(attachment, color);
		}

		static ::System::Void SetColor_7(::Spine::MeshAttachment* attachment, ::UnityEngine::Color32 color)
		{
			return ((::System::Void(*)(::Spine::MeshAttachment*, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETCOLOR_7_OFFSET))(attachment, color);
		}

		static ::System::Void SetLocalScale(::Spine::Skeleton* skeleton, ::UnityEngine::Vector2 scale)
		{
			return ((::System::Void(*)(::Spine::Skeleton*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALSCALE_OFFSET))(skeleton, scale);
		}

		static ::UnityEngine::Matrix4x4 GetMatrix4x4(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Matrix4x4(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETMATRIX4X4_OFFSET))(bone);
		}

		static ::System::Void SetLocalPosition(::Spine::Bone* bone, ::UnityEngine::Vector2 position)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_OFFSET))(bone, position);
		}

		static ::System::Void SetLocalPosition_1(::Spine::Bone* bone, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETLOCALPOSITION_1_OFFSET))(bone, position);
		}

		static ::UnityEngine::Vector2 GetLocalPosition(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALPOSITION_OFFSET))(bone);
		}

		static ::UnityEngine::Vector2 GetSkeletonSpacePosition(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_OFFSET))(bone);
		}

		static ::UnityEngine::Vector2 GetSkeletonSpacePosition_1(::Spine::Bone* bone, ::UnityEngine::Vector2 boneLocal)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETSKELETONSPACEPOSITION_1_OFFSET))(bone, boneLocal);
		}

		static ::UnityEngine::Vector3 GetWorldPosition(::Spine::Bone* bone, ::UnityEngine::Transform* spineGameObjectTransform)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::Bone*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_OFFSET))(bone, spineGameObjectTransform);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_1(::Spine::Bone* bone, ::UnityEngine::Transform* spineGameObjectTransform, ::System::Single positionScale)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::Bone*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_1_OFFSET))(bone, spineGameObjectTransform, positionScale);
		}

		static ::UnityEngine::Quaternion GetQuaternion(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Quaternion(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETQUATERNION_OFFSET))(bone);
		}

		static ::UnityEngine::Quaternion GetLocalQuaternion(::Spine::Bone* bone)
		{
			return ((::UnityEngine::Quaternion(*)(::Spine::Bone*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALQUATERNION_OFFSET))(bone);
		}

		static ::UnityEngine::Vector2 GetLocalScale(::Spine::Skeleton* skeleton)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Skeleton*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALSCALE_OFFSET))(skeleton);
		}

		static ::System::Void GetWorldToLocalMatrix(::Spine::Bone* bone, ::System::Single& ia, ::System::Single& ib, ::System::Single& ic, ::System::Single& id)
		{
			return ((::System::Void(*)(::Spine::Bone*, ::System::Single&, ::System::Single&, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDTOLOCALMATRIX_OFFSET))(bone, ia, ib, ic, id);
		}

		static ::UnityEngine::Vector2 WorldToLocal(::Spine::Bone* bone, ::UnityEngine::Vector2 worldPosition)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_WORLDTOLOCAL_OFFSET))(bone, worldPosition);
		}

		static ::UnityEngine::Vector2 SetPositionSkeletonSpace(::Spine::Bone* bone, ::UnityEngine::Vector2 skeletonSpacePosition)
		{
			return ((::UnityEngine::Vector2(*)(::Spine::Bone*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_SETPOSITIONSKELETONSPACE_OFFSET))(bone, skeletonSpacePosition);
		}

		static ::UnityEngine::Material* GetMaterial(::Spine::Attachment* a)
		{
			return ((::UnityEngine::Material*(*)(::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETMATERIAL_OFFSET))(a);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetLocalVertices(::Spine::VertexAttachment* va, ::Spine::Slot* slot, ::Il2CppArray<::UnityEngine::Vector2>* buffer)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Spine::VertexAttachment*, ::Spine::Slot*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETLOCALVERTICES_OFFSET))(va, slot, buffer);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetWorldVertices(::Spine::VertexAttachment* a, ::Spine::Slot* slot, ::Il2CppArray<::UnityEngine::Vector2>* buffer)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::Spine::VertexAttachment*, ::Spine::Slot*, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDVERTICES_OFFSET))(a, slot, buffer);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_2(::Spine::PointAttachment* attachment, ::Spine::Slot* slot, ::UnityEngine::Transform* spineGameObjectTransform)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::PointAttachment*, ::Spine::Slot*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_2_OFFSET))(attachment, slot, spineGameObjectTransform);
		}

		static ::UnityEngine::Vector3 GetWorldPosition_3(::Spine::PointAttachment* attachment, ::Spine::Bone* bone, ::UnityEngine::Transform* spineGameObjectTransform)
		{
			return ((::UnityEngine::Vector3(*)(::Spine::PointAttachment*, ::Spine::Bone*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONEXTENSIONS_GETWORLDPOSITION_3_OFFSET))(attachment, bone, spineGameObjectTransform);
		}
	};
}
