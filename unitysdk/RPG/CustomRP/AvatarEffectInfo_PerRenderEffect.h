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

#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_ADD_OFFSET UNITYSDK_OFFSET(0x1929CD10)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_FIND_OFFSET UNITYSDK_OFFSET(0x1929D4B0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_REMOVE_OFFSET UNITYSDK_OFFSET(0x1929D580)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x1929D740)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RESET_OFFSET UNITYSDK_OFFSET(0x1929D3A0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT_RPG_CUSTOMRP_AVATAREFFECTINFO_IAVATAREFFECT_RENDERER_OFFSET UNITYSDK_OFFSET(0x1929D790)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_PERRENDEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1929D750)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_PerRenderEffect_TypeDefinitionIndex = 36901;

	class AvatarEffectInfo_PerRenderEffect : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Int32>* subMeshIndices; // 0x10
		::System::Collections::Generic::List_1<::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup*>* effGroup; // 0x18
		::UnityEngine::Renderer* render; // 0x20
		::System::Boolean ignoreMpb; // 0x28
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder eExecutionOrder; // 0x2C
		::System::Int32 subMeshCount; // 0x30
		::System::UInt32 RLM; // 0x34

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
