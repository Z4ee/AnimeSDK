#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1824EF69C8E376A3;
class Class_3_AAC9B4B6713CDE1B;

#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18808DB0)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS29_0__REFRESHAVATARITEMS_B__0_OFFSET UNITYSDK_OFFSET(0x18808DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRewardListDialogPopWindowController___c__DisplayClass29_0_TypeDefinitionIndex = 71742;

	class UIGachaRewardListDialogPopWindowController___c__DisplayClass29_0 : public ::System::Object
	{
	public:
		::Class_3_AAC9B4B6713CDE1B* reward; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshAvatarItems_b__0(::Class_2_1824EF69C8E376A3* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1824EF69C8E376A3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS29_0__REFRESHAVATARITEMS_B__0_OFFSET))(this, x);
		}
	};
}
