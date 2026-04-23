#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A45A3A893E113CFD.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_3_FFB4D2A14D2C9AAF_METHOD_3_11B65C8014633802_OFFSET UNITYSDK_OFFSET(0xDFFE170)
#define CLASS_3_FFB4D2A14D2C9AAF_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xDFFE2A0)
#define CLASS_3_FFB4D2A14D2C9AAF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xDFFE200)
#define CLASS_3_FFB4D2A14D2C9AAF__CTOR_OFFSET UNITYSDK_OFFSET(0xDFFE310)
#define CLASS_3_FFB4D2A14D2C9AAF___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xDFFE380)
#define CLASS_3_FFB4D2A14D2C9AAF___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xDFFE320)

inline static constexpr unsigned int Class_3_FFB4D2A14D2C9AAF_TypeDefinitionIndex = 71669;

class Class_3_FFB4D2A14D2C9AAF : public ::Class_2_A45A3A893E113CFD
{
public:
	::System::String* Field_3_1; // 0x20
	::RPG::Client::LittleGame::CakeRace::CakeRaceCatMonoView* Field_3_0; // 0x28

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

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
