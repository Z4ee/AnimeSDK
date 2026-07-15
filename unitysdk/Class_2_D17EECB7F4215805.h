#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_422F2D395BEF4FA5.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"

class Class_1_3F51724BA2A18D7F;
class Class_1_C67F599303150E7F;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }

#define CLASS_2_D17EECB7F4215805_METHOD_2_0A0F16311F960C37_OFFSET UNITYSDK_OFFSET(0x16735370)
#define CLASS_2_D17EECB7F4215805_METHOD_2_0CC4BC19C602BCD0_1_OFFSET UNITYSDK_OFFSET(0x16735940)
#define CLASS_2_D17EECB7F4215805_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x167358F0)
#define CLASS_2_D17EECB7F4215805_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x167350B0)
#define CLASS_2_D17EECB7F4215805_METHOD_2_5D0BCFABEB41AF6A_OFFSET UNITYSDK_OFFSET(0x167346F0)
#define CLASS_2_D17EECB7F4215805_METHOD_2_6BD820E2AD04F003_OFFSET UNITYSDK_OFFSET(0x167340E0)
#define CLASS_2_D17EECB7F4215805_METHOD_2_A3C36642AA77866E_OFFSET UNITYSDK_OFFSET(0x167343C0)
#define CLASS_2_D17EECB7F4215805_METHOD_2_BABE6D163A0ED793_OFFSET UNITYSDK_OFFSET(0x16735190)
#define CLASS_2_D17EECB7F4215805_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x16735720)
#define CLASS_2_D17EECB7F4215805__CTOR_OFFSET UNITYSDK_OFFSET(0x16734060)

inline static constexpr unsigned int Class_2_D17EECB7F4215805_TypeDefinitionIndex = 57484;

class Class_2_D17EECB7F4215805 : public ::Class_1_422F2D395BEF4FA5
{
public:
	::System::UInt32 Field_2_0; // 0xD8
	::System::Single Field_2_1; // 0xDC
	::System::UInt32 Field_2_2; // 0xE0
	::System::UInt32 Field_2_3; // 0xE4
	::System::UInt32 Field_2_4; // 0xE8
	::System::Int32 Field_2_5; // 0xEC
	::System::Single Field_2_6; // 0xF0
	::System::Single Field_2_7; // 0xF4
	::System::Single Field_2_8; // 0xF8

	::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6BD820E2AD04F003(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_6BD820E2AD04F003_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A3C36642AA77866E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_A3C36642AA77866E_OFFSET))(this);
	}

	::System::Void Method_2_5D0BCFABEB41AF6A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_5D0BCFABEB41AF6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_0A0F16311F960C37(::RPG::Client::NoteInputResult a1, ::Class_1_3F51724BA2A18D7F* a2, ::Class_1_C67F599303150E7F* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::Class_1_3F51724BA2A18D7F*, ::Class_1_C67F599303150E7F*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_0A0F16311F960C37_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
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

	::System::Void Method_2_0CC4BC19C602BCD0_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D17EECB7F4215805_METHOD_2_0CC4BC19C602BCD0_1_OFFSET))(this);
	}
};
