#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B6A060)
#define RPG_GAMECORE_MUSEUMAREACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18B6A7E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaConfigRow_TypeDefinitionIndex = 13471;

	class MuseumAreaConfigRow : public ::System::Object
	{
	public:
		::System::String* FirstWorldText; // 0x10
		::System::String* MuseumAreaTabIcon; // 0x18
		::System::String* MuseumAreaHintIcon; // 0x20
		::System::UInt32 AreaID; // 0x28
		::RPG::Client::TextID MuseumAreaName; // 0x30
		::RPG::Client::TextID AreaItemNoTextID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MuseumAreaConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumAreaConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
