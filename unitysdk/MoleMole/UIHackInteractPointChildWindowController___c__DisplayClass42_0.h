#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHackInteractPointChildWindowController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EC8930)
#define MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__SETSINGLEPROGRESSVISIBLE_B__0_OFFSET UNITYSDK_OFFSET(0x18EC8940)

namespace MoleMole
{
	inline static constexpr unsigned int UIHackInteractPointChildWindowController___c__DisplayClass42_0_TypeDefinitionIndex = 50750;

	class UIHackInteractPointChildWindowController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* progressGo; // 0x10
		::MoleMole::UIHackInteractPointChildWindowController* __4__this; // 0x18
		::System::Boolean isLargeProgress; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetSingleProgressVisible_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHACKINTERACTPOINTCHILDWINDOWCONTROLLER___C__DISPLAYCLASS42_0__SETSINGLEPROGRESSVISIBLE_B__0_OFFSET))(this);
		}
	};
}
