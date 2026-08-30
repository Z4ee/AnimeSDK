#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B59DA5C573056D23_Struct_2_BEE76773838D4608.h"
#include "unitysdk/System/Object.h"

class Class_1_B59DA5C573056D23;
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1764E020)
#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS12_0___SHOWNEWPARTHINTDIALOGASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1764EAB0)

inline static constexpr unsigned int Class_1_B59DA5C573056D23___c__DisplayClass12_0_TypeDefinitionIndex = 80480;

class Class_1_B59DA5C573056D23___c__DisplayClass12_0 : public ::System::Object
{
public:
	::Class_1_B59DA5C573056D23* __4__this; // 0x10
	::Class_1_B59DA5C573056D23_Struct_2_BEE76773838D4608 syncResult; // 0x18
	::RPG::Client::Promises::Promise* promise; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowNewPartHintDialogAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS12_0___SHOWNEWPARTHINTDIALOGASYNC_B__0_OFFSET))(this);
	}
};
