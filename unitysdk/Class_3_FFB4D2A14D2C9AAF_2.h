#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_33.h"

namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCatMonoView; }
namespace System { class String; }

#define CLASS_3_FFB4D2A14D2C9AAF_2_METHOD_3_11B65C8014633802_OFFSET UNITYSDK_OFFSET(0xA7549A0)
#define CLASS_3_FFB4D2A14D2C9AAF_2_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA754B00)
#define CLASS_3_FFB4D2A14D2C9AAF_2_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA754A30)
#define CLASS_3_FFB4D2A14D2C9AAF_2__CTOR_OFFSET UNITYSDK_OFFSET(0xA754B70)
#define CLASS_3_FFB4D2A14D2C9AAF_2___IFIXBASEPROXY_ONCLEAR_OFFSET UNITYSDK_OFFSET(0xA754BE0)
#define CLASS_3_FFB4D2A14D2C9AAF_2___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA754B80)

inline static constexpr unsigned int Class_3_FFB4D2A14D2C9AAF_2_TypeDefinitionIndex = 72697;

class Class_3_FFB4D2A14D2C9AAF_2 : public ::Class_2_A48F3719AA1CF200_33
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

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_2___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FFB4D2A14D2C9AAF_2___IFIXBASEPROXY_ONCLEAR_OFFSET))(this);
	}
};
