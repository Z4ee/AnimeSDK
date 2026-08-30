#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNHEXDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D48A330)
#define RPG_GAMECORE_ROGUETOURNHEXDISPLAYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48A5B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHexDisplayRow_TypeDefinitionIndex = 14862;

	class RogueTournHexDisplayRow : public ::System::Object
	{
	public:
		::System::String* FigureIconPath; // 0x10
		::System::String* IconPath; // 0x18
		::RPG::Client::TextID BgDesc; // 0x20
		::System::UInt32 HexDisplayID; // 0x30
		::RPG::Client::TextID Name; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXDISPLAYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournHexDisplayRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournHexDisplayRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
