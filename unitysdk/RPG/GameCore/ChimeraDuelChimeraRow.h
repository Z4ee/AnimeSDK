#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChimeraEyeDetailType.h"
#include "unitysdk/RPG/GameCore/ChimeraHornsPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraMaterialType.h"
#include "unitysdk/RPG/GameCore/ChimeraTailPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraWingsPartType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELCHIMERAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D59D6C0)
#define RPG_GAMECORE_CHIMERADUELCHIMERAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D59DC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraRow_TypeDefinitionIndex = 11113;

	class ChimeraDuelChimeraRow : public ::System::Object
	{
	public:
		::System::String* ModelItemMatOverride; // 0x10
		::System::String* ChimeraIconPath; // 0x18
		::System::String* EmojiPath; // 0x20
		::System::String* ChimeraHeadIconPath; // 0x28
		::RPG::Client::TextID ChimeraName; // 0x30
		::System::Int32 BaseHp; // 0x40
		::RPG::GameCore::ChimeraHornsPartType ModelHorn; // 0x44
		::RPG::GameCore::ChimeraWingsPartType ModelWing; // 0x48
		::RPG::GameCore::ChimeraMaterialType ModelBody; // 0x4C
		::RPG::GameCore::ChimeraTailPartType ModelTail; // 0x50
		::System::UInt32 Rarity; // 0x54
		::System::UInt32 Price; // 0x58
		::RPG::GameCore::ChimeraEyeDetailType ModelEye; // 0x5C
		::System::Int32 BaseAttack; // 0x60
		::System::UInt32 ChimeraID; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelChimeraRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
