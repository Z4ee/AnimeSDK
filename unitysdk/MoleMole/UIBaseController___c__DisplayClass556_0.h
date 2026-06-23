#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBaseController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS556_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E64C40)
#define MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS556_0__PLAYANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x15E64C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseController___c__DisplayClass556_0_TypeDefinitionIndex = 76172;

	class UIBaseController___c__DisplayClass556_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBaseController* __4__this; // 0x10
		::System::String* anim; // 0x18
		::System::Action* callback; // 0x20
		::System::Single startNormalizedTime; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS556_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASECONTROLLER___C__DISPLAYCLASS556_0__PLAYANIMATION_B__0_OFFSET))(this);
		}
	};
}
