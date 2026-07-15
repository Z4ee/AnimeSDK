#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ILBATTLEAVATARGENDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B68F6B0)
#define RPG_GAMECORE_ILBATTLEAVATARGENDERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B68F7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarGenderRow_TypeDefinitionIndex = 13290;

	class ILBattleAvatarGenderRow : public ::System::Object
	{
	public:
		::System::UInt32 GirlAvatarID; // 0x10
		::System::UInt32 BoyAvatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARGENDERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILBattleAvatarGenderRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleAvatarGenderRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARGENDERROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
