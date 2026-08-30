#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1411;
class Class_0_16E4307DCC419505_1413;
namespace RPG::Client { class UIController; }
namespace RPG::Client::B51Racing { class B51RacingCarDevelopActionSelectViewModel; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17237530)
#define CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS20_0__SHOWDEVELOPACTIONSELECTPAGEASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x172389F0)

inline static constexpr unsigned int Class_1_A0E7B93CE3D1C3B3___c__DisplayClass20_0_TypeDefinitionIndex = 80419;

class Class_1_A0E7B93CE3D1C3B3___c__DisplayClass20_0 : public ::System::Object
{
public:
	::RPG::Client::B51Racing::B51RacingCarDevelopActionSelectViewModel* viewModel; // 0x10
	::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* promise; // 0x18
	::Class_0_16E4307DCC419505_1411* sceneService; // 0x20
	::Class_0_16E4307DCC419505_1413* transient; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Void _ShowDevelopActionSelectPageAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0E7B93CE3D1C3B3___C__DISPLAYCLASS20_0__SHOWDEVELOPACTIONSELECTPAGEASYNC_B__0_OFFSET))(this);
	}
};
