#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmSong; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F74960D6F261B30F_METHOD_1_5B3DAAE6F2A23086_OFFSET UNITYSDK_OFFSET(0x1767CDB0)
#define CLASS_1_F74960D6F261B30F_METHOD_1_AB33C4DD2EFD3A83_OFFSET UNITYSDK_OFFSET(0x1767D190)
#define CLASS_1_F74960D6F261B30F__CTOR_OFFSET UNITYSDK_OFFSET(0x1767D220)

inline static constexpr unsigned int Class_1_F74960D6F261B30F_TypeDefinitionIndex = 61900;

class Class_1_F74960D6F261B30F : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F74960D6F261B30F__CTOR_OFFSET))(this);
	}

	static ::RPG::Client::MusicRhythmSong* Method_1_5B3DAAE6F2A23086(::System::UInt32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*& a2)
	{
		return ((::RPG::Client::MusicRhythmSong*(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*&))((::PBYTE)hIl2Cpp + CLASS_1_F74960D6F261B30F_METHOD_1_5B3DAAE6F2A23086_OFFSET))(a1, a2);
	}

	static ::RPG::Client::MusicRhythmSong* Method_1_AB33C4DD2EFD3A83(::System::UInt32 a1)
	{
		return ((::RPG::Client::MusicRhythmSong*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F74960D6F261B30F_METHOD_1_AB33C4DD2EFD3A83_OFFSET))(a1);
	}
};
