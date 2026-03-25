#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17468E80)
#define RPG_GAMECORE_MUSICRHYTHMPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17469100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmPhaseRow_TypeDefinitionIndex = 13061;

	class MusicRhythmPhaseRow : public ::System::Object
	{
	public:
		::System::String* PostImgPath; // 0x10
		::Il2CppArray<::System::UInt32>* TrackIDList; // 0x18
		::System::UInt32 FinishMissionID; // 0x20
		::System::UInt32 Phase; // 0x24
		::System::UInt32 SongID; // 0x28
		::RPG::Client::TextID LiveName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MusicRhythmPhaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPHASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
