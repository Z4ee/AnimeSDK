#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_C5E8372927A4159F;
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }

#define CLASS_1_C5E8372927A4159F___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB794860)
#define CLASS_1_C5E8372927A4159F___C__DISPLAYCLASS4_0__OPENENTRANCEWINDOWPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0xB7954F0)

inline static constexpr unsigned int Class_1_C5E8372927A4159F___c__DisplayClass4_0_TypeDefinitionIndex = 82075;

class Class_1_C5E8372927A4159F___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise_1<::RPG::Client::UIController*>* promise; // 0x10
	::Class_1_C5E8372927A4159F* __4__this; // 0x18
	::System::UInt32 initSelectLevelGroupID; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5E8372927A4159F___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _OpenEntranceWindowPromised_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C5E8372927A4159F___C__DISPLAYCLASS4_0__OPENENTRANCEWINDOWPROMISED_B__0_OFFSET))(this);
	}
};
