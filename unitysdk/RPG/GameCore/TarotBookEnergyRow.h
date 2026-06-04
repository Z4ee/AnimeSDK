#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTBOOKENERGYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19D30A80)
#define RPG_GAMECORE_TAROTBOOKENERGYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19D30CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookEnergyRow_TypeDefinitionIndex = 14471;

	class TarotBookEnergyRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Toast; // 0x10
		::System::UInt32 SubmissionID; // 0x20
		::System::Boolean IsRepetitive; // 0x24
		::System::Boolean IsSilence; // 0x25

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKENERGYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotBookEnergyRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotBookEnergyRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTBOOKENERGYROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
