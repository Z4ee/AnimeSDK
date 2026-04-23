#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCARDSPECIALSHOWCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190A8750)
#define RPG_GAMECORE_TRAINPARTYCARDSPECIALSHOWCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190A8A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCardSpecialShowConfigRow_TypeDefinitionIndex = 14526;

	class TrainPartyCardSpecialShowConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID SpecialShowDesc; // 0x10
		::RPG::Client::TextID SpecialShowTitle; // 0x20
		::RPG::Client::TextID OverWriteTips; // 0x30
		::System::UInt32 PreShowGridNum; // 0x40
		::System::UInt32 CardID; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDSPECIALSHOWCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDSPECIALSHOWCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
