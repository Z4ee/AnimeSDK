#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS148_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15102DB0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS148_0__PLAYTIMELINE_B__0_OFFSET UNITYSDK_OFFSET(0x15102DC0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS148_0__PLAYTIMELINE_B__1_OFFSET UNITYSDK_OFFSET(0x15102E50)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS148_0__PLAYTIMELINE_B__3_OFFSET UNITYSDK_OFFSET(0x15102EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass148_0_TypeDefinitionIndex = 91518;

	class UIRidusGotBooPageController___c__DisplayClass148_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x10
		::System::Boolean withInputBlock; // 0x18
		::System::Boolean finished; // 0x19

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS148_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayTimeline_b__0(::UnityEngine::Transform* tr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS148_0__PLAYTIMELINE_B__0_OFFSET))(this, tr);
		}

		::System::Void _PlayTimeline_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS148_0__PLAYTIMELINE_B__1_OFFSET))(this);
		}

		::System::Boolean _PlayTimeline_b__3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS148_0__PLAYTIMELINE_B__3_OFFSET))(this);
		}
	};
}
