#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EC9AE4C13166BF65;
namespace RPG::Client::DiceCombat { class DiceCombatTeamEditDialogMsgParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBD8E2E0)
#define CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS19_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xBD90A50)

inline static constexpr unsigned int Class_1_EC9AE4C13166BF65___c__DisplayClass19_0_TypeDefinitionIndex = 75709;

class Class_1_EC9AE4C13166BF65___c__DisplayClass19_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* param; // 0x10
	::Class_1_EC9AE4C13166BF65* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowTeamEditDialog_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EC9AE4C13166BF65___C__DISPLAYCLASS19_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET))(this);
	}
};
