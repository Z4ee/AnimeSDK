#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1411;
class Class_0_16E4307DCC419505_1413;
namespace RPG::Client::B51Racing { class B51RacingNewPartDisplayPageViewModel; }

#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17237B50)
#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS25_0__SHOWNEWPARTDISPLAYPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x17238C10)

inline static constexpr unsigned int Class_1_A0E7B93CE3D1C3B3___c__DisplayClass25_0_TypeDefinitionIndex = 80421;

class Class_1_A0E7B93CE3D1C3B3___c__DisplayClass25_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1413* transient; // 0x10
	::Class_0_16E4307DCC419505_1411* sceneService; // 0x18
	::RPG::Client::B51Racing::B51RacingNewPartDisplayPageViewModel* viewModel; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowNewPartDisplayPageAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS25_0__SHOWNEWPARTDISPLAYPAGEASYNC_B__0_OFFSET))(this);
	}
};
