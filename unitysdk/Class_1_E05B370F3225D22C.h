#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MusicRhythmGroup; }
namespace RPG::Client { class MusicRhythmLevel; }
namespace RPG::Client { class MusicRhythmPhase; }
namespace RPG::Client { class MusicRhythmSong; }
namespace RPG::Client { class MusicRhythmTrack; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E05B370F3225D22C_METHOD_1_4B410015926B2F63_OFFSET UNITYSDK_OFFSET(0xA7A7990)
#define CLASS_1_E05B370F3225D22C_METHOD_1_94B4D7B11556B547_OFFSET UNITYSDK_OFFSET(0xA7A8C30)
#define CLASS_1_E05B370F3225D22C_METHOD_1_95D3B82B3F2C581B_OFFSET UNITYSDK_OFFSET(0xA7A86F0)
#define CLASS_1_E05B370F3225D22C_METHOD_1_AF1B591768A0E272_OFFSET UNITYSDK_OFFSET(0xA7A7940)
#define CLASS_1_E05B370F3225D22C_METHOD_1_E9C698A3FF84052A_OFFSET UNITYSDK_OFFSET(0xA7A9A70)
#define CLASS_1_E05B370F3225D22C_METHOD_1_EEEF06E9CD78519A_OFFSET UNITYSDK_OFFSET(0xA7A7ED0)
#define CLASS_1_E05B370F3225D22C_METHOD_1_F71C566E8AAF22B5_OFFSET UNITYSDK_OFFSET(0xA7A9450)
#define CLASS_1_E05B370F3225D22C__CTOR_OFFSET UNITYSDK_OFFSET(0xA7A9FF0)

inline static constexpr unsigned int Class_1_E05B370F3225D22C_TypeDefinitionIndex = 57794;

class Class_1_E05B370F3225D22C : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E05B370F3225D22C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AF1B591768A0E272(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E05B370F3225D22C_METHOD_1_AF1B591768A0E272_OFFSET))(this, a1);
	}

	::System::Void Method_1_4B410015926B2F63(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E05B370F3225D22C_METHOD_1_4B410015926B2F63_OFFSET))(this, a1);
	}

	::System::Void Method_1_EEEF06E9CD78519A(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmLevel*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E05B370F3225D22C_METHOD_1_EEEF06E9CD78519A_OFFSET))(this, a1);
	}

	::System::Void Method_1_95D3B82B3F2C581B(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmTrack*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E05B370F3225D22C_METHOD_1_95D3B82B3F2C581B_OFFSET))(this, a1);
	}

	::System::Void Method_1_94B4D7B11556B547(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmPhase*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E05B370F3225D22C_METHOD_1_94B4D7B11556B547_OFFSET))(this, a1);
	}

	::System::Void Method_1_F71C566E8AAF22B5(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmGroup*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E05B370F3225D22C_METHOD_1_F71C566E8AAF22B5_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9C698A3FF84052A(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmSong*>*& a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MusicRhythmSong*>*&))((::PBYTE)hIl2Cpp + CLASS_1_E05B370F3225D22C_METHOD_1_E9C698A3FF84052A_OFFSET))(this, a1);
	}
};
