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

#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_ADD_OFFSET UNITYSDK_OFFSET(0x1929CC20)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_FIND_1_OFFSET UNITYSDK_OFFSET(0x1929BC50)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_FIND_OFFSET UNITYSDK_OFFSET(0x1929CFF0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_INITRENDER_OFFSET UNITYSDK_OFFSET(0x1929CB00)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1929C300)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1929D0C0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x1929D300)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RESET_OFFSET UNITYSDK_OFFSET(0x1929CEC0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RPG_CUSTOMRP_AVATAREFFECTINFO_IAVATAREFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x1929D370)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1929D310)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_Effect_TypeDefinitionIndex = 36902;

	class AvatarEffectInfo_Effect : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* subMeshCounts; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup*>* effGroup; // 0x18
		::Il2CppArray<::UnityEngine::Renderer*>* renderers; // 0x20
		::System::Collections::Generic::List_1<::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*>* rendererEffects; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RESET_OFFSET))(this);
		}

		::System::Boolean Find(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_FIND_OFFSET))(this, a1);
		}

		::System::Boolean Remove(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_REMOVE_OFFSET))(this, a1);
		}

		::System::Boolean Find_1(::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_FIND_1_OFFSET))(this, a1);
		}

		::System::Boolean Remove_1(::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Void InitRender(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_INITRENDER_OFFSET))(this, a1);
		}

		::System::Void Add(::UnityEngine::Material* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_ADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Renderer(::RPG::CustomRP::CRPRendererData*& a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RENDERER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RPG_CustomRP_AvatarEffectInfo_IAvatarEffect_Renderer(::RPG::CustomRP::CRPRendererData*& a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_EFFECT_RPG_CUSTOMRP_AVATAREFFECTINFO_IAVATAREFFECT_RENDERER_OFFSET))(this, a1, a2, a3);
		}
	};
}
