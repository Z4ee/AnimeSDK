#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9257B0)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D925E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardEventRow_TypeDefinitionIndex = 14607;

	class RogueDLCChessBoardEventRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChessBoardEventName; // 0x10
		::RPG::Client::TextID ChessBoardEventDesc; // 0x20
		::System::UInt32 ChessBoardEventID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueDLCChessBoardEventRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCChessBoardEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
