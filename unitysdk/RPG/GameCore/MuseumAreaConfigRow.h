#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199B9370)
#define RPG_GAMECORE_MUSEUMAREACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199B9B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaConfigRow_TypeDefinitionIndex = 13542;

	class MuseumAreaConfigRow : public ::System::Object
	{
	public:
		::System::String* FirstWorldText; // 0x10
		::System::String* MuseumAreaHintIcon; // 0x18
		::System::String* MuseumAreaTabIcon; // 0x20
		::RPG::Client::TextID MuseumAreaName; // 0x28
		::System::UInt32 AreaID; // 0x38
		::RPG::Client::TextID AreaItemNoTextID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MuseumAreaConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MuseumAreaConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMAREACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
