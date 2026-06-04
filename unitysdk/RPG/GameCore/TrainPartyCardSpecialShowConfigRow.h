#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCARDSPECIALSHOWCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19DF3310)
#define RPG_GAMECORE_TRAINPARTYCARDSPECIALSHOWCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19DF35F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCardSpecialShowConfigRow_TypeDefinitionIndex = 14552;

	class TrainPartyCardSpecialShowConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PreShowGridNum; // 0x10
		::System::UInt32 CardID; // 0x14
		::RPG::Client::TextID SpecialShowDesc; // 0x18
		::RPG::Client::TextID OverWriteTips; // 0x28
		::RPG::Client::TextID SpecialShowTitle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDSPECIALSHOWCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCardSpecialShowConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCARDSPECIALSHOWCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
