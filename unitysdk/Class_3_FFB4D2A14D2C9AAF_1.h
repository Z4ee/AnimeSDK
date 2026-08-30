#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_39.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_3_FFB4D2A14D2C9AAF_1_METHOD_3_11B65C8014633802_OFFSET UNITYSDK_OFFSET(0xFA60660)
#define CLASS_3_FFB4D2A14D2C9AAF_1_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xFA60770)
#define CLASS_3_FFB4D2A14D2C9AAF_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xFA606F0)
#define CLASS_3_FFB4D2A14D2C9AAF_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFA607E0)

inline static constexpr unsigned int Class_3_FFB4D2A14D2C9AAF_1_TypeDefinitionIndex = 77702;

class Class_3_FFB4D2A14D2C9AAF_1 : public ::Class_2_A48F3719AA1CF200_39
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* FOIJHDEGJMM; // 0x20
	::System::String* GLGOFGALBHP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1__CTOR_OFFSET))(this);
	}

	static ::Class_3_FFB4D2A14D2C9AAF_1* Method_3_11B65C8014633802(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::System::String* a2)
	{
		return ((::Class_3_FFB4D2A14D2C9AAF_1*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1_METHOD_3_11B65C8014633802_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_1_ONCLEAR_OFFSET))(this);
	}
};
