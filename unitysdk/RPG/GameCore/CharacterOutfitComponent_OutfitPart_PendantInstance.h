#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::GameCore { class CharacterOutfitComponent_OutfitPart_Pendant; }
namespace RPG::GameCore { class CharacterOutfitPendant; }
namespace RPG::GameCore { template <typename T1, typename T2> class CharacterOutfitComponent_OutfitPartAsset_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_APPLY_OFFSET UNITYSDK_OFFSET(0xE608400)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE608060)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_GET_ISEFFECT_OFFSET UNITYSDK_OFFSET(0xE6047C0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_LOAD_OFFSET UNITYSDK_OFFSET(0xE608290)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_POSTAPPLY_OFFSET UNITYSDK_OFFSET(0xE604CE0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_REMOVE_OFFSET UNITYSDK_OFFSET(0xE608B10)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_RESETSPRINGBONE_OFFSET UNITYSDK_OFFSET(0xE608EC0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_SETANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0xE6090D0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE607F40)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE__POSTAPPLY_B__12_0_OFFSET UNITYSDK_OFFSET(0xE609150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPart_PendantInstance_TypeDefinitionIndex = 57209;

	class CharacterOutfitComponent_OutfitPart_PendantInstance : public ::System::Object
	{
	public:
		::RPG::Client::TriggerEffectParamsRef EffectParams; // 0x10
		::UnityEngine::Animator* Animator; // 0x20
		::RPG::GameCore::CharacterOutfitPendant* Config; // 0x28
		::RPG::GameCore::CharacterOutfitComponent_OutfitPartAsset_2<::UnityEngine::GameObject*, ::RPG::GameCore::CharacterOutfitPendant*>* PrefabAsset; // 0x30
		::UnityEngine::GameObject* GoInstance; // 0x38
		::RPG::Client::MonoEffectPluginFollow* EffectFollow; // 0x40

		::System::Void _ctor(::RPG::GameCore::CharacterOutfitPendant* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitPendant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_GET_ISEFFECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void Load(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_LOAD_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Transform* a1, ::RPG::Client::CharacterArtModelConfig* a2, ::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*, ::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_APPLY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PostApply(::UnityEngine::Transform* a1, ::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_POSTAPPLY_OFFSET))(this, a1, a2);
		}

		::System::Void Remove(::UnityEngine::Transform* a1, ::RPG::Client::CharacterArtModelConfig* a2, ::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*, ::RPG::GameCore::CharacterOutfitComponent_OutfitPart_Pendant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_REMOVE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetSpringBone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_RESETSPRINGBONE_OFFSET))(this, a1);
		}

		::System::Void SetAnimatorSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE_SETANIMATORSPEED_OFFSET))(this, a1);
		}

		::System::Void _PostApply_b__12_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANTINSTANCE__POSTAPPLY_B__12_0_OFFSET))(this, a1, a2);
		}
	};
}
