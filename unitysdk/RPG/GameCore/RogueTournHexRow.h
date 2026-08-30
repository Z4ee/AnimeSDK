#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNHEXROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CCC7470)
#define RPG_GAMECORE_ROGUETOURNHEXROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCC7710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHexRow_TypeDefinitionIndex = 14860;

	class RogueTournHexRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffect; // 0x10
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* AvatarType; // 0x18
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* AvatarDamageType; // 0x20
		::System::UInt32 HexID; // 0x28
		::System::UInt32 DisplayID; // 0x2C
		::RPG::GameCore::RogueTournMode TournMode; // 0x30
		::System::UInt32 MazeBuffID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournHexRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournHexRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
