#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_38.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_3_FFB4D2A14D2C9AAF_METHOD_3_11B65C8014633802_OFFSET UNITYSDK_OFFSET(0x16997760)
#define CLASS_3_FFB4D2A14D2C9AAF_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x16997890)
#define CLASS_3_FFB4D2A14D2C9AAF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x169977F0)
#define CLASS_3_FFB4D2A14D2C9AAF__CTOR_OFFSET UNITYSDK_OFFSET(0x16997900)

inline static constexpr unsigned int Class_3_FFB4D2A14D2C9AAF_TypeDefinitionIndex = 74216;

class Class_3_FFB4D2A14D2C9AAF : public ::Class_2_A48F3719AA1CF200_38
{
public:
	::System::String* Field_3_0; // 0x20
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* Field_3_1; // 0x28

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
