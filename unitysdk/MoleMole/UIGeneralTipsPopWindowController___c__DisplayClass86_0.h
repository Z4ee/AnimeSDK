#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_40264A1FD04B14F7;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF0980)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__INITJUMPVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x14EF0990)
#define MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__INITJUMPVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x14EF0A00)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTipsPopWindowController___c__DisplayClass86_0_TypeDefinitionIndex = 82867;

	class UIGeneralTipsPopWindowController___c__DisplayClass86_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_1_40264A1FD04B14F7*>* accessData; // 0x10
		::System::Action_1<::System::Boolean>* jumpAction; // 0x18
		::MoleMole::UIGeneralTipsPopWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitJumpView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__INITJUMPVIEW_B__0_OFFSET))(this);
		}

		::System::Void _InitJumpView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTIPSPOPWINDOWCONTROLLER___C__DISPLAYCLASS86_0__INITJUMPVIEW_B__1_OFFSET))(this);
		}
	};
}
