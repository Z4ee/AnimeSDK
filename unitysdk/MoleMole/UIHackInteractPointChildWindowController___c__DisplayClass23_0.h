#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHackInteractPointChildWindowController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1467D5A0)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYPLAYROOTFADE_B__0_OFFSET UNITYSDK_OFFSET(0x1467D5B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackInteractPointChildWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 40228;

	class UIHackInteractPointChildWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHackInteractPointChildWindowController* __4__this; // 0x10
		::System::String* clipName; // 0x18
		::System::Action* callback; // 0x20
		::System::Boolean fadeIn; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryPlayRootFade_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS23_0__TRYPLAYROOTFADE_B__0_OFFSET))(this);
		}
	};
}
