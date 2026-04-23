#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureGameplayType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEARCADECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CEC5A0)
#define RPG_GAMECORE_ROGUEARCADECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEC750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueArcadeConfigRow_TypeDefinitionIndex = 13874;

	class RogueArcadeConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ArcadeRoomID; // 0x10
		::System::UInt32 ParamGroupID; // 0x14
		::RPG::GameCore::RogueAdventureGameplayType AdventureType; // 0x18
		::System::UInt32 ArcadeID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueArcadeConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueArcadeConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADECONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
