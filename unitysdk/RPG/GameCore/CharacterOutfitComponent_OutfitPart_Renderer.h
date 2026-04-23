#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterOutfitComponent_OutfitPart.h"

namespace Collections::Pooled { template <typename T> class PooledList_1; }
namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace RPG::GameCore { class CharacterOutfitPart; }
namespace RPG::GameCore { class CharacterOutfitPartBoneRef; }
namespace RPG::GameCore { class CharacterOutfitPartConfig; }
namespace RPG::GameCore { template <typename T1, typename T2> class CharacterOutfitComponent_OutfitPartAsset_2; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_APPLY_OFFSET UNITYSDK_OFFSET(0xB608B90)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB608910)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONESIMPL_1_OFFSET UNITYSDK_OFFSET(0xB609850)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONESIMPL_OFFSET UNITYSDK_OFFSET(0xB6096C0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONES_1_OFFSET UNITYSDK_OFFSET(0xB608F30)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONES_OFFSET UNITYSDK_OFFSET(0xB609540)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONE_OFFSET UNITYSDK_OFFSET(0xB608E90)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_LOAD_OFFSET UNITYSDK_OFFSET(0xB608A50)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_POSTAPPLY_OFFSET UNITYSDK_OFFSET(0xB609100)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_REMOVE_OFFSET UNITYSDK_OFFSET(0xB609180)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_SETUP_OFFSET UNITYSDK_OFFSET(0xB606A80)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0xB606A70)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6099E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPart_Renderer_TypeDefinitionIndex = 52731;

	class CharacterOutfitComponent_OutfitPart_Renderer : public ::RPG::GameCore::CharacterOutfitComponent_OutfitPart
	{
	public:
		::RPG::GameCore::CharacterOutfitPartConfig* Config; // 0x28
		::Il2CppArray<::RPG::GameCore::CharacterOutfitComponent_OutfitPartAsset_2<::UnityEngine::Mesh*, ::RPG::GameCore::CharacterOutfitPart*>*>* Assets; // 0x30
		::System::String* MaterialKey; // 0x38
		::System::Boolean IsStatic; // 0x40

		::System::Void _ctor(::System::UInt32 id, ::System::String* configPath, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER__CTOR_OFFSET))(this, id, configPath, instance);
		}

		::System::Void Setup(::RPG::GameCore::CharacterOutfitPartConfig* config, ::System::Boolean isStatic, ::System::String* materialKey)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitPartConfig*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_SETUP_OFFSET))(this, config, isStatic, materialKey);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_DISPOSE_OFFSET))(this);
		}

		::System::Void Load(::System::Boolean sync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_LOAD_OFFSET))(this, sync);
		}

		::System::Void Apply(::UnityEngine::Transform* model, ::RPG::Client::CharacterArtModelConfig* modelConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_APPLY_OFFSET))(this, model, modelConfig);
		}

		::System::Void PostApply(::UnityEngine::Transform* model)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_POSTAPPLY_OFFSET))(this, model);
		}

		::System::Void Remove(::UnityEngine::Transform* model, ::RPG::Client::CharacterArtModelConfig* modelConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_REMOVE_OFFSET))(this, model, modelConfig);
		}

		static ::UnityEngine::Transform* FindBone(::UnityEngine::Transform* root, ::RPG::GameCore::CharacterOutfitPartBoneRef* boneRef)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::RPG::GameCore::CharacterOutfitPartBoneRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONE_OFFSET))(root, boneRef);
		}

		static ::Il2CppArray<::UnityEngine::Transform*>* FindBones(::UnityEngine::Transform* root, ::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>* boneRef)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::UnityEngine::Transform*, ::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONES_OFFSET))(root, boneRef);
		}

		static ::System::Void FindBones_1(::UnityEngine::Transform* root, ::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>* boneRef, ::UnityEngine::SkinnedMeshRenderer* smr)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONES_1_OFFSET))(root, boneRef, smr);
		}

		static ::System::Void FindBonesImpl(::UnityEngine::Transform* root, ::RPG::GameCore::CharacterOutfitPartBoneRef* boneRef, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* bones)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::CharacterOutfitPartBoneRef*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONESIMPL_OFFSET))(root, boneRef, bones);
		}

		static ::System::Void FindBonesImpl_1(::UnityEngine::Transform* root, ::RPG::GameCore::CharacterOutfitPartBoneRef* boneRef, ::Collections::Pooled::PooledList_1<::UnityEngine::Transform*>* bones)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::CharacterOutfitPartBoneRef*, ::Collections::Pooled::PooledList_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONESIMPL_1_OFFSET))(root, boneRef, bones);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
