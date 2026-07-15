#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_38.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_3_FFB4D2A14D2C9AAF_2_METHOD_3_11B65C8014633802_OFFSET UNITYSDK_OFFSET(0x1872A6B0)
#define CLASS_3_FFB4D2A14D2C9AAF_2_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1872A810)
#define CLASS_3_FFB4D2A14D2C9AAF_2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1872A740)
#define CLASS_3_FFB4D2A14D2C9AAF_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1872A880)

inline static constexpr unsigned int Class_3_FFB4D2A14D2C9AAF_2_TypeDefinitionIndex = 74222;

class Class_3_FFB4D2A14D2C9AAF_2 : public ::Class_2_A48F3719AA1CF200_38
{
public:
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* Field_3_0; // 0x20
	::System::String* Field_3_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_2__CTOR_OFFSET))(this);
	}

	static ::Class_3_FFB4D2A14D2C9AAF_2* Method_3_11B65C8014633802(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::System::String* a2)
	{
		return ((::Class_3_FFB4D2A14D2C9AAF_2*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_2_METHOD_3_11B65C8014633802_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_2_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_2_ONCLEAR_OFFSET))(this);
	}
};
