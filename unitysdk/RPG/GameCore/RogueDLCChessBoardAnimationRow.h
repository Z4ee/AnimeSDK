#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChessRogueBoardAnimationType.h"
#include "unitysdk/RPG/GameCore/ModifierEffectType.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x175FB7E0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x175FBEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardAnimationRow_TypeDefinitionIndex = 13503;

	class RogueDLCChessBoardAnimationRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ChessRogueBoardAnimationType AnimationType; // 0x10
		::RPG::GameCore::ModifierEffectType ModifierType; // 0x14
		::RPG::GameCore::RogueSubMode RogueSubMode; // 0x18
		::System::Boolean NeedCheckCoinChange; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCChessBoardAnimationRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDANIMATIONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
