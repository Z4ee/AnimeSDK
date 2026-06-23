#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_708;

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18250470)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__REFRESHORIGINALBADGETYPELIST_B__0_OFFSET UNITYSDK_OFFSET(0x18250480)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController___c__DisplayClass25_0_TypeDefinitionIndex = 42852;

	class UIHollowCardItemCollectPageController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::System::Int32 typeID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshOriginalBadgeTypeList_b__0(::Class_2_208CC9941471731A_708* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_708*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___C__DISPLAYCLASS25_0__REFRESHORIGINALBADGETYPELIST_B__0_OFFSET))(this, x);
		}
	};
}
