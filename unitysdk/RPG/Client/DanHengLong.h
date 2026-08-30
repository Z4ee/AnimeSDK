#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_DANHENGLONG_LATETICK_OFFSET UNITYSDK_OFFSET(0xCC945C0)
#define RPG_CLIENT_DANHENGLONG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCC94530)
#define RPG_CLIENT_DANHENGLONG_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCC94460)
#define RPG_CLIENT_DANHENGLONG__CTOR_OFFSET UNITYSDK_OFFSET(0xCC954A0)

namespace RPG::Client
{
	inline static constexpr unsigned int DanHengLong_TypeDefinitionIndex = 70366;

	class DanHengLong : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* LongMaterial; // 0x18
		::UnityEngine::Transform* HeadBonesRootM; // 0x20
		::UnityEngine::Transform* BodyAllBonesRootM; // 0x28
		::UnityEngine::GameObject* HeadGo; // 0x30
		::UnityEngine::Transform* HeadRootBone; // 0x38
		::UnityEngine::GameObject* BodyGo; // 0x40
		::UnityEngine::Transform* BodyRootBone; // 0x48
		::UnityEngine::Vector4 FlowOffset; // 0x50
		::System::Boolean DissolveOn; // 0x60
		::System::Boolean NLFGAJKECML; // 0x61
		::System::Single DissolveRate; // 0x64
		::UnityEngine::Vector4 DissolveST; // 0x68
		::UnityEngine::Vector4 DistortionST; // 0x78
		::System::Single DissolveDistortionIntensity; // 0x88
		::System::Single DissolveOutlineSize1; // 0x8C
		::System::Boolean UsingDitherAlpha; // 0x90
		::System::Boolean EMKCNDJHHLG; // 0x91
		::System::Single DitherAlpha; // 0x94
		::UnityEngine::MaterialPropertyBlock* BMCPFHADPKJ; // 0x98
		::UnityEngine::Vector4 JICDKECICFE; // 0xA0
		::UnityEngine::Transform* _RootMNode; // 0xB0
		::UnityEngine::Transform* _BodyGoRootNode; // 0xB8
		::UnityEngine::Transform* _HeadNode; // 0xC0
		::Il2CppArray<::UnityEngine::Transform*>* _HeadBones; // 0xC8
		::Il2CppArray<::UnityEngine::Transform*>* _HeadBonesOrigin; // 0xD0
		::Il2CppArray<::UnityEngine::Transform*>* _BodyBones; // 0xD8
		::Il2CppArray<::UnityEngine::GameObject*>* _BodyNodes; // 0xE0
		::Il2CppArray<::UnityEngine::Transform*>* _BodyChildrenBones; // 0xE8
		::System::Int32 bodyJointLength; // 0xF0
		::Il2CppArray<::UnityEngine::SkinnedMeshRenderer*>* _AllSkinnedMeshRenderers; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DANHENGLONG__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DANHENGLONG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DANHENGLONG_ONDISABLE_OFFSET))(this);
		}

		::System::Void LateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_DANHENGLONG_LATETICK_OFFSET))(this, a1);
		}
	};
}
