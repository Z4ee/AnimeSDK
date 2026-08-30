#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMTRACKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D2ECAE0)
#define RPG_GAMECORE_MUSICRHYTHMTRACKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2ECD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmTrackRow_TypeDefinitionIndex = 14164;

	class MusicRhythmTrackRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* EmptyGridList; // 0x18
		::RPG::Client::TextID TrackName; // 0x20
		::System::UInt32 ID; // 0x30
		::System::UInt32 UnlockSubMissionID; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTRACKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmTrackRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmTrackRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMTRACKROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
