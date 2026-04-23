#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterOutfitComponent_OutfitPart.h"

namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace RPG::GameCore { class CharacterOutfitPendant; }
namespace RPG::GameCore { class CharacterOutfitPendantConfig; }
namespace RPG::GameCore { template <typename T1, typename T2> class CharacterOutfitComponent_OutfitPartAsset_2; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_APPLY_OFFSET UNITYSDK_OFFSET(0xB607890)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB607610)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_LOAD_OFFSET UNITYSDK_OFFSET(0xB607750)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_POSTAPPLY_OFFSET UNITYSDK_OFFSET(0xB608290)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_REMOVE_OFFSET UNITYSDK_OFFSET(0xB6083A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_RESETSPRINGBONE_OFFSET UNITYSDK_OFFSET(0xB605CE0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0xB605FB0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETUP_OFFSET UNITYSDK_OFFSET(0xB606C50)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT__CTOR_OFFSET UNITYSDK_OFFSET(0xB606C40)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6088C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPart_Pendant_TypeDefinitionIndex = 52732;

	class CharacterOutfitComponent_OutfitPart_Pendant : public ::RPG::GameCore::CharacterOutfitComponent_OutfitPart
	{
	public:
		::RPG::GameCore::CharacterOutfitPendantConfig* Config; // 0x28
		::Il2CppArray<::UnityEngine::GameObject*>* Instances; // 0x30
		::Il2CppArray<::RPG::GameCore::CharacterOutfitComponent_OutfitPartAsset_2<::UnityEngine::GameObject*, ::RPG::GameCore::CharacterOutfitPendant*>*>* Assets; // 0x38
		::Il2CppArray<::UnityEngine::Animator*>* Animators; // 0x40

		::System::Void _ctor(::System::UInt32 id, ::System::String* configPath, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* instance)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT__CTOR_OFFSET))(this, id, configPath, instance);
		}

		::System::Void Setup(::RPG::GameCore::CharacterOutfitPendantConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitPendantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETUP_OFFSET))(this, config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_DISPOSE_OFFSET))(this);
		}

		::System::Void Load(::System::Boolean sync)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_LOAD_OFFSET))(this, sync);
		}

		::System::Void Apply(::UnityEngine::Transform* model, ::RPG::Client::CharacterArtModelConfig* modelConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_APPLY_OFFSET))(this, model, modelConfig);
		}

		::System::Void PostApply(::UnityEngine::Transform* model)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_POSTAPPLY_OFFSET))(this, model);
		}

		::System::Void Remove(::UnityEngine::Transform* model, ::RPG::Client::CharacterArtModelConfig* modelConfig)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_REMOVE_OFFSET))(this, model, modelConfig);
		}

		::System::Void ResetSpringBone(::System::Boolean resetAllData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_RESETSPRINGBONE_OFFSET))(this, resetAllData);
		}

		::System::Void SetAnimatorSpeed(::System::Single fAnimSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETANIMATORSPEED_OFFSET))(this, fAnimSpeed);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
