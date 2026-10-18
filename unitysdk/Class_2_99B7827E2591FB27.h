#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_422F2D395BEF4FA5.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"

class Class_1_3F51724BA2A18D7F;
class Class_1_C67F599303150E7F;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_99B7827E2591FB27_METHOD_2_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x15C49560)
#define CLASS_2_99B7827E2591FB27_METHOD_2_09438F7082DE597D_OFFSET UNITYSDK_OFFSET(0x15C46480)
#define CLASS_2_99B7827E2591FB27_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x15C474D0)
#define CLASS_2_99B7827E2591FB27_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15C47520)
#define CLASS_2_99B7827E2591FB27_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x15C47C10)
#define CLASS_2_99B7827E2591FB27_METHOD_2_1D4AD167F9EF014D_OFFSET UNITYSDK_OFFSET(0x15C470F0)
#define CLASS_2_99B7827E2591FB27_METHOD_2_47EFDF992485ECD9_OFFSET UNITYSDK_OFFSET(0x15C47680)
#define CLASS_2_99B7827E2591FB27_METHOD_2_5A124CAF1E48B74F_OFFSET UNITYSDK_OFFSET(0x15C498D0)
#define CLASS_2_99B7827E2591FB27_METHOD_2_5DE6BD225DA3BCCF_OFFSET UNITYSDK_OFFSET(0x15C46EC0)
#define CLASS_2_99B7827E2591FB27_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x15C462A0)
#define CLASS_2_99B7827E2591FB27_METHOD_2_682FA2F0C959D8A1_OFFSET UNITYSDK_OFFSET(0x15C46E70)
#define CLASS_2_99B7827E2591FB27_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x15C49420)
#define CLASS_2_99B7827E2591FB27_METHOD_2_8714CF4AE9195CA2_OFFSET UNITYSDK_OFFSET(0x15C48E30)
#define CLASS_2_99B7827E2591FB27_METHOD_2_AD523E948FD9A0CF_OFFSET UNITYSDK_OFFSET(0x15C46000)
#define CLASS_2_99B7827E2591FB27_METHOD_2_F40AF41B962D2981_OFFSET UNITYSDK_OFFSET(0x15C49500)
#define CLASS_2_99B7827E2591FB27__CTOR_OFFSET UNITYSDK_OFFSET(0x15C45F30)

inline static constexpr unsigned int Class_2_99B7827E2591FB27_TypeDefinitionIndex = 60163;

class Class_2_99B7827E2591FB27 : public ::Class_1_422F2D395BEF4FA5
{
public:
	::System::String* GLEJNGEPAMA; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FIIICPCKMGM; // 0xE0
	::System::Boolean DCGJJLCOFMI; // 0xE8
	::System::Boolean NKDIFJBBIGL; // 0xE9
	::System::Boolean KEKFHONKKDL; // 0xEA
	::System::Int32 KBDPMBDJIOF; // 0xEC
	::RPG::GameCore::PuzzleCustomEvent MOAFMEGMNGJ; // 0xF0

	::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_AD523E948FD9A0CF(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_AD523E948FD9A0CF_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}

	::System::Void Method_2_09438F7082DE597D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_09438F7082DE597D_OFFSET))(this, a1);
	}

	::System::Void Method_2_1D4AD167F9EF014D(::RPG::Client::NoteInputResult a1, ::Class_1_3F51724BA2A18D7F* a2, ::Class_1_C67F599303150E7F* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::Class_1_3F51724BA2A18D7F*, ::Class_1_C67F599303150E7F*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_1D4AD167F9EF014D_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_5DE6BD225DA3BCCF(::RPG::GameCore::PuzzleCustomEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_5DE6BD225DA3BCCF_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_47EFDF992485ECD9(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_47EFDF992485ECD9_OFFSET))(this, a1);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_F40AF41B962D2981(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_F40AF41B962D2981_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_2_5A124CAF1E48B74F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_5A124CAF1E48B74F_OFFSET))(this);
	}

	::System::Single Method_2_682FA2F0C959D8A1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_682FA2F0C959D8A1_OFFSET))(this);
	}

	::System::Void Method_2_8714CF4AE9195CA2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_8714CF4AE9195CA2_OFFSET))(this);
	}

	::System::Void Method_2_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_99B7827E2591FB27_METHOD_2_146E6E50FAF07D8F_OFFSET))(this);
	}
};
