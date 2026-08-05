#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPhotoWallSwitchItemWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIPHOTOWALLSWITCHITEMWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1835D550)
#define MOLEMOLE_UIPHOTOWALLSWITCHITEMWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONCLICKEDITNAMECALLBACK_G__ONEDITNAME_1_OFFSET UNITYSDK_OFFSET(0x1835D560)

namespace MoleMole
{
	inline static constexpr unsigned int UIPhotoWallSwitchItemWidgetController___c__DisplayClass10_0_TypeDefinitionIndex = 89404;

	class UIPhotoWallSwitchItemWidgetController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIPhotoWallSwitchItemWidgetController* __4__this; // 0x10
		::System::String* newName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLSWITCHITEMWIDGETCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickEditNameCallback_g__OnEditName_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPHOTOWALLSWITCHITEMWIDGETCONTROLLER___C__DISPLAYCLASS10_0__ONCLICKEDITNAMECALLBACK_G__ONEDITNAME_1_OFFSET))(this);
		}
	};
}
