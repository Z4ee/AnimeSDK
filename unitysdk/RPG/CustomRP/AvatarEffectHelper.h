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

#define RPG_CUSTOMRP_AVATAREFFECTHELPER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C6679A0)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER_HASEFFECT_OFFSET UNITYSDK_OFFSET(0x1C667930)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C668D70)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6678A0)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C667BF0)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__ISRENDERINVALID_OFFSET UNITYSDK_OFFSET(0x1C668950)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__RENDEREFFECT_OFFSET UNITYSDK_OFFSET(0x1C668A10)
#define RPG_CUSTOMRP_AVATAREFFECTHELPER__RENDERMATGROUP_OFFSET UNITYSDK_OFFSET(0x1C668710)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectHelper_TypeDefinitionIndex = 36904;

	class AvatarEffectHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_PassTagIDs()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AvatarEffectHelper_TypeDefinitionIndex)->GetStaticField(0x2F750);
		}
		::System::Collections::Generic::List_1<::RPG::CustomRP::AvatarEffectHelper_DrawCmd>* _DrawByLightModeCmds; // 0x10
		::System::UInt32 _RenderLayerMask; // 0x18
		::System::Boolean _AfterTransparent; // 0x1C

		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__CCTOR_OFFSET))();
		}

		::System::Boolean HasEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER_HASEFFECT_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void _Execute(::RPG::CustomRP::AvatarEffectInfo* a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::AvatarEffectInfo*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__EXECUTE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _IsRenderInvalid(::UnityEngine::Renderer* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__ISRENDERINVALID_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RenderEffect(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Renderer* a2, ::UnityEngine::Material* a3, ::System::Int32 a4, ::Il2CppArray<::System::Int32>* a5, ::System::UInt32 a6, ::System::Boolean a7, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::UInt32, ::System::Boolean, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__RENDEREFFECT_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _RenderMatGroup(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Renderer* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::System::Int32 a5, ::System::UInt32 a6, ::System::Boolean a7, ::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup* a8, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder a9)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Renderer*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::System::UInt32, ::System::Boolean, ::RPG::CustomRP::AvatarEffectInfo_EffectMaterialGroup*, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTHELPER__RENDERMATGROUP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
	};
}
