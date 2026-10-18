#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_42.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_3_FFB4D2A14D2C9AAF_METHOD_3_11B65C8014633802_OFFSET UNITYSDK_OFFSET(0xF886DC0)
#define CLASS_3_FFB4D2A14D2C9AAF_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xF886EF0)
#define CLASS_3_FFB4D2A14D2C9AAF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xF886E50)
#define CLASS_3_FFB4D2A14D2C9AAF__CTOR_OFFSET UNITYSDK_OFFSET(0xF886F60)

inline static constexpr unsigned int Class_3_FFB4D2A14D2C9AAF_TypeDefinitionIndex = 78171;

class Class_3_FFB4D2A14D2C9AAF : public ::Class_2_A48F3719AA1CF200_42
{
public:
	::System::String* GOLLNCJAPJC; // 0x20
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* FOIJHDEGJMM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF__CTOR_OFFSET))(this);
	}

	static ::Class_3_FFB4D2A14D2C9AAF* Method_3_11B65C8014633802(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* a1, ::System::String* a2)
	{
		return ((::Class_3_FFB4D2A14D2C9AAF*(*)(::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_METHOD_3_11B65C8014633802_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_ONCLEAR_OFFSET))(this);
	}
};
