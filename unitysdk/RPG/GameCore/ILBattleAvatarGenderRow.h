#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ILBATTLEAVATARGENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0AB30)
#define RPG_GAMECORE_ILBATTLEAVATARGENDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0AC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarGenderRow_TypeDefinitionIndex = 13061;

	class ILBattleAvatarGenderRow : public ::System::Object
	{
	public:
		::System::UInt32 BoyAvatarID; // 0x10
		::System::UInt32 GirlAvatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARGENDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ILBattleAvatarGenderRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleAvatarGenderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARGENDERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
