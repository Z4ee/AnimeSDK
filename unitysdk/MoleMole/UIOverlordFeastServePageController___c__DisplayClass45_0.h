#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5002A338EA6818A8;

#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18441400)
#define MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS45_0__GETDISHITEMCONTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x18441410)

namespace MoleMole
{
	inline static constexpr unsigned int UIOverlordFeastServePageController___c__DisplayClass45_0_TypeDefinitionIndex = 53333;

	class UIOverlordFeastServePageController___c__DisplayClass45_0 : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS45_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GetDishItemContext_b__0(::Class_1_5002A338EA6818A8* dishItemContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5002A338EA6818A8*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIOVERLORDFEASTSERVEPAGECONTROLLER___C__DISPLAYCLASS45_0__GETDISHITEMCONTEXT_B__0_OFFSET))(this, dishItemContext);
		}
	};
}
