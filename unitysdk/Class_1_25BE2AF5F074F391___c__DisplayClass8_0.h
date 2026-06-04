#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhaseInitParams; }
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_25BE2AF5F074F391___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x145FA740)
#define CLASS_1_25BE2AF5F074F391___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__0_OFFSET UNITYSDK_OFFSET(0x145FA750)
#define CLASS_1_25BE2AF5F074F391___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__1_OFFSET UNITYSDK_OFFSET(0x145FA770)

inline static constexpr unsigned int Class_1_25BE2AF5F074F391___c__DisplayClass8_0_TypeDefinitionIndex = 57207;

class Class_1_25BE2AF5F074F391___c__DisplayClass8_0 : public ::System::Object
{
public:
	::RPG::Client::BattleGamePhaseInitParams* param; // 0x10
	::RPG::Client::Promises::Promise* preloadPromise; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __EnterBattleWithMazeInfoNextFrame_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__0_OFFSET))(this);
	}

	::System::Void __EnterBattleWithMazeInfoNextFrame_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_25BE2AF5F074F391___C__DISPLAYCLASS8_0___ENTERBATTLEWITHMAZEINFONEXTFRAME_B__1_OFFSET))(this);
	}
};
