#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS98_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1825A6D0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS98_0__REFRESHBOTTOMTIPSTEXT_B__0_OFFSET UNITYSDK_OFFSET(0x1825A6E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass98_0_TypeDefinitionIndex = 78282;

	class UIHollowMainPageController___c__DisplayClass98_0 : public ::System::Object
	{
	public:
		::System::String* newKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS98_0__CTOR_OFFSET))(this);
		}

		::System::String* _RefreshBottomTipsText_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS98_0__REFRESHBOTTOMTIPSTEXT_B__0_OFFSET))(this);
		}
	};
}
