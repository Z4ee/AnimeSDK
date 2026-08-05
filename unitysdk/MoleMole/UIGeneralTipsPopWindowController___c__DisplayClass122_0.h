#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A862B1AB621733B6;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS122_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19FCBC10)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS122_0__SETJUMPACCESS_B__0_OFFSET UNITYSDK_OFFSET(0x19FCBC20)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS122_0__SETJUMPACCESS_B__1_OFFSET UNITYSDK_OFFSET(0x19FCBC50)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass122_0_TypeDefinitionIndex = 40476;

	class UIGeneralTipsPopWindowController___c__DisplayClass122_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* onJump; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x18
		::Class_1_A862B1AB621733B6* accessData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS122_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetJumpAccess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS122_0__SETJUMPACCESS_B__0_OFFSET))(this);
		}

		::System::Void _SetJumpAccess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS122_0__SETJUMPACCESS_B__1_OFFSET))(this);
		}
	};
}
