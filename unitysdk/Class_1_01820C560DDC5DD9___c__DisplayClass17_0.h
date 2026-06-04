#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_01820C560DDC5DD9;
namespace RPG::Client::DiceCombat { class DiceCombatTeamEditDialogMsgParam; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS17_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA4A4BE0)
#define CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS17_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0xA4A8560)

inline static constexpr unsigned int Class_1_01820C560DDC5DD9___c__DisplayClass17_0_TypeDefinitionIndex = 70684;

class Class_1_01820C560DDC5DD9___c__DisplayClass17_0 : public ::System::Object
{
public:
	::Class_1_01820C560DDC5DD9* __4__this; // 0x10
	::RPG::Client::DiceCombat::DiceCombatTeamEditDialogMsgParam* param; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS17_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _HandleShowTeamEditDialog_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01820C560DDC5DD9___C__DISPLAYCLASS17_0__HANDLESHOWTEAMEDITDIALOG_B__0_OFFSET))(this);
	}
};
