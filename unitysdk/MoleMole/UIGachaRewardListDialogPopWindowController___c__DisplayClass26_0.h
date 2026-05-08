#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
class Class_3_601FA52CA5E757A0;

#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16EFA2C0)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__REFRESHAVATARITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x16EFA2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRewardListDialogPopWindowController___c__DisplayClass26_0_TypeDefinitionIndex = 53572;

	class UIGachaRewardListDialogPopWindowController___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::Class_3_601FA52CA5E757A0* reward; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarItems_b__0(::Class_2_1824EF69C8E376A3* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS26_0__REFRESHAVATARITEMS_B__0_OFFSET))(this, x);
		}
	};
}
