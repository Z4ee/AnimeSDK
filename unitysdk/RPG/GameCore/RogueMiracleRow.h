#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEMIRACLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1761C250)
#define RPG_GAMECORE_ROGUEMIRACLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1761C9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMiracleRow_TypeDefinitionIndex = 13455;

	class RogueMiracleRow : public ::System::Object
	{
	public:
		::System::UInt32 MiracleDisplayID; // 0x10
		::System::UInt32 UnlockHandbookMiracleID; // 0x14
		::System::UInt32 MiracleID; // 0x18
		::System::UInt32 MiracleEffectDisplayID; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMiracleRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMiracleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMIRACLEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
