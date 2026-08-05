#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWishlistMainPageController; }

#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15146790)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS36_0__SHOWSKILLLEVELUPPROCESS_B__0_OFFSET UNITYSDK_OFFSET(0x151467A0)
#define MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS36_0__SHOWSKILLLEVELUPPROCESS_B__1_OFFSET UNITYSDK_OFFSET(0x151467F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIWishlistMainPageController___c__DisplayClass36_0_TypeDefinitionIndex = 65461;

	class UIWishlistMainPageController___c__DisplayClass36_0 : public ::System::Object
	{
	public:
		::MoleMole::UIWishlistMainPageController* __4__this; // 0x10
		::System::Int32 itemId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS36_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowSkillLevelUpProcess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS36_0__SHOWSKILLLEVELUPPROCESS_B__0_OFFSET))(this);
		}

		::System::Void _ShowSkillLevelUpProcess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWISHLISTMAINPAGECONTROLLER___C__DISPLAYCLASS36_0__SHOWSKILLLEVELUPPROCESS_B__1_OFFSET))(this);
		}
	};
}
