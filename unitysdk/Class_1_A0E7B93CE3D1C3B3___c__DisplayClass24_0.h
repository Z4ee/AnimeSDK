#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1411;
class Class_0_16E4307DCC419505_1413;
namespace RPG::Client::B51Racing { class B51RacingNewCarDisplayPageViewModel; }

#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x172379C0)
#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS24_0__SHOWNEWCARDISPLAYPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x17238B10)

inline static constexpr unsigned int Class_1_A0E7B93CE3D1C3B3___c__DisplayClass24_0_TypeDefinitionIndex = 80420;

class Class_1_A0E7B93CE3D1C3B3___c__DisplayClass24_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1413* transient; // 0x10
	::RPG::Client::B51Racing::B51RacingNewCarDisplayPageViewModel* viewModel; // 0x18
	::Class_0_16E4307DCC419505_1411* sceneService; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowNewCarDisplayPageAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS24_0__SHOWNEWCARDISPLAYPAGEASYNC_B__0_OFFSET))(this);
	}
};
