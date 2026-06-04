#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_999AE0B49D951C72;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class BaseShaderPropertyTransition; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class AvatarOutfitDecorationConfig; }
namespace RPG::GameCore { class AvatarOutfitPartConfig; }
namespace RPG::GameCore { class CharacterOutfitComponent; }
namespace RPG::GameCore { class CharacterOutfitComponent_OutfitPart; }
namespace RPG::GameCore { class CharacterOutfitComponent_OutfitPart_Pendant; }
namespace RPG::GameCore { class CharacterOutfitComponent_OutfitPart_Renderer; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_APPLY_OFFSET UNITYSDK_OFFSET(0xCD6CDC0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CONTAINSPART_OFFSET UNITYSDK_OFFSET(0xCD6D740)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CREATEPENDANTOUTFITPART_OFFSET UNITYSDK_OFFSET(0xCD6E300)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CREATERENDEREROUTFITPART_OFFSET UNITYSDK_OFFSET(0xCD6E180)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD6CBF0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETATTACHPOINTINST_OFFSET UNITYSDK_OFFSET(0xCD6E470)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETMONOEFFECTMANAGER_OFFSET UNITYSDK_OFFSET(0xCD6E660)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETOWNERENTITY_OFFSET UNITYSDK_OFFSET(0xCD6EF90)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETSHADERPROPERTYTRANSITION_OFFSET UNITYSDK_OFFSET(0xCD6E5A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GET_CURRENTOUTFITPARTS_OFFSET UNITYSDK_OFFSET(0xCD6EA40)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOADPENDANTPART_OFFSET UNITYSDK_OFFSET(0xCD6DF20)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOADRENDERERPART_OFFSET UNITYSDK_OFFSET(0xCD6DB90)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOAD_OFFSET UNITYSDK_OFFSET(0xCD6D840)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_OVERRIDEREPLACEMATERIALKEY_OFFSET UNITYSDK_OFFSET(0xCD6EA50)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_POSTAPPLY_OFFSET UNITYSDK_OFFSET(0xCD6CF90)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_REMOVEOVERRIDEREPLACEMATERIALKEY_OFFSET UNITYSDK_OFFSET(0xCD6EC50)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_REMOVE_OFFSET UNITYSDK_OFFSET(0xCD6D0E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_RESETSPRINGBONE_OFFSET UNITYSDK_OFFSET(0xCD6D2E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_SETANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0xCD6D4E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_UNLOAD_OFFSET UNITYSDK_OFFSET(0xCD6CC80)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xCD6CBA0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xCD6CB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_CharacterOutfitInstance_TypeDefinitionIndex = 53433;

	class CharacterOutfitComponent_CharacterOutfitInstance : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterOutfitComponent_OutfitPart*>* _CurrentOutfitParts; // 0x10
		::RPG::GameCore::CharacterOutfitComponent* _Component; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::UnityEngine::Renderer*>, ::Il2CppArray<::UnityEngine::Material*>*>* _ReplaceRendererMaterialDatas; // 0x20
		::RPG::GameCore::JsonConfig* _EntityJsonConfig; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _ReplaceMaterialKeys; // 0x30
		::RPG::Client::AttachPointMapping* _AttachPointMapping; // 0x38

		::System::Void _ctor(::RPG::GameCore::CharacterOutfitComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::RPG::Client::AttachPointMapping* a1, ::RPG::GameCore::JsonConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*, ::RPG::GameCore::JsonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Apply(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_APPLY_OFFSET))(this, a1);
		}

		::System::Void PostApply(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_POSTAPPLY_OFFSET))(this, a1);
		}

		::System::Void Remove(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Unload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_UNLOAD_OFFSET))(this);
		}

		::System::Void ResetSpringBone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_RESETSPRINGBONE_OFFSET))(this, a1);
		}

		::System::Void SetAnimatorSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_SETANIMATORSPEED_OFFSET))(this, a1);
		}

		::System::Boolean ContainsPart(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CONTAINSPART_OFFSET))(this, a1);
		}

		::System::Void Load(::System::Collections::Generic::IReadOnlyList_1<::Class_1_999AE0B49D951C72*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::Class_1_999AE0B49D951C72*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOAD_OFFSET))(this, a1);
		}

		::System::Void LoadRendererPart(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarOutfitPartConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarOutfitPartConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOADRENDERERPART_OFFSET))(this, a1);
		}

		::System::Void LoadPendantPart(::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarOutfitDecorationConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::AvatarOutfitDecorationConfig*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_LOADPENDANTPART_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetAttachPointInst(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETATTACHPOINTINST_OFFSET))(this, a1);
		}

		::RPG::Client::BaseShaderPropertyTransition* GetShaderPropertyTransition()
		{
			return ((::RPG::Client::BaseShaderPropertyTransition*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETSHADERPROPERTYTRANSITION_OFFSET))(this);
		}

		::RPG::Client::MonoEffectManager* GetMonoEffectManager()
		{
			return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETMONOEFFECTMANAGER_OFFSET))(this);
		}

		::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Renderer* CreateRendererOutfitPart(::System::Boolean a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Renderer*(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CREATERENDEREROUTFITPART_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant* CreatePendantOutfitPart(::System::String* a1)
		{
			return ((::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_CREATEPENDANTOUTFITPART_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::CharacterOutfitComponent_OutfitPart*>* get_CurrentOutfitParts()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::CharacterOutfitComponent_OutfitPart*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GET_CURRENTOUTFITPARTS_OFFSET))(this);
		}

		::System::Void OverrideReplaceMaterialKey(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_OVERRIDEREPLACEMATERIALKEY_OFFSET))(this, a1, a2);
		}

		::System::Void RemoveOverrideReplaceMaterialKey(::UnityEngine::GameObject* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_REMOVEOVERRIDEREPLACEMATERIALKEY_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::GameEntity* GetOwnerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_CHARACTEROUTFITINSTANCE_GETOWNERENTITY_OFFSET))(this);
		}
	};
}
