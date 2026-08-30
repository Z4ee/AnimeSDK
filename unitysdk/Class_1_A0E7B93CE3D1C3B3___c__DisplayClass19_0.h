#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1411;
class Class_0_16E4307DCC419505_1413;
namespace RPG::Client { class UIController; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopPageViewModel; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13F17E40)
#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS19_0__SHOWDEVELOPPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x13F19360)

inline static constexpr unsigned int Class_1_A0E7B93CE3D1C3B3___c__DisplayClass19_0_TypeDefinitionIndex = 80419;

class Class_1_A0E7B93CE3D1C3B3___c__DisplayClass19_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* promise; // 0x10
	::RPG::Client::B51Racing::B51RacingCarDevelopPageViewModel* viewModel; // 0x18
	::Class_0_16E4307DCC419505_1413* transient; // 0x20
	::Class_0_16E4307DCC419505_1411* sceneService; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowDevelopPageAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS19_0__SHOWDEVELOPPAGEASYNC_B__0_OFFSET))(this);
	}
};
