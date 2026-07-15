#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MUSICRHYTHMPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1BAEE470)
#define RPG_GAMECORE_MUSICRHYTHMPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAEE6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MusicRhythmPhaseRow_TypeDefinitionIndex = 13741;

	class MusicRhythmPhaseRow : public ::System::Object
	{
	public:
		::System::String* PostImgPath; // 0x10
		::Il2CppArray<::System::UInt32>* TrackIDList; // 0x18
		::RPG::Client::TextID LiveName; // 0x20
		::System::UInt32 Phase; // 0x30
		::System::UInt32 SongID; // 0x34
		::System::UInt32 FinishMissionID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MusicRhythmPhaseRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MusicRhythmPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSICRHYTHMPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
