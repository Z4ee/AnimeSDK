#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRace/CakeRaceUIType.h"
#include "unitysdk/System/Object.h"

class Class_1_791CB467786D8BD6;
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11788B50)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__0_OFFSET UNITYSDK_OFFSET(0x117892D0)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__1_OFFSET UNITYSDK_OFFSET(0x11789300)
#define CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__2_OFFSET UNITYSDK_OFFSET(0x11789330)

inline static constexpr unsigned int Class_1_791CB467786D8BD6___c__DisplayClass30_0_TypeDefinitionIndex = 70219;

class Class_1_791CB467786D8BD6___c__DisplayClass30_0 : public ::System::Object
{
public:
	::Class_1_791CB467786D8BD6* __4__this; // 0x10
	::Il2CppArray<::System::Object*>* args; // 0x18
	::RPG::Client::CakeRace::CakeRaceUIType uiType; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryAsyncSwitchSectionUI_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__0_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryAsyncSwitchSectionUI_b__1()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__1_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryAsyncSwitchSectionUI_b__2()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_791CB467786D8BD6___C__DISPLAYCLASS30_0__TRYASYNCSWITCHSECTIONUI_B__2_OFFSET))(this);
	}
};
