#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D533CD0)
#define RPG_GAMECORE_TRAINPARTYCARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D533FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCardConfigRow_TypeDefinitionIndex = 15145;

	class TrainPartyCardConfigRow : public ::System::Object
	{
	public:
		::System::String* CardActJson; // 0x10
		::System::String* CardEffectJson; // 0x18
		::System::String* CardImage; // 0x20
		::System::UInt32 Rarity; // 0x28
		::System::UInt32 CardID; // 0x2C
		::RPG::Client::TextID CardName; // 0x30
		::System::UInt32 PassengerID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCardConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
