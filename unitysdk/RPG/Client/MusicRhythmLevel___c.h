#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmTrack; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICRHYTHMLEVEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B71F460)
#define RPG_CLIENT_MUSICRHYTHMLEVEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71F4A0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL___C__GETTRACKS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B71F4B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmLevel___c_TypeDefinitionIndex = 61908;

	class MusicRhythmLevel___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmLevel___c_TypeDefinitionIndex)->GetStaticField(0x2A020);
		}
		static ::RPG::Client::MusicRhythmLevel___c** StaticGet___9()
		{
			return (::RPG::Client::MusicRhythmLevel___c**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmLevel___c_TypeDefinitionIndex)->GetStaticField(0x2A028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetTracks_b__6_0(::RPG::Client::MusicRhythmTrack* a1, ::RPG::Client::MusicRhythmTrack* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmTrack*, ::RPG::Client::MusicRhythmTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL___C__GETTRACKS_B__6_0_OFFSET))(this, a1, a2);
		}
	};
}
