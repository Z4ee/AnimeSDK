#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1765D780)
#define RPG_GAMECORE_ROGUETOURNAVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1765D870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournAvatarRow_TypeDefinitionIndex = 13736;

	class RogueTournAvatarRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 SpecialAvatarID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNAVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournAvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournAvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNAVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
