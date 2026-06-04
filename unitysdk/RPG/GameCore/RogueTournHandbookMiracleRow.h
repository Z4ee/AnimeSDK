#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNHANDBOOKMIRACLEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BC9F10)
#define RPG_GAMECORE_ROGUETOURNHANDBOOKMIRACLEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19BCA0E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHandbookMiracleRow_TypeDefinitionIndex = 14298;

	class RogueTournHandbookMiracleRow : public ::System::Object
	{
	public:
		::System::UInt32 MiracleDisplayID; // 0x10
		::System::UInt32 UnlockDesc; // 0x14
		::System::UInt32 MiracleEffectID; // 0x18
		::System::UInt32 HandbookMiracleID; // 0x1C
		::RPG::GameCore::RogueMiracleCategory MiracleCategory; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHANDBOOKMIRACLEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournHandbookMiracleRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournHandbookMiracleRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHANDBOOKMIRACLEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
