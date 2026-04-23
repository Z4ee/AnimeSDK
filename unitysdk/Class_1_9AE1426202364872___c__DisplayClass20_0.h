#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9AE1426202364872;
class Class_2_15E317187C4E8254;
namespace RPG::Client::LittleGame::CakeRace { class CakeRaceCellWrapperMonoView; }

#define CLASS_1_9AE1426202364872___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E5B40)
#define CLASS_1_9AE1426202364872___C__DISPLAYCLASS20_0___PLAYCELLAPPEARANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0xB7E5B50)

inline static constexpr unsigned int Class_1_9AE1426202364872___c__DisplayClass20_0_TypeDefinitionIndex = 71587;

class Class_1_9AE1426202364872___c__DisplayClass20_0 : public ::System::Object
{
public:
	::Class_2_15E317187C4E8254* cellEntity; // 0x10
	::Class_1_9AE1426202364872* __4__this; // 0x18
	::Class_2_15E317187C4E8254* sectionEntity; // 0x20
	::RPG::Client::LittleGame::CakeRace::CakeRaceCellWrapperMonoView* cellWrapperView; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AE1426202364872___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayCellAppearAnimation_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9AE1426202364872___C__DISPLAYCLASS20_0___PLAYCELLAPPEARANIMATION_B__0_OFFSET))(this);
	}
};
