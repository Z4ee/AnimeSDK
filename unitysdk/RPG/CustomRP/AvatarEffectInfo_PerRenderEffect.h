#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectInfo_EExecutionOrder.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class AvatarEffectInfo_EffectMaterialGroup; }
namespace RPG::CustomRP { class CRPRendererData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_ADD_OFFSET UNITYSDK_OFFSET(0x18EA54C0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_FIND_OFFSET UNITYSDK_OFFSET(0x18EA5C10)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x18EA5CE0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x18EA5EA0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RESET_OFFSET UNITYSDK_OFFSET(0x18EA5B30)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RPG_CUSTOMRP_AVATAREFFECTINFO_IAVATAREFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x18EA5EF0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x18EA5EB0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_PerRenderEffect_TypeDefinitionIndex = 35258;

	class AvatarEffectInfo_PerRenderEffect : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* subMeshIndices; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup*>* effGroup; // 0x18
		::UnityEngine::Renderer* render; // 0x20
		::System::UInt32 RLM; // 0x28
		::System::Int32 subMeshCount; // 0x2C
		::System::Boolean ignoreMpb; // 0x30
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder eExecutionOrder; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RESET_OFFSET))(this);
		}

		::System::Boolean Find(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_FIND_OFFSET))(this, a1);
		}

		::System::Boolean Remove(::UnityEngine::Material* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Add(::UnityEngine::Material* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_ADD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Renderer(::RPG::CustomRP::CRPRendererData*& a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RENDERER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RPG_CustomRP_AvatarEffectInfo_IAvatarEffect_Renderer(::RPG::CustomRP::CRPRendererData*& a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CRPRendererData*&, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RPG_CUSTOMRP_AVATAREFFECTINFO_IAVATAREFFECT_RENDERER_OFFSET))(this, a1, a2, a3);
		}
	};
}
