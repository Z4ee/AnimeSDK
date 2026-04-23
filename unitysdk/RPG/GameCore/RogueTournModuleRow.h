#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNMODULEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D7B0D0)
#define RPG_GAMECORE_ROGUETOURNMODULEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D7B210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournModuleRow_TypeDefinitionIndex = 14147;

	class RogueTournModuleRow : public ::System::Object
	{
	public:
		::System::UInt32 MainTournID; // 0x10
		::System::UInt32 SubTournID; // 0x14
		::System::UInt32 ActivityModuleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODULEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournModuleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournModuleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMODULEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
