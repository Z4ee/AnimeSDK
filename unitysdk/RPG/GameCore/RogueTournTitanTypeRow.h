#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTitanCategory.h"
#include "unitysdk/RPG/GameCore/RogueTitanType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNTITANTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CCCC8A0)
#define RPG_GAMECORE_ROGUETOURNTITANTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCCD120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournTitanTypeRow_TypeDefinitionIndex = 14907;

	class RogueTournTitanTypeRow : public ::System::Object
	{
	public:
		::System::String* RogueTitanCardIcon; // 0x10
		::System::String* RogueTitanTalentIcon; // 0x18
		::System::String* RogueTitanCardShadowIcon; // 0x20
		::System::String* RogueTitanAvatarRoundIconMid; // 0x28
		::System::String* RogueTitanAvatarRoundIconSmall; // 0x30
		::RPG::Client::TextID TitanTitle; // 0x38
		::RPG::Client::TextID CharacterName; // 0x48
		::RPG::GameCore::RogueTitanCategory RogueTitanCategory; // 0x58
		::RPG::GameCore::RogueTitanType RogueTitanType; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournTitanTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournTitanTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNTITANTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
