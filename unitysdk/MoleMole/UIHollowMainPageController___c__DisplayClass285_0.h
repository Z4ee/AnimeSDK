#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_90E529DB4DCB014F.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS285_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14818F90)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS285_0__ENTERBIGTV_B__0_OFFSET UNITYSDK_OFFSET(0x14818FA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass285_0_TypeDefinitionIndex = 44946;

	class UIHollowMainPageController___c__DisplayClass285_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::Struct_2_90E529DB4DCB014F sectionUid; // 0x18
		::System::Boolean playHideUIAnim; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS285_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterBigTv_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS285_0__ENTERBIGTV_B__0_OFFSET))(this);
		}
	};
}
