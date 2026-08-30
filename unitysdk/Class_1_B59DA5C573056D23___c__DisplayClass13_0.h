#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B59DA5C573056D23_Struct_2_BEE76773838D4608.h"
#include "unitysdk/System/Object.h"

class Class_1_B59DA5C573056D23;
namespace RPG::Client::Promises { class Promise; }

#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1764E200)
#define CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS13_0___SHOWNEWPARTHINTDIALOGFORDIRECTACQUIREASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1764EB00)

inline static constexpr unsigned int Class_1_B59DA5C573056D23___c__DisplayClass13_0_TypeDefinitionIndex = 80481;

class Class_1_B59DA5C573056D23___c__DisplayClass13_0 : public ::System::Object
{
public:
	::RPG::Client::Promises::Promise* promise; // 0x10
	::Class_1_B59DA5C573056D23* __4__this; // 0x18
	::Class_1_B59DA5C573056D23_Struct_2_BEE76773838D4608 syncResult; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __ShowNewPartHintDialogForDirectAcquireAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B59DA5C573056D23___C__DISPLAYCLASS13_0___SHOWNEWPARTHINTDIALOGFORDIRECTACQUIREASYNC_B__0_OFFSET))(this);
	}
};
