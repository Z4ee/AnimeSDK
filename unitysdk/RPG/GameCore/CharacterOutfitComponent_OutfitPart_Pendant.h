#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterOutfitComponent_OutfitPart.h"

namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace RPG::GameCore { class CharacterOutfitComponent_OutfitPart_PendantInstance; }
namespace RPG::GameCore { class CharacterOutfitPendantConfig; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_APPLY_OFFSET UNITYSDK_OFFSET(0x122487D0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12248410)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_LOAD_OFFSET UNITYSDK_OFFSET(0x12248680)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_POSTAPPLY_OFFSET UNITYSDK_OFFSET(0x12248E00)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_REMOVE_OFFSET UNITYSDK_OFFSET(0x12248EB0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_RESETSPRINGBONE_OFFSET UNITYSDK_OFFSET(0x12246750)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0x122467E0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETUP_OFFSET UNITYSDK_OFFSET(0x12247950)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT__CTOR_OFFSET UNITYSDK_OFFSET(0x12247940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPart_Pendant_TypeDefinitionIndex = 57374;

	class CharacterOutfitComponent_OutfitPart_Pendant : public ::RPG::GameCore::CharacterOutfitComponent_OutfitPart
	{
	public:
		::Il2CppArray<::RPG::GameCore::CharacterOutfitComponent_OutfitPart_PendantInstance*>* PendantInstances; // 0x28
		::RPG::GameCore::CharacterOutfitPendantConfig* Config; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Setup(::RPG::GameCore::CharacterOutfitPendantConfig* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitPendantConfig*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETUP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_DISPOSE_OFFSET))(this);
		}

		::System::Void Load(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_LOAD_OFFSET))(this, a1);
		}

		::System::Void Apply(::UnityEngine::Transform* a1, ::RPG::Client::CharacterArtModelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_APPLY_OFFSET))(this, a1, a2);
		}

		::System::Void PostApply(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_POSTAPPLY_OFFSET))(this, a1);
		}

		::System::Void Remove(::UnityEngine::Transform* a1, ::RPG::Client::CharacterArtModelConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::Client::CharacterArtModelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_REMOVE_OFFSET))(this, a1, a2);
		}

		::System::Void ResetSpringBone(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_RESETSPRINGBONE_OFFSET))(this, a1);
		}

		::System::Void SetAnimatorSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETANIMATORSPEED_OFFSET))(this, a1);
		}
	};
}
