#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }

#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x192C0310)
#define MOLEMOLE_UICOOPCLUEPAGECONTROLLER___C__DISPLAYCLASS6_0__REGISTEREVENT_B__0_OFFSET UNITYSDK_OFFSET(0x192C0320)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopCluePageController___c__DisplayClass6_0_TypeDefinitionIndex = 44971;

	class UICoopCluePageController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterEvent_b__0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEPAGECONTROLLER___C__DISPLAYCLASS6_0__REGISTEREVENT_B__0_OFFSET))(this, _);
		}
	};
}
