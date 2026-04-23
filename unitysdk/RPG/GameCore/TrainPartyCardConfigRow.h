#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYCARDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A8360)
#define RPG_GAMECORE_TRAINPARTYCARDCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190A8630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCardConfigRow_TypeDefinitionIndex = 14524;

	class TrainPartyCardConfigRow : public ::System::Object
	{
	public:
		::System::String* CardActJson; // 0x10
		::System::String* CardImage; // 0x18
		::System::String* CardEffectJson; // 0x20
		::RPG::Client::TextID CardName; // 0x28
		::System::UInt32 PassengerID; // 0x38
		::System::UInt32 Rarity; // 0x3C
		::System::UInt32 CardID; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyCardConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCardConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
