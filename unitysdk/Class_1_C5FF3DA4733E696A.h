#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmSong; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C5FF3DA4733E696A_METHOD_1_10B8CC81571FAAAB_OFFSET UNITYSDK_OFFSET(0xB2253D0)
#define CLASS_1_C5FF3DA4733E696A_METHOD_1_AB33C4DD2EFD3A83_OFFSET UNITYSDK_OFFSET(0xB225850)
#define CLASS_1_C5FF3DA4733E696A__CTOR_OFFSET UNITYSDK_OFFSET(0xB2258E0)

inline static constexpr unsigned int Class_1_C5FF3DA4733E696A_TypeDefinitionIndex = 57012;

class Class_1_C5FF3DA4733E696A : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5FF3DA4733E696A__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::MusicRhythmSong* Method_1_10B8CC81571FAAAB(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*& a2)
	{
		return ((::RPG::Client::MusicRhythmSong*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*&))((::PBYTE)hIl2Cpp + CLASS_1_C5FF3DA4733E696A_METHOD_1_10B8CC81571FAAAB_OFFSET))(a1, a2);
	}

	static ::RPG::Client::MusicRhythmSong* Method_1_AB33C4DD2EFD3A83(::System::UInt32 a1)
	{
		return ((::RPG::Client::MusicRhythmSong*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C5FF3DA4733E696A_METHOD_1_AB33C4DD2EFD3A83_OFFSET))(a1);
	}
};
