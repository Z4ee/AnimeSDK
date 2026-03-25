#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNMIRACLEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1766C650)
#define RPG_GAMECORE_ROGUETOURNMIRACLEGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1766C710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournMiracleGroupRow_TypeDefinitionIndex = 13758;

	class RogueTournMiracleGroupRow : public ::System::Object
	{
	public:
		::System::UInt32 RogueMiracleGroupID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournMiracleGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournMiracleGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNMIRACLEGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
