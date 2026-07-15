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

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_APPLY_OFFSET UNITYSDK_OFFSET(0x121AED60)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x121AEB10)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONESIMPL_1_OFFSET UNITYSDK_OFFSET(0x121AF9E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONESIMPL_OFFSET UNITYSDK_OFFSET(0x121AF7F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONES_1_OFFSET UNITYSDK_OFFSET(0x121AF100)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONES_OFFSET UNITYSDK_OFFSET(0x121AF6F0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONE_OFFSET UNITYSDK_OFFSET(0x121AF060)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_LOAD_OFFSET UNITYSDK_OFFSET(0x121AEC40)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_POSTAPPLY_OFFSET UNITYSDK_OFFSET(0x121AF2D0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_REMOVE_OFFSET UNITYSDK_OFFSET(0x121AF350)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_SETUP_OFFSET UNITYSDK_OFFSET(0x121ACCF0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x121ACCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPart_Renderer_TypeDefinitionIndex = 54651;

	class CharacterOutfitComponent_OutfitPart_Renderer : public ::RPG::GameCore::CharacterOutfitComponent_OutfitPart
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterOutfitComponent_OutfitPartAsset_2<::UnityEngine::Mesh*, ::RPG::GameCore::CharacterOutfitPart*>*>* Assets; // 0x28
		::RPG::GameCore::CharacterOutfitPartConfig* Config; // 0x30
		::System::String* MaterialKey; // 0x38
		::System::Boolean IsStatic; // 0x40

		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Setup(::RPG::GameCore::CharacterOutfitPartConfig* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitPartConfig*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_SETUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_DISPOSE_OFFSET))(this);
		}

		::System::Void Load(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_LOAD_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Transform* a1, ::RPG::Client::CharacterArtModelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_APPLY_OFFSET))(this, a1, a2);
		}

		::System::Void PostApply(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_POSTAPPLY_OFFSET))(this, a1);
		}

		::System::Void Remove(::UnityEngine::Transform* a1, ::RPG::Client::CharacterArtModelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_REMOVE_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::Transform* FindBone(::UnityEngine::Transform* a1, ::RPG::GameCore::CharacterOutfitPartBoneRef* a2)
		{
			return ((::UnityEngine::Transform*(*)(::UnityEngine::Transform*, ::RPG::GameCore::CharacterOutfitPartBoneRef*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONE_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::UnityEngine::Transform*>* FindBones(::UnityEngine::Transform* a1, ::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>* a2)
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::UnityEngine::Transform*, ::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONES_OFFSET))(a1, a2);
		}

		static ::System::Void FindBones_1(::UnityEngine::Transform* a1, ::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>* a2, ::UnityEngine::SkinnedMeshRenderer* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::Il2CppArray<::RPG::GameCore::CharacterOutfitPartBoneRef*>*, ::UnityEngine::SkinnedMeshRenderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FindBonesImpl(::UnityEngine::Transform* a1, ::RPG::GameCore::CharacterOutfitPartBoneRef* a2, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::CharacterOutfitPartBoneRef*, ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONESIMPL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FindBonesImpl_1(::UnityEngine::Transform* a1, ::RPG::GameCore::CharacterOutfitPartBoneRef* a2, ::Collections::Pooled::PooledList_1<::UnityEngine::Transform*>* a3)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::RPG::GameCore::CharacterOutfitPartBoneRef*, ::Collections::Pooled::PooledList_1<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RENDERER_FINDBONESIMPL_1_OFFSET))(a1, a2, a3);
		}
	};
}
