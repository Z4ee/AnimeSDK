#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmGroup; }
namespace RPG::Client { class MusicRhythmLevel; }
namespace RPG::Client { class MusicRhythmPhase; }
namespace RPG::Client { class MusicRhythmSong; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2B833442F649E5E2_METHOD_1_33AE4B8655CD6BC1_OFFSET UNITYSDK_OFFSET(0x18BB3690)
#define CLASS_1_2B833442F649E5E2_METHOD_1_4948D8B120954523_OFFSET UNITYSDK_OFFSET(0x18BB1870)
#define CLASS_1_2B833442F649E5E2_METHOD_1_4B410015926B2F63_OFFSET UNITYSDK_OFFSET(0x18BB1300)
#define CLASS_1_2B833442F649E5E2_METHOD_1_6F15045316A8C0DA_OFFSET UNITYSDK_OFFSET(0x18BB2FA0)
#define CLASS_1_2B833442F649E5E2_METHOD_1_94B4D7B11556B547_OFFSET UNITYSDK_OFFSET(0x18BB26C0)
#define CLASS_1_2B833442F649E5E2_METHOD_1_95D3B82B3F2C581B_OFFSET UNITYSDK_OFFSET(0x18BB2150)
#define CLASS_1_2B833442F649E5E2_METHOD_1_AF1B591768A0E272_OFFSET UNITYSDK_OFFSET(0x18BB12B0)
#define CLASS_1_2B833442F649E5E2__CTOR_OFFSET UNITYSDK_OFFSET(0x18BB3B70)

inline static constexpr unsigned int Class_1_2B833442F649E5E2_TypeDefinitionIndex = 61895;

class Class_1_2B833442F649E5E2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* HBFGLENMBOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B833442F649E5E2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AF1B591768A0E272(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2B833442F649E5E2_METHOD_1_AF1B591768A0E272_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B410015926B2F63(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2B833442F649E5E2_METHOD_1_4B410015926B2F63_OFFSET))(this, a1);
	}

	::System::Void Method_1_4948D8B120954523(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2B833442F649E5E2_METHOD_1_4948D8B120954523_OFFSET))(this, a1);
	}

	::System::Void Method_1_95D3B82B3F2C581B(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2B833442F649E5E2_METHOD_1_95D3B82B3F2C581B_OFFSET))(this, a1);
	}

	::System::Void Method_1_94B4D7B11556B547(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2B833442F649E5E2_METHOD_1_94B4D7B11556B547_OFFSET))(this, a1);
	}

	::System::Void Method_1_6F15045316A8C0DA(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2B833442F649E5E2_METHOD_1_6F15045316A8C0DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_33AE4B8655CD6BC1(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmSong*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmSong*>*&))((::PBYTE)hIl2Cpp + CLASS_1_2B833442F649E5E2_METHOD_1_33AE4B8655CD6BC1_OFFSET))(this, a1);
	}
};
