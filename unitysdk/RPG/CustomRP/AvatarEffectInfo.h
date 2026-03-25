#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/AvatarEffectInfo_EExecutionOrder.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class AvatarEffectInfo_IAvatarEffect; }
namespace RPG::CustomRP { class AvatarEffectInfo_PerRendererEffect; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_1_OFFSET UNITYSDK_OFFSET(0x16A5DBA0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_2_OFFSET UNITYSDK_OFFSET(0x16A5DF60)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_3_OFFSET UNITYSDK_OFFSET(0x16A5E210)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_OFFSET UNITYSDK_OFFSET(0x16A5D700)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_CLEAR_OFFSET UNITYSDK_OFFSET(0x16A5E8D0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_COLLECTMATERIALS_OFFSET UNITYSDK_OFFSET(0x16A5EB00)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x16A5E650)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_2_OFFSET UNITYSDK_OFFSET(0x16A5E6C0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_OFFSET UNITYSDK_OFFSET(0x16A5E470)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__ADDMATEFFECT_1_OFFSET UNITYSDK_OFFSET(0x16A5D780)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__ADDMATEFFECT_OFFSET UNITYSDK_OFFSET(0x16A5DBF0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16A5F340)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16A5F2C0)
#define RPG_CUSTOMRP_AVATAREFFECTINFO__REMOVE_OFFSET UNITYSDK_OFFSET(0x16A5E4E0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int AvatarEffectInfo_TypeDefinitionIndex = 29202;

	class AvatarEffectInfo : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Material*>** StaticGet_sharedMaterials()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(AvatarEffectInfo_TypeDefinitionIndex)->GetStaticField(0x303B0);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>* Effects; // 0x10
		::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder ExecutionOrder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__CCTOR_OFFSET))();
		}

		::System::Void Add(::UnityEngine::Renderer* render, ::UnityEngine::Material* material, ::Il2CppArray<::System::Int32>* passIDs, ::Il2CppArray<::System::Int32>* subMeshIndices, ::System::Boolean afterTransparent, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder eExecutionOrder, ::System::UInt32 RLM, ::System::Boolean ignoreMpb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_OFFSET))(this, render, material, passIDs, subMeshIndices, afterTransparent, eExecutionOrder, RLM, ignoreMpb);
		}

		::System::Void Add_1(::UnityEngine::GameObject* go, ::UnityEngine::Material* material, ::Il2CppArray<::System::Int32>* passIDs, ::System::Boolean afterTransparent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_1_OFFSET))(this, go, material, passIDs, afterTransparent);
		}

		::System::Boolean Add_2(::UnityEngine::GameObject* go, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* rendererEffect)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_2_OFFSET))(this, go, rendererEffect);
		}

		::System::Boolean Add_3(::UnityEngine::GameObject* go, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* rendererEffect, ::Il2CppArray<::System::Int32>* passIDs, ::System::Boolean afterTransparent, ::System::Boolean ignoreMpb)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_ADD_3_OFFSET))(this, go, rendererEffect, passIDs, afterTransparent, ignoreMpb);
		}

		::System::Boolean Remove(::UnityEngine::Renderer* render, ::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_OFFSET))(this, render, material);
		}

		::System::Boolean Remove_1(::UnityEngine::GameObject* go, ::UnityEngine::Material* material)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_1_OFFSET))(this, go, material);
		}

		::System::Boolean Remove_2(::UnityEngine::GameObject* go, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect* rendererEffect)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::CustomRP::AvatarEffectInfo_PerRendererEffect*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_REMOVE_2_OFFSET))(this, go, rendererEffect);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_CLEAR_OFFSET))(this);
		}

		static ::System::Boolean CollectMaterials(::Il2CppArray<::UnityEngine::Renderer*>* renderers, ::Il2CppArray<::System::Int32>*& subMeshCount, ::Il2CppArray<::Il2CppArray<::UnityEngine::Material*>*>*& materials, ::Il2CppArray<::System::UInt32>*& renderingLayerMasks)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Renderer*>*, ::Il2CppArray<::System::Int32>*&, ::Il2CppArray<::Il2CppArray<::UnityEngine::Material*>*>*&, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO_COLLECTMATERIALS_OFFSET))(renderers, subMeshCount, materials, renderingLayerMasks);
		}

		::System::Boolean _Remove(::System::Int32 id, ::UnityEngine::Material* mat)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__REMOVE_OFFSET))(this, id, mat);
		}

		::System::Boolean _AddMatEffect(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>* effects, ::UnityEngine::GameObject* go, ::UnityEngine::Material* mat, ::Il2CppArray<::System::Int32>* overridePassIDs, ::System::Boolean afterTransparent)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>*, ::UnityEngine::GameObject*, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__ADDMATEFFECT_OFFSET))(this, effects, go, mat, overridePassIDs, afterTransparent);
		}

		::System::Boolean _AddMatEffect_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>* effects, ::UnityEngine::Renderer* render, ::UnityEngine::Material* mat, ::Il2CppArray<::System::Int32>* overridePassIDs, ::Il2CppArray<::System::Int32>* subMeshIndices, ::System::Boolean afterTransparent, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder eExecutionOrder, ::System::UInt32 RLM, ::System::Boolean ignoreMpb)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::CustomRP::AvatarEffectInfo_IAvatarEffect*>*, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::RPG::CustomRP::AvatarEffectInfo_EExecutionOrder, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_AVATAREFFECTINFO__ADDMATEFFECT_1_OFFSET))(this, effects, render, mat, overridePassIDs, subMeshIndices, afterTransparent, eExecutionOrder, RLM, ignoreMpb);
		}
	};
}
