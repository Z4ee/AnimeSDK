#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class AvatarEffectInfo_EffectMaterialGroup; }
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace RPG::CustomRP { class CRPRendererData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_ADD_OFFSET UNITYSDK_OFFSET(0x16A5F1A0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_FIND_1_OFFSET UNITYSDK_OFFSET(0x16A5E1A0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_FIND_OFFSET UNITYSDK_OFFSET(0x16A5F460)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_INITRENDER_OFFSET UNITYSDK_OFFSET(0x16A5F070)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x16A5E7F0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x16A5F510)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x16A5F720)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RESET_OFFSET UNITYSDK_OFFSET(0x16A5F380)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RPG_CUSTOMRP_AVATAREFFECTINFO_IAVATAREFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x16A5F790)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5F730)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_Effect_TypeDefinitionIndex = 29207;

	class AvatarEffectInfo_Effect : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* subMeshCounts; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup*>* effGroup; // 0x18
		::System::Collections::Generic::List_1<::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*>* rendererEffects; // 0x20
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RESET_OFFSET))(this);
		}

		::System::Boolean Find(::UnityEngine::Material* mat)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_FIND_OFFSET))(this, mat);
		}

		::System::Boolean Remove(::UnityEngine::Material* mat)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_REMOVE_OFFSET))(this, mat);
		}

		::System::Boolean Find_1(::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* effect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_FIND_1_OFFSET))(this, effect);
		}

		::System::Boolean Remove_1(::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* effect)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_REMOVE_1_OFFSET))(this, effect);
		}

		::System::Void InitRender(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_INITRENDER_OFFSET))(this, go);
		}

		::System::Void Add(::UnityEngine::Material* mat, ::Il2CppArray<::System::Int32>* overridePassIDs, ::System::Boolean afterTransparent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_ADD_OFFSET))(this, mat, overridePassIDs, afterTransparent);
		}

		::System::Void Renderer(::RPG::CustomRP::CRPRendererData*& renderData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean afterTransparent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RENDERER_OFFSET))(this, renderData, cmd, afterTransparent);
		}

		::System::Void RPG_CustomRP_AvatarEffectInfo_IAvatarEffect_Renderer(::RPG::CustomRP::CRPRendererData*& renderData, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean afterTransparent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RPG_CUSTOMRP_AVATAREFFECTINFO_IAVATAREFFECT_RENDERER_OFFSET))(this, renderData, cmd, afterTransparent);
		}
	};
}
