#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_3_C42038ADC368DD79_3;

#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1880F2A0)
#define MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS88_0__REFRESHFRIENDLIST_B__0_OFFSET UNITYSDK_OFFSET(0x1880F2B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelAdventurePageController___c__DisplayClass88_0_TypeDefinitionIndex = 76848;

	class UIGrandMarcelAdventurePageController___c__DisplayClass88_0 : public ::System::Object
	{
	public:
		::Class_3_C42038ADC368DD79_3* player; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS88_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshFriendList_b__0(::Class_1_BE6BF7909AD9D940* friend_)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_BE6BF7909AD9D940*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELADVENTUREPAGECONTROLLER___C__DISPLAYCLASS88_0__REFRESHFRIENDLIST_B__0_OFFSET))(this, friend_);
		}
	};
}
