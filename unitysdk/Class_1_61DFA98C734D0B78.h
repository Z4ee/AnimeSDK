#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FateGameStateType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_613;
class Class_1_582AF6875845819E;
namespace RPG::Client { class FateGameData; }

#define CLASS_1_61DFA98C734D0B78_METHOD_1_0B28E15B5A11D412_OFFSET UNITYSDK_OFFSET(0x11468050)
#define CLASS_1_61DFA98C734D0B78_METHOD_1_33ADD81F089AEB23_OFFSET UNITYSDK_OFFSET(0x11467DD0)
#define CLASS_1_61DFA98C734D0B78_METHOD_1_F0BD65B017F2AC0B_OFFSET UNITYSDK_OFFSET(0x11467F60)
#define CLASS_1_61DFA98C734D0B78__CTOR_OFFSET UNITYSDK_OFFSET(0x11467D90)

inline static constexpr unsigned int Class_1_61DFA98C734D0B78_TypeDefinitionIndex = 51955;

class Class_1_61DFA98C734D0B78 : public ::System::Object
{
public:
	::Class_1_582AF6875845819E* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_613* Field_1_2; // 0x18
	::RPG::Client::FateGameStateType Field_1_1; // 0x20

	::System::Void _ctor(::RPG::Client::FateGameData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameData*))((::PBYTE)hIl2Cpp + CLASS_1_61DFA98C734D0B78__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_33ADD81F089AEB23(::RPG::Client::FateGameStateType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameStateType))((::PBYTE)hIl2Cpp + CLASS_1_61DFA98C734D0B78_METHOD_1_33ADD81F089AEB23_OFFSET))(this, a1);
	}

	::System::Void Method_1_F0BD65B017F2AC0B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61DFA98C734D0B78_METHOD_1_F0BD65B017F2AC0B_OFFSET))(this);
	}

	::RPG::Client::FateGameStateType Method_1_0B28E15B5A11D412()
	{
		return ((::RPG::Client::FateGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_61DFA98C734D0B78_METHOD_1_0B28E15B5A11D412_OFFSET))(this);
	}
};
