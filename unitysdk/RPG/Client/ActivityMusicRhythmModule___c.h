#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmPhase; }
namespace RPG::Client { class MusicRhythmSong; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9C339F0)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9C33A20)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__GETALLPHASES_B__18_0_OFFSET UNITYSDK_OFFSET(0x9C33A30)
#define RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__GETALLSONGS_B__28_0_OFFSET UNITYSDK_OFFSET(0x9C33A60)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityMusicRhythmModule___c_TypeDefinitionIndex = 57006;

	class ActivityMusicRhythmModule___c : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityMusicRhythmModule___c** StaticGet___9()
		{
			return (::RPG::Client::ActivityMusicRhythmModule___c**)Il2CppClass::FromTypeDefinitionIndex(ActivityMusicRhythmModule___c_TypeDefinitionIndex)->GetStaticField(0x35130);
		}
		static ::System::Comparison_1<::RPG::Client::MusicRhythmPhase*>** StaticGet___9__18_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmPhase*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMusicRhythmModule___c_TypeDefinitionIndex)->GetStaticField(0x35138);
		}
		static ::System::Comparison_1<::RPG::Client::MusicRhythmSong*>** StaticGet___9__28_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmSong*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityMusicRhythmModule___c_TypeDefinitionIndex)->GetStaticField(0x35140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAllPhases_b__18_0(::RPG::Client::MusicRhythmPhase* a, ::RPG::Client::MusicRhythmPhase* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmPhase*, ::RPG::Client::MusicRhythmPhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__GETALLPHASES_B__18_0_OFFSET))(this, a, b);
		}

		::System::Int32 _GetAllSongs_b__28_0(::RPG::Client::MusicRhythmSong* a, ::RPG::Client::MusicRhythmSong* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmSong*, ::RPG::Client::MusicRhythmSong*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMUSICRHYTHMMODULE___C__GETALLSONGS_B__28_0_OFFSET))(this, a, b);
		}
	};
}
