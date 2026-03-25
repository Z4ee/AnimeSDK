#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TAROTEXPERIMENTFILESROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x177D7340)
#define RPG_GAMECORE_TAROTEXPERIMENTFILESROW__CTOR_OFFSET UNITYSDK_OFFSET(0x177D7500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotExperimentFilesRow_TypeDefinitionIndex = 13978;

	class TarotExperimentFilesRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Sentence; // 0x10
		::System::UInt32 VoiceID; // 0x20
		::System::UInt32 ID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTEXPERIMENTFILESROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::TarotExperimentFilesRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TarotExperimentFilesRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTEXPERIMENTFILESROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
