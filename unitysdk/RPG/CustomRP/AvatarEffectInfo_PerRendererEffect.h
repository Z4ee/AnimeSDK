#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectInfo_EExecutionOrder.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREREFFECT_RESET_OFFSET UNITYSDK_OFFSET(0x1C66B8D0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREREFFECT_SETSUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x1C66B900)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREREFFECT_UNSETSUBMESHINDEX_OFFSET UNITYSDK_OFFSET(0x1C66B960)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1C66B9C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_PerRendererEffect_TypeDefinitionIndex = 36898;

	class AvatarEffectInfo_PerRendererEffect : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* subMeshIndexMasks; // 0x10
		::Il2CppArray<::System::UInt32>* renderingLayerMasks; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x20
		::Il2CppArray<::System::Int32>* passIDs; // 0x28
		::Il2CppArray<::Il2CppArray<::UnityEngine::Material*>*>* rendererMaterials; // 0x30
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder passesExecutionOrder; // 0x38
		::System::Boolean afterTransparent; // 0x3C
		::System::Boolean ignoreMpb; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREREFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREREFFECT_RESET_OFFSET))(this);
		}

		::System::Void SetSubMeshIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREREFFECT_SETSUBMESHINDEX_OFFSET))(this, a1, a2);
		}

		::System::Void UnsetSubMeshIndex(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREREFFECT_UNSETSUBMESHINDEX_OFFSET))(this, a1, a2);
		}
	};
}
