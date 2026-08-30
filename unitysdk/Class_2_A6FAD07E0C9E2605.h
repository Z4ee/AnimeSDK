#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_422F2D395BEF4FA5.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"

class Class_1_3F51724BA2A18D7F;
class Class_1_C67F599303150E7F;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_A6FAD07E0C9E2605_METHOD_2_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0xDD93C80)
#define CLASS_2_A6FAD07E0C9E2605_METHOD_2_3BFE3B9EF8374F61_OFFSET UNITYSDK_OFFSET(0xDD940B0)
#define CLASS_2_A6FAD07E0C9E2605_METHOD_2_5D0BCFABEB41AF6A_OFFSET UNITYSDK_OFFSET(0xDD932E0)
#define CLASS_2_A6FAD07E0C9E2605_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0xDD92C60)
#define CLASS_2_A6FAD07E0C9E2605_METHOD_2_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xDD92F80)
#define CLASS_2_A6FAD07E0C9E2605_METHOD_2_848EF232ABA55F2A_OFFSET UNITYSDK_OFFSET(0xDD93E30)
#define CLASS_2_A6FAD07E0C9E2605_METHOD_2_8754E829AC664E5E_OFFSET UNITYSDK_OFFSET(0xDD93D60)
#define CLASS_2_A6FAD07E0C9E2605_METHOD_2_9781C7D655F75A69_OFFSET UNITYSDK_OFFSET(0xDD94100)
#define CLASS_2_A6FAD07E0C9E2605_METHOD_2_D6CB0E4FF045AA06_OFFSET UNITYSDK_OFFSET(0xDD927F0)
#define CLASS_2_A6FAD07E0C9E2605__CTOR_OFFSET UNITYSDK_OFFSET(0xDD92740)

inline static constexpr unsigned int Class_2_A6FAD07E0C9E2605_TypeDefinitionIndex = 60300;

class Class_2_A6FAD07E0C9E2605 : public ::Class_1_422F2D395BEF4FA5
{
public:
	::System::Collections::Generic::List_1<::System::Single>* DAAEFLHHLHD; // 0xD8
	::System::Boolean IMHEHDAKCKL; // 0xE0
	::System::Single BACBMLFMCPB; // 0xE4
	::System::Single BJPICNDLGGD; // 0xE8
	::System::Single GCGGPMBHDHA; // 0xEC
	::System::Single FANEHJNKNOK; // 0xF0

	::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_D6CB0E4FF045AA06(::RPG::GameCore::MusicRhythmTimelineConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605_METHOD_2_D6CB0E4FF045AA06_OFFSET))(this, a1);
	}

	::System::Void Method_2_6BA7BB45F0BA72F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605_METHOD_2_6BA7BB45F0BA72F4_OFFSET))(this);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Void Method_2_5D0BCFABEB41AF6A(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605_METHOD_2_5D0BCFABEB41AF6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_848EF232ABA55F2A(::RPG::Client::NoteInputResult a1, ::Class_1_3F51724BA2A18D7F* a2, ::Class_1_C67F599303150E7F* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::Class_1_3F51724BA2A18D7F*, ::Class_1_C67F599303150E7F*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605_METHOD_2_848EF232ABA55F2A_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_8754E829AC664E5E(::RPG::GameCore::PuzzleCustomEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605_METHOD_2_8754E829AC664E5E_OFFSET))(this, a1);
	}

	::System::Single Method_2_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605_METHOD_2_3422201382CE593B_OFFSET))(this);
	}

	::System::Void Method_2_3BFE3B9EF8374F61()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605_METHOD_2_3BFE3B9EF8374F61_OFFSET))(this);
	}

	::System::Void Method_2_9781C7D655F75A69(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_A6FAD07E0C9E2605_METHOD_2_9781C7D655F75A69_OFFSET))(this, a1);
	}
};
