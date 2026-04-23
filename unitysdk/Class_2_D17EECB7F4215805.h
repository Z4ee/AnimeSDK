#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C27C170A2F991DAF.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"

class Class_1_3F51724BA2A18D7F;
class Class_1_502BA065E26E8F2F;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }

#define CLASS_2_D17EECB7F4215805_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0xB4A3910)
#define CLASS_2_D17EECB7F4215805_METHOD_2_0A0F16311F960C37_OFFSET UNITYSDK_OFFSET(0xB4A3340)
#define CLASS_2_D17EECB7F4215805_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0xB4A38C0)
#define CLASS_2_D17EECB7F4215805_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xB4A3080)
#define CLASS_2_D17EECB7F4215805_METHOD_2_8DB1521E91FE64F8_OFFSET UNITYSDK_OFFSET(0xB4A3970)
#define CLASS_2_D17EECB7F4215805_METHOD_2_9009FD6FA3473A28_OFFSET UNITYSDK_OFFSET(0xB4A2180)
#define CLASS_2_D17EECB7F4215805_METHOD_2_A0E6E42D1D9DE2A4_OFFSET UNITYSDK_OFFSET(0xB4A3980)
#define CLASS_2_D17EECB7F4215805_METHOD_2_BABE6D163A0ED793_OFFSET UNITYSDK_OFFSET(0xB4A3160)
#define CLASS_2_D17EECB7F4215805_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xB4A36F0)
#define CLASS_2_D17EECB7F4215805_METHOD_2_F29D7A7F508EABE1_OFFSET UNITYSDK_OFFSET(0xB4A2490)
#define CLASS_2_D17EECB7F4215805_METHOD_2_F762974E778A9B95_OFFSET UNITYSDK_OFFSET(0xB4A2720)
#define CLASS_2_D17EECB7F4215805__CTOR_OFFSET UNITYSDK_OFFSET(0xB4A2100)

inline static constexpr unsigned int Class_2_D17EECB7F4215805_TypeDefinitionIndex = 55494;

class Class_2_D17EECB7F4215805 : public ::Class_1_C27C170A2F991DAF
{
public:
	::System::UInt32 Field_2_3; // 0xD8
	::System::Single Field_2_7; // 0xDC
	::System::UInt32 Field_2_0; // 0xE0
	::System::Single Field_2_6; // 0xE4
	::System::Single Field_2_8; // 0xE8
	::System::UInt32 Field_2_1; // 0xEC
	::System::UInt32 Field_2_2; // 0xF0
	::System::Single Field_2_5; // 0xF4
	::System::Int32 Field_2_4; // 0xF8

	::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9009FD6FA3473A28(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_9009FD6FA3473A28_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_F29D7A7F508EABE1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_F29D7A7F508EABE1_OFFSET))(this);
	}

	::System::Void Method_2_F762974E778A9B95(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_F762974E778A9B95_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A0F16311F960C37(::RPG::Client::NoteInputResult a1, ::Class_1_3F51724BA2A18D7F* a2, ::Class_1_502BA065E26E8F2F* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::Class_1_3F51724BA2A18D7F*, ::Class_1_502BA065E26E8F2F*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_0A0F16311F960C37_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_BABE6D163A0ED793(::RPG::GameCore::PuzzleCustomEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_BABE6D163A0ED793_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_078D85152011B919_OFFSET))(this);
	}

	::System::Void Method_2_8DB1521E91FE64F8(::RPG::GameCore::MusicRhythmTimelineConfig* P0, ::System::Boolean P1, ::System::Boolean P2, ::System::Boolean P3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_8DB1521E91FE64F8_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void Method_2_A0E6E42D1D9DE2A4(::RPG::GameCore::PuzzleCustomEvent P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_A0E6E42D1D9DE2A4_OFFSET))(this, P0);
	}
};
