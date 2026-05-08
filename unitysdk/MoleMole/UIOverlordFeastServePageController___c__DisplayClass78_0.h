#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5002A338EA6818A8_1;
namespace MoleMole { class UIOverlordFeastServePageController; }

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12E08BD0)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS78_0__GETGUESTHEALTH_B__0_OFFSET UNITYSDK_OFFSET(0x12E08BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c__DisplayClass78_0_TypeDefinitionIndex = 58431;

	class UIOverlordFeastServePageController___c__DisplayClass78_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastServePageController* __4__this; // 0x10
		::System::Int32 guestId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS78_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetGuestHealth_b__0(::Class_1_5002A338EA6818A8_1* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5002A338EA6818A8_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS78_0__GETGUESTHEALTH_B__0_OFFSET))(this, context);
		}
	};
}
