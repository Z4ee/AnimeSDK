#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIChatPlusPageController; }
namespace System { class Action; }

#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1577CE70)
#define MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS69_0__ENSUREPREVIOUSNODEFADEOUT_B__0_OFFSET UNITYSDK_OFFSET(0x1577CE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIChatPlusPageController___c__DisplayClass69_0_TypeDefinitionIndex = 51465;

	class UIChatPlusPageController___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::MoleMole::UIChatPlusPageController* __4__this; // 0x10
		::System::Action* callback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnsurePreviousNodeFadeOut_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICHATPLUSPAGECONTROLLER___C__DISPLAYCLASS69_0__ENSUREPREVIOUSNODEFADEOUT_B__0_OFFSET))(this);
		}
	};
}
