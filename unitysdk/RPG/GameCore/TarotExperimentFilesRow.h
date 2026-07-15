#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTEXPERIMENTFILESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C143120)
#define RPG_GAMECORE_TAROTEXPERIMENTFILESROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1432E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotExperimentFilesRow_TypeDefinitionIndex = 14634;

	class TarotExperimentFilesRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 VoiceID; // 0x14
		::RPG::Client::TextID Sentence; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTEXPERIMENTFILESROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TarotExperimentFilesRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotExperimentFilesRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTEXPERIMENTFILESROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
