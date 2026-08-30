#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/System/Object.h"

class Class_1_7E879E2723D836B1;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_7E879E2723D836B1___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x198CF2F0)
#define CLASS_1_7E879E2723D836B1___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__0_OFFSET UNITYSDK_OFFSET(0x198CFA40)
#define CLASS_1_7E879E2723D836B1___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__1_OFFSET UNITYSDK_OFFSET(0x198CFA70)
#define CLASS_1_7E879E2723D836B1___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__2_OFFSET UNITYSDK_OFFSET(0x198CFAA0)

inline static constexpr unsigned int Class_1_7E879E2723D836B1___c__DisplayClass30_0_TypeDefinitionIndex = 75980;

class Class_1_7E879E2723D836B1___c__DisplayClass30_0 : public ::System::Object
{
public:
	::Class_1_7E879E2723D836B1* __4__this; // 0x10
	::Il2CppArray<::System::Object*>* args; // 0x18
	::RPG::Client::CakeRace::CakeRaceUIType uiType; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryAsyncSwitchSectionUI_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryAsyncSwitchSectionUI_b__1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryAsyncSwitchSectionUI_b__2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E879E2723D836B1___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__2_OFFSET))(this);
	}
};
