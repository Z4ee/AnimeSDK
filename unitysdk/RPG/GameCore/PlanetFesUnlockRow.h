#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PLANETFESUNLOCKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BA01B80)
#define RPG_GAMECORE_PLANETFESUNLOCKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA01D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesUnlockRow_TypeDefinitionIndex = 11761;

	class PlanetFesUnlockRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockDesc; // 0x10
		::System::UInt32 FinishWayID; // 0x20
		::System::UInt32 UnlockID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESUNLOCKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PlanetFesUnlockRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlanetFesUnlockRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESUNLOCKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
