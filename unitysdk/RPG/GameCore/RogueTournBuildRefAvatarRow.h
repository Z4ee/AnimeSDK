#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D6E1F0)
#define RPG_GAMECORE_ROGUETOURNBUILDREFAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D6E7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuildRefAvatarRow_TypeDefinitionIndex = 14205;

	class RogueTournBuildRefAvatarRow : public ::System::Object
	{
	public:
		::System::UInt32 SortWeight; // 0x10
		::System::UInt32 AvatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournBuildRefAvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournBuildRefAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUILDREFAVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
