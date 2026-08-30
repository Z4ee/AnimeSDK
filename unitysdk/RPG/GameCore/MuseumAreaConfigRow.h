#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSEUMAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CE79870)
#define RPG_GAMECORE_MUSEUMAREACONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE7A010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumAreaConfigRow_TypeDefinitionIndex = 14107;

	class MuseumAreaConfigRow : public ::System::Object
	{
	public:
		::System::String* MuseumAreaHintIcon; // 0x10
		::System::String* MuseumAreaTabIcon; // 0x18
		::System::String* FirstWorldText; // 0x20
		::RPG::Client::TextID MuseumAreaName; // 0x28
		::RPG::Client::TextID AreaItemNoTextID; // 0x38
		::System::UInt32 AreaID; // 0x48

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
