#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class CharacterModelComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA8BE040)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_CONFIGPATH_OFFSET UNITYSDK_OFFSET(0xA8BE030)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART_GET_ID_OFFSET UNITYSDK_OFFSET(0xA8BE020)
#define RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART__CTOR_OFFSET UNITYSDK_OFFSET(0xA8BE090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterOutfitComponent_OutfitPart_TypeDefinitionIndex = 46065;

	class CharacterOutfitComponent_OutfitPart : public ::System::Object
	{
	public:
		::RPG::GameCore::CharacterModelComponent* ModelComp; // 0x10
		::System::String* _ConfigPath_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20

		::System::Void _ctor(::System::UInt32 id, ::System::String* configPath, ::RPG::GameCore::CharacterModelComponent* modelComp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::RPG::GameCore::CharacterModelComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTEROUTFITCOMPONENT_OUTFITPART__CTOR_OFFSET))(this, id, configPath, modelComp);
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
	};
}
