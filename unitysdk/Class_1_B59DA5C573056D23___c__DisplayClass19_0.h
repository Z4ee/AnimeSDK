#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1764E880)
#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS19_0___SHOWNEWDEVELOPTARGETDIALOGASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1764EB50)

inline static constexpr unsigned int Class_1_B59DA5C573056D23___c__DisplayClass19_0_TypeDefinitionIndex = 80482;

class Class_1_B59DA5C573056D23___c__DisplayClass19_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowNewDevelopTargetDialogAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS19_0___SHOWNEWDEVELOPTARGETDIALOGASYNC_B__0_OFFSET))(this);
	}
};
