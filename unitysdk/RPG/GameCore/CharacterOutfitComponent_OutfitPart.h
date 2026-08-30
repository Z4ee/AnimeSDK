#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CharacterArtModelConfig; }
namespace RPG::Client::TAUtils { class RendererSlots; }
namespace RPG::GameCore { class CharacterOutfitComponent_CharacterOutfitInstance; }
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE574FA0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0xE574F90)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_ID_OFFSET UNITYSDK_OFFSET(0xE574F80)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RESETCONFIG_1_OFFSET UNITYSDK_OFFSET(0xE575230)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RESETCONFIG_OFFSET UNITYSDK_OFFSET(0xE5750D0)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_SETUPCONFIG_1_OFFSET UNITYSDK_OFFSET(0xE575160)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_SETUPCONFIG_OFFSET UNITYSDK_OFFSET(0xE575000)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART__CTOR_OFFSET UNITYSDK_OFFSET(0xE574FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPart_TypeDefinitionIndex = 57371;

	class CharacterOutfitComponent_OutfitPart : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* Instance; // 0x10
		::System::String* _ConfigPath_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 a1, ::System::String* a2, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::GameCore::CharacterOutfitComponent_CharacterOutfitInstance*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_ID_OFFSET))(this);
		}

		::System::String* get_ConfigPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_CONFIGPATH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupConfig(::RPG::Client::CharacterArtModelConfig* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_SETUPCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void ResetConfig(::RPG::Client::CharacterArtModelConfig* a1, ::UnityEngine::Renderer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RESETCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void SetupConfig_1(::RPG::Client::CharacterArtModelConfig* a1, ::RPG::Client::TAUtils::RendererSlots* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::RPG::Client::TAUtils::RendererSlots*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_SETUPCONFIG_1_OFFSET))(this, a1, a2);
		}

		::System::Void ResetConfig_1(::RPG::Client::CharacterArtModelConfig* a1, ::RPG::Client::TAUtils::RendererSlots* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CharacterArtModelConfig*, ::RPG::Client::TAUtils::RendererSlots*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_RESETCONFIG_1_OFFSET))(this, a1, a2);
		}
	};
}
