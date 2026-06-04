#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterOutfitComponent_OutfitPart.h"

namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace RPG::GameCore { class CharacterOutfitComponent_OutfitPart_PendantInstance; }
namespace RPG::GameCore { class CharacterOutfitPendantConfig; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_APPLY_OFFSET UNITYSDK_OFFSET(0xCD6F770)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD6F3B0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_LOAD_OFFSET UNITYSDK_OFFSET(0xCD6F620)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_POSTAPPLY_OFFSET UNITYSDK_OFFSET(0xCD6FDA0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_REMOVE_OFFSET UNITYSDK_OFFSET(0xCD70410)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_RESETSPRINGBONE_OFFSET UNITYSDK_OFFSET(0xCD6D450)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETANIMATORSPEED_OFFSET UNITYSDK_OFFSET(0xCD6D650)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETUP_OFFSET UNITYSDK_OFFSET(0xCD6E8A0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT__CTOR_OFFSET UNITYSDK_OFFSET(0xCD6E890)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCD70B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPart_Pendant_TypeDefinitionIndex = 53437;

	class CharacterOutfitComponent_OutfitPart_Pendant : public ::RPG::GameCore::CharacterOutfitComponent_OutfitPart
	{
	public:
		::RPG::GameCore::CharacterOutfitPendantConfig* Config; // 0x28
		::Il2CppArray<::RPG::GameCore::CharacterOutfitComponent_OutfitPart_PendantInstance*>* PendantInstances; // 0x30

		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Setup(::RPG::GameCore::CharacterOutfitPendantConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterOutfitPendantConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT_SETUP_OFFSET))(this, a1);
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

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_PENDANT___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
