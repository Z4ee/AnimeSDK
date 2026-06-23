#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1D257F0D6462A2AD;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS107_0__CTOR_OFFSET UNITYSDK_OFFSET(0x166F3A00)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS107_0__SETJUMPACCESS_B__0_OFFSET UNITYSDK_OFFSET(0x166F3A10)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS107_0__SETJUMPACCESS_B__1_OFFSET UNITYSDK_OFFSET(0x166F3A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass107_0_TypeDefinitionIndex = 63527;

	class UIGeneralTipsPopWindowController___c__DisplayClass107_0 : public ::System::Object
	{
	public:
		::Class_1_1D257F0D6462A2AD* accessData; // 0x10
		::System::Action_1<::System::Boolean>* onJump; // 0x18
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS107_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetJumpAccess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS107_0__SETJUMPACCESS_B__0_OFFSET))(this);
		}

		::System::Void _SetJumpAccess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS107_0__SETJUMPACCESS_B__1_OFFSET))(this);
		}
	};
}
