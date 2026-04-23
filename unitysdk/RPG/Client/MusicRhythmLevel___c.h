#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmTrack; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MUSICRHYTHMLEVEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAB1AFA0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1AFE0)
#define RPG_CLIENT_MUSICRHYTHMLEVEL___C__GETTRACKS_B__6_0_OFFSET UNITYSDK_OFFSET(0xAB1AFF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MusicRhythmLevel___c_TypeDefinitionIndex = 57020;

	class MusicRhythmLevel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MusicRhythmLevel___c** StaticGet___9()
		{
			return (::RPG::Client::MusicRhythmLevel___c**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmLevel___c_TypeDefinitionIndex)->GetStaticField(0x4B470);
		}
		static ::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::RPG::Client::MusicRhythmTrack*>**)Il2CppClass::FromTypeDefinitionIndex(MusicRhythmLevel___c_TypeDefinitionIndex)->GetStaticField(0x4B478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetTracks_b__6_0(::RPG::Client::MusicRhythmTrack* a, ::RPG::Client::MusicRhythmTrack* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MusicRhythmTrack*, ::RPG::Client::MusicRhythmTrack*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MUSICRHYTHMLEVEL___C__GETTRACKS_B__6_0_OFFSET))(this, a, b);
		}
	};
}
