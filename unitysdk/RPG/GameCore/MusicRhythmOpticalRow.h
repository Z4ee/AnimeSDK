#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MUSICRHYTHMOPTICALROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2EB2A0)
#define RPG_GAMECORE_MUSICRHYTHMOPTICALROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EB540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmOpticalRow_TypeDefinitionIndex = 14166;

	class MusicRhythmOpticalRow : public ::System::Object
	{
	public:
		::System::UInt32 Type; // 0x10
		::System::UInt32 RealProgress; // 0x14
		::System::UInt32 GotoConfig; // 0x18
		::System::UInt32 QuestID; // 0x1C
		::RPG::Client::TextID Progress; // 0x20
		::System::UInt32 MainMissionID; // 0x30
		::System::UInt32 ActivityModuleID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMOPTICALROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmOpticalRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmOpticalRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMOPTICALROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
