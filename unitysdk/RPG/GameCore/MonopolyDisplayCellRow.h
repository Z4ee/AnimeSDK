#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyDisplayCellType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYDISPLAYCELLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2BB580)
#define RPG_GAMECORE_MONOPOLYDISPLAYCELLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2BB860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyDisplayCellRow_TypeDefinitionIndex = 11971;

	class MonopolyDisplayCellRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID CellDesc; // 0x18
		::System::UInt32 DisplaySort; // 0x28
		::RPG::GameCore::MonopolyDisplayCellType Type; // 0x2C
		::RPG::Client::TextID CellName; // 0x30
		::System::UInt32 DisplayID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDISPLAYCELLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyDisplayCellRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyDisplayCellRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDISPLAYCELLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
