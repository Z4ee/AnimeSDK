#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_40264A1FD04B14F7;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS105_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15811D20)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS105_0__SETJUMPACCESS_B__0_OFFSET UNITYSDK_OFFSET(0x15811D30)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS105_0__SETJUMPACCESS_B__1_OFFSET UNITYSDK_OFFSET(0x15811D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass105_0_TypeDefinitionIndex = 82874;

	class UIGeneralTipsPopWindowController___c__DisplayClass105_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x10
		::System::Action_1<::System::Boolean>* onJump; // 0x18
		::Class_1_40264A1FD04B14F7* accessData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS105_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetJumpAccess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS105_0__SETJUMPACCESS_B__0_OFFSET))(this);
		}

		::System::Void _SetJumpAccess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS105_0__SETJUMPACCESS_B__1_OFFSET))(this);
		}
	};
}
