#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5002A338EA6818A8;
namespace MoleMole { class UIOverlordFeastServePageController; }

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS77_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16951550)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS77_0__GETGUESTDELICIOUSNESS_B__0_OFFSET UNITYSDK_OFFSET(0x16951560)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c__DisplayClass77_0_TypeDefinitionIndex = 46525;

	class UIOverlordFeastServePageController___c__DisplayClass77_0 : public ::System::Object
	{
	public:
		::MoleMole::UIOverlordFeastServePageController* __4__this; // 0x10
		::System::Int32 guestId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS77_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetGuestDeliciousness_b__0(::Class_1_5002A338EA6818A8* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5002A338EA6818A8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS77_0__GETGUESTDELICIOUSNESS_B__0_OFFSET))(this, context);
		}
	};
}
