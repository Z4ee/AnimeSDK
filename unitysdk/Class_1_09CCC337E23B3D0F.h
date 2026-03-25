#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmGroup; }
namespace RPG::Client { class MusicRhythmLevel; }
namespace RPG::Client { class MusicRhythmPhase; }
namespace RPG::Client { class MusicRhythmSong; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_09CCC337E23B3D0F_METHOD_1_2AD49BFDAB36A22C_1_OFFSET UNITYSDK_OFFSET(0x108DFEE0)
#define CLASS_1_09CCC337E23B3D0F_METHOD_1_2AD49BFDAB36A22C_OFFSET UNITYSDK_OFFSET(0x108DE630)
#define CLASS_1_09CCC337E23B3D0F_METHOD_1_33AE4B8655CD6BC1_OFFSET UNITYSDK_OFFSET(0x108E04C0)
#define CLASS_1_09CCC337E23B3D0F_METHOD_1_9F34E55696679380_OFFSET UNITYSDK_OFFSET(0x108DF710)
#define CLASS_1_09CCC337E23B3D0F_METHOD_1_AF1B591768A0E272_OFFSET UNITYSDK_OFFSET(0x108DE5E0)
#define CLASS_1_09CCC337E23B3D0F_METHOD_1_CD07F786CC850E24_OFFSET UNITYSDK_OFFSET(0x108DF280)
#define CLASS_1_09CCC337E23B3D0F_METHOD_1_CD672631BC57BF75_OFFSET UNITYSDK_OFFSET(0x108DEAC0)
#define CLASS_1_09CCC337E23B3D0F__CTOR_OFFSET UNITYSDK_OFFSET(0x108E0990)

inline static constexpr unsigned int Class_1_09CCC337E23B3D0F_TypeDefinitionIndex = 50160;

class Class_1_09CCC337E23B3D0F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09CCC337E23B3D0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AF1B591768A0E272(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*&))((::PBYTE)hIl2Cpp + CLASS_1_09CCC337E23B3D0F_METHOD_1_AF1B591768A0E272_OFFSET))(this, a1);
	}

	::System::Void Method_1_2AD49BFDAB36A22C(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*&))((::PBYTE)hIl2Cpp + CLASS_1_09CCC337E23B3D0F_METHOD_1_2AD49BFDAB36A22C_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD672631BC57BF75(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*&))((::PBYTE)hIl2Cpp + CLASS_1_09CCC337E23B3D0F_METHOD_1_CD672631BC57BF75_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD07F786CC850E24(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*&))((::PBYTE)hIl2Cpp + CLASS_1_09CCC337E23B3D0F_METHOD_1_CD07F786CC850E24_OFFSET))(this, a1);
	}

	::System::Void Method_1_9F34E55696679380(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*&))((::PBYTE)hIl2Cpp + CLASS_1_09CCC337E23B3D0F_METHOD_1_9F34E55696679380_OFFSET))(this, a1);
	}

	::System::Void Method_1_2AD49BFDAB36A22C_1(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*&))((::PBYTE)hIl2Cpp + CLASS_1_09CCC337E23B3D0F_METHOD_1_2AD49BFDAB36A22C_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_33AE4B8655CD6BC1(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmSong*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmSong*>*&))((::PBYTE)hIl2Cpp + CLASS_1_09CCC337E23B3D0F_METHOD_1_33AE4B8655CD6BC1_OFFSET))(this, a1);
	}
};
