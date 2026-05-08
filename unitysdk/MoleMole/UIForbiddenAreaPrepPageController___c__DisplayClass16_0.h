#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIForbiddenAreaPrepPageController; }

#define MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14EDB010)
#define MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__REFRESHTALENTVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x14EDB120)
#define MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__REFRESHTALENTVIEW_B__1_OFFSET UNITYSDK_OFFSET(0x14EDB020)

namespace MoleMole
{
	inline static constexpr unsigned int UIForbiddenAreaPrepPageController___c__DisplayClass16_0_TypeDefinitionIndex = 78111;

	class UIForbiddenAreaPrepPageController___c__DisplayClass16_0 : public ::System::Object
	{
	public:
		::MoleMole::UIForbiddenAreaPrepPageController* __4__this; // 0x10
		::System::Int32 unlockGroupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshTalentView_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__REFRESHTALENTVIEW_B__1_OFFSET))(this);
		}

		::System::Void _RefreshTalentView_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFORBIDDENAREAPREPPAGECONTROLLER___C__DISPLAYCLASS16_0__REFRESHTALENTVIEW_B__0_OFFSET))(this);
		}
	};
}
