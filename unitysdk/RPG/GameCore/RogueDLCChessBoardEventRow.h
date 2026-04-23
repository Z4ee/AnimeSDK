#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D09B10)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D0A1C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardEventRow_TypeDefinitionIndex = 13974;

	class RogueDLCChessBoardEventRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChessBoardEventName; // 0x10
		::System::UInt32 ChessBoardEventID; // 0x20
		::RPG::Client::TextID ChessBoardEventDesc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueDLCChessBoardEventRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueDLCChessBoardEventRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
