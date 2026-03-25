#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectHelper_DrawCmd.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectInfo_EExecutionOrder.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class AvatarEffectInfo; }
namespace RPG::CustomRP { class AvatarEffectInfo_EffectMaterialGroup; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_AVATAREFFECTHELPER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16A5BF80)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER_HASEFFECT_OFFSET UNITYSDK_OFFSET(0x16A5BF10)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A5D420)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5BE80)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__EXECUTE_OFFSET UNITYSDK_OFFSET(0x16A5C170)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__ISRENDERINVALID_OFFSET UNITYSDK_OFFSET(0x16A5D0C0)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__RENDEREFFECT_OFFSET UNITYSDK_OFFSET(0x16A5D170)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__RENDERMATGROUP_OFFSET UNITYSDK_OFFSET(0x16A5CE80)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectHelper_TypeDefinitionIndex = 29209;

	class AvatarEffectHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_PassTagIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AvatarEffectHelper_TypeDefinitionIndex)->GetStaticField(0x30330);
		}
		::System::Collections::Generic::List_1<::RPG::CustomRP::AvatarEffectHelper_DrawCmd>* _DrawByLightModeCmds; // 0x10
		::System::Boolean _AfterTransparent; // 0x18
		::System::UInt32 _RenderLayerMask; // 0x1C

		::System::Void _ctor(::System::Boolean afterTransparent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__CTOR_OFFSET))(this, afterTransparent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__CCTOR_OFFSET))();
		}

		::System::Boolean HasEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER_HASEFFECT_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER_EXECUTE_OFFSET))(this, cmd, layerMask);
		}

		::System::Void _Execute(::RPG::CustomRP::AvatarEffectInfo* avatarEffects, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::AvatarEffectInfo*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__EXECUTE_OFFSET))(this, avatarEffects, cmd, layerMask);
		}

		::System::Boolean _IsRenderInvalid(::UnityEngine::Renderer* render, ::System::Int32 layerMask, ::System::UInt32 RLM)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__ISRENDERINVALID_OFFSET))(this, render, layerMask, RLM);
		}

		::System::Void _RenderEffect(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Renderer* render, ::UnityEngine::Material* mat, ::System::Int32 subMesh, ::Il2CppArray<::System::Int32>* passIDs, ::System::UInt32 RLM, ::System::Boolean ignoreMpb, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder passExeOrder)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::UInt32, ::System::Boolean, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__RENDEREFFECT_OFFSET))(this, cmd, render, mat, subMesh, passIDs, RLM, ignoreMpb, passExeOrder);
		}

		::System::Void _RenderMatGroup(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Renderer* render, ::System::Int32 subMeshCount, ::Il2CppArray<::System::Int32>* subMeshIndices, ::System::Int32 layerMask, ::System::UInt32 RLM, ::System::Boolean ignoreMpb, ::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup* matGroup, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder eExecutionOrder)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Renderer*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::UInt32, ::System::Boolean, ::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup*, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__RENDERMATGROUP_OFFSET))(this, cmd, render, subMeshCount, subMeshIndices, layerMask, RLM, ignoreMpb, matGroup, eExecutionOrder);
		}
	};
}
