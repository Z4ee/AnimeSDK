#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C27C170A2F991DAF.h"
#include "unitysdk/RPG/Client/NoteInputResult.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"

class Class_1_3F51724BA2A18D7F;
class Class_1_502BA065E26E8F2F;
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class MusicRhythmTimelineConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_08BBACE844405300_OFFSET UNITYSDK_OFFSET(0x1288AC40)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_09438F7082DE597D_OFFSET UNITYSDK_OFFSET(0x12886FD0)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x12888810)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x12888860)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x12889070)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_23E3A0FF00BCBD7D_OFFSET UNITYSDK_OFFSET(0x12886B20)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_5DE6BD225DA3BCCF_OFFSET UNITYSDK_OFFSET(0x12887A40)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_682FA2F0C959D8A1_OFFSET UNITYSDK_OFFSET(0x128879F0)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_6E10DBA521A04356_OFFSET UNITYSDK_OFFSET(0x1288A490)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x1288AB00)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x1288B030)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_8DB1521E91FE64F8_OFFSET UNITYSDK_OFFSET(0x1288B1E0)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_A0E6E42D1D9DE2A4_OFFSET UNITYSDK_OFFSET(0x1288B1F0)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_AA8350C5FC5D15F6_OFFSET UNITYSDK_OFFSET(0x12887C60)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_BDDBE2FD9A9FFA54_OFFSET UNITYSDK_OFFSET(0x128889C0)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_E41B6A823556FEEA_OFFSET UNITYSDK_OFFSET(0x12886E50)
#define CLASS_2_8B83C6DDD0E3F048_METHOD_2_FFE24DF54B83FB77_OFFSET UNITYSDK_OFFSET(0x1288ABE0)
#define CLASS_2_8B83C6DDD0E3F048__CTOR_OFFSET UNITYSDK_OFFSET(0x12886A50)

inline static constexpr unsigned int Class_2_8B83C6DDD0E3F048_TypeDefinitionIndex = 55492;

class Class_2_8B83C6DDD0E3F048 : public ::Class_1_C27C170A2F991DAF
{
public:
	::System::String* Field_2_3; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_2_5; // 0xE0
	::System::Int32 Field_2_4; // 0xE8
	::System::Boolean Field_2_1; // 0xEC
	::System::Boolean Field_2_2; // 0xED
	::System::Boolean Field_2_0; // 0xEE
	::RPG::GameCore::PuzzleCustomEvent Field_2_6; // 0xF0

	::System::Void _ctor(::RPG::Client::MusicRhythmBoard* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MusicRhythmBoard*))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_23E3A0FF00BCBD7D(::RPG::GameCore::MusicRhythmTimelineConfig* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_23E3A0FF00BCBD7D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_E41B6A823556FEEA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_E41B6A823556FEEA_OFFSET))(this);
	}

	::System::Void Method_2_09438F7082DE597D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_09438F7082DE597D_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA8350C5FC5D15F6(::RPG::Client::NoteInputResult a1, ::Class_1_3F51724BA2A18D7F* a2, ::Class_1_502BA065E26E8F2F* a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Boolean a7, ::System::Boolean a8, ::System::Boolean a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NoteInputResult, ::Class_1_3F51724BA2A18D7F*, ::Class_1_502BA065E26E8F2F*, ::System::Single, ::System::Single, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_AA8350C5FC5D15F6_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	::System::Void Method_2_5DE6BD225DA3BCCF(::RPG::GameCore::PuzzleCustomEvent a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_5DE6BD225DA3BCCF_OFFSET))(this, a1);
	}

	::System::Void Method_2_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_2_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_2_BDDBE2FD9A9FFA54(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_BDDBE2FD9A9FFA54_OFFSET))(this, a1);
	}

	::System::Void Method_2_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_2_FFE24DF54B83FB77(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_FFE24DF54B83FB77_OFFSET))(this, a1);
	}

	::System::Void Method_2_08BBACE844405300()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_08BBACE844405300_OFFSET))(this);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Single Method_2_682FA2F0C959D8A1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_682FA2F0C959D8A1_OFFSET))(this);
	}

	::System::Void Method_2_6E10DBA521A04356()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_6E10DBA521A04356_OFFSET))(this);
	}

	::System::Void Method_2_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Void Method_2_8DB1521E91FE64F8(::RPG::GameCore::MusicRhythmTimelineConfig* P0, ::System::Boolean P1, ::System::Boolean P2, ::System::Boolean P3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MusicRhythmTimelineConfig*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_8DB1521E91FE64F8_OFFSET))(this, P0, P1, P2, P3);
	}

	::System::Void Method_2_A0E6E42D1D9DE2A4(::RPG::GameCore::PuzzleCustomEvent P0)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + CLASS_2_8B83C6DDD0E3F048_METHOD_2_A0E6E42D1D9DE2A4_OFFSET))(this, P0);
	}
};
