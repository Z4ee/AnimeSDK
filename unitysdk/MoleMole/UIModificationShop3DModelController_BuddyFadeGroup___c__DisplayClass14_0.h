#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIModificationShop3DModelController_BuddyFadeGroup; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14846820)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP___C__DISPLAYCLASS14_0__START_B__0_OFFSET UNITYSDK_OFFSET(0x14846830)
#define MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP___C__DISPLAYCLASS14_0__START_B__1_OFFSET UNITYSDK_OFFSET(0x14846920)

namespace MoleMole
{
	inline static constexpr unsigned int UIModificationShop3DModelController_BuddyFadeGroup___c__DisplayClass14_0_TypeDefinitionIndex = 77493;

	class UIModificationShop3DModelController_BuddyFadeGroup___c__DisplayClass14_0 : public ::System::Object
	{
	public:
		::System::Action* endCall; // 0x10
		::System::String* Ani_Trigger_Out; // 0x18
		::System::Action* __9__1; // 0x20
		::MoleMole::UIModificationShop3DModelController_BuddyFadeGroup* __4__this; // 0x28
		::System::Single switchOutTime_Start; // 0x30
		::System::Single switchOutTime_End; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
		}

		::System::Void _Start_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP___C__DISPLAYCLASS14_0__START_B__0_OFFSET))(this);
		}

		::System::Void _Start_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMODIFICATIONSHOP3DMODELCONTROLLER_BUDDYFADEGROUP___C__DISPLAYCLASS14_0__START_B__1_OFFSET))(this);
		}
	};
}
