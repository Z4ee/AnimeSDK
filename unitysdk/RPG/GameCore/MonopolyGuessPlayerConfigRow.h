#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19960FB0)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199616D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGuessPlayerConfigRow_TypeDefinitionIndex = 11511;

	class MonopolyGuessPlayerConfigRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 GuessPlayerID; // 0x28
		::RPG::Client::TextID Desc; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonopolyGuessPlayerConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonopolyGuessPlayerConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
