#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKENERGYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18EFB530)
#define RPG_GAMECORE_TAROTBOOKENERGYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18EFB770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookEnergyRow_TypeDefinitionIndex = 14443;

	class TarotBookEnergyRow : public ::System::Object
	{
	public:
		::System::Boolean IsSilence; // 0x10
		::System::Boolean IsRepetitive; // 0x11
		::System::UInt32 SubmissionID; // 0x14
		::RPG::Client::TextID Toast; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKENERGYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotBookEnergyRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookEnergyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKENERGYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
