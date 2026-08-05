#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15144EE0)
#define MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS26_0__SWITCHANIM_B__0_OFFSET UNITYSDK_OFFSET(0x15144EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreWidgetWidgetController___c__DisplayClass26_0_TypeDefinitionIndex = 42749;

	class UIVHSStoreWidgetWidgetController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::String* inAnim; // 0x10
		::System::Action* onSwitch; // 0x18
		::UnityEngine::Animation* anim; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _SwitchAnim_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTOREWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS26_0__SWITCHANIM_B__0_OFFSET))(this);
		}
	};
}
