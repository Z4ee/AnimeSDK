#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGTRACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B2E4D30)
#define RPG_GAMECORE_B51RACINGTRACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2E50E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingTrackRow_TypeDefinitionIndex = 10944;

	class B51RacingTrackRow : public ::System::Object
	{
	public:
		::System::String* MinimapPath; // 0x10
		::System::String* RecordDriverIconPath; // 0x18
		::System::String* LittleGameConfig; // 0x20
		::System::String* MinimapPath_Dark; // 0x28
		::System::Single RecordTime; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 TotalLap; // 0x48
		::RPG::Client::TextID RecordDriverName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTRACKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::B51RacingTrackRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::B51RacingTrackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGTRACKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
