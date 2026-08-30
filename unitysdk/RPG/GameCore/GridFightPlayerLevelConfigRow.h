#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }

#define RPG_GAMECORE_GRIDFIGHTPLAYERLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE728A0)
#define RPG_GAMECORE_GRIDFIGHTPLAYERLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE72BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPlayerLevelConfigRow_TypeDefinitionIndex = 13304;

	class GridFightPlayerLevelConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* GeneralPropertyList; // 0x10
		::System::UInt32 Rarity1Weight; // 0x18
		::System::UInt32 LevelUpExp; // 0x1C
		::System::UInt32 Rarity4Weight; // 0x20
		::System::UInt32 Rarity3Weight; // 0x24
		::System::UInt32 AvatarMaxNumber; // 0x28
		::System::UInt32 Rarity2Weight; // 0x2C
		::System::UInt32 Rarity5Weight; // 0x30
		::System::UInt32 PlayerLevel; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPLAYERLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightPlayerLevelConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightPlayerLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPLAYERLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
