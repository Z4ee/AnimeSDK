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

#define RPG_GAMECORE_CHIMERADUELCHIMERAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187F78B0)
#define RPG_GAMECORE_CHIMERADUELCHIMERAROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187F7DF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelChimeraRow_TypeDefinitionIndex = 10616;

	class ChimeraDuelChimeraRow : public ::System::Object
	{
	public:
		::System::String* EmojiPath; // 0x10
		::System::String* ChimeraHeadIconPath; // 0x18
		::System::String* ModelItemMatOverride; // 0x20
		::System::String* ChimeraIconPath; // 0x28
		::RPG::GameCore::ChimeraEyeDetailType ModelEye; // 0x30
		::System::Int32 BaseHp; // 0x34
		::RPG::GameCore::ChimeraMaterialType ModelBody; // 0x38
		::System::UInt32 ChimeraID; // 0x3C
		::System::UInt32 Rarity; // 0x40
		::RPG::GameCore::ChimeraWingsPartType ModelWing; // 0x44
		::RPG::GameCore::ChimeraHornsPartType ModelHorn; // 0x48
		::RPG::GameCore::ChimeraTailPartType ModelTail; // 0x4C
		::RPG::Client::TextID ChimeraName; // 0x50
		::System::UInt32 Price; // 0x60
		::System::Int32 BaseAttack; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelChimeraRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelChimeraRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCHIMERAROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
