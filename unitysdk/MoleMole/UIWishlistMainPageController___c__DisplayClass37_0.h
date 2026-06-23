#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWishlistMainPageController; }

#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x156E6890)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS37_0__SHOWSKILLSPECIALITEMPROCESS_B__0_OFFSET UNITYSDK_OFFSET(0x156E68A0)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS37_0__SHOWSKILLSPECIALITEMPROCESS_B__1_OFFSET UNITYSDK_OFFSET(0x156E6920)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageController___c__DisplayClass37_0_TypeDefinitionIndex = 75918;

	class UIWishlistMainPageController___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWishlistMainPageController* __4__this; // 0x10
		::System::Int32 curSpecialSkillLevelUpItemNum; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSkillSpecialItemProcess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS37_0__SHOWSKILLSPECIALITEMPROCESS_B__0_OFFSET))(this);
		}

		::System::Void _ShowSkillSpecialItemProcess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS37_0__SHOWSKILLSPECIALITEMPROCESS_B__1_OFFSET))(this);
		}
	};
}
