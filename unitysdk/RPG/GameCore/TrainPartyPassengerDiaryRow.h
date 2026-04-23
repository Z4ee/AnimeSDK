#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190ACB80)
#define RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190ACCE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyPassengerDiaryRow_TypeDefinitionIndex = 14530;

	class TrainPartyPassengerDiaryRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID DiaryText; // 0x10
		::System::UInt32 DiaryID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TrainPartyPassengerDiaryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyPassengerDiaryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYPASSENGERDIARYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
