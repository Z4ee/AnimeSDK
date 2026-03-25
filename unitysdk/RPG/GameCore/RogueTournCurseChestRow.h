#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueTournCurseChestType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNCURSECHESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17663F20)
#define RPG_GAMECORE_ROGUETOURNCURSECHESTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17664840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCurseChestRow_TypeDefinitionIndex = 13786;

	class RogueTournCurseChestRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::GameCore::FixPoint ParamValue4; // 0x18
		::System::UInt32 MainDescDisplayID; // 0x20
		::System::UInt32 MainTitleDisplayID; // 0x24
		::System::UInt32 ChestID; // 0x28
		::System::UInt32 SubTitleDisplayID; // 0x2C
		::RPG::GameCore::FixPoint ParamValue3; // 0x30
		::RPG::GameCore::FixPoint ParamValue1; // 0x38
		::RPG::GameCore::FixPoint ParamValue2; // 0x40
		::System::UInt32 SubDescDisplayID; // 0x48
		::RPG::GameCore::RogueTournCurseChestType Type; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCURSECHESTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournCurseChestRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCurseChestRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCURSECHESTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
