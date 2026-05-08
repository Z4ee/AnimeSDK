#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_2EF69FD7F867E7F6;
class Class_2_DF73794ED874FFFB;
class Class_3_82925E4A102A439B;
class Class_5_8988B26E8EEE123D;

#define MOLEMOLE_UIHOLLOWSHOPWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1488B380)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowShopWidgetContext_TypeDefinitionIndex = 65926;

	class UIHollowShopWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_5_8988B26E8EEE123D* shopNode; // 0x28
		::Class_2_DF73794ED874FFFB* graph; // 0x30
		::Class_3_82925E4A102A439B* shopInfo; // 0x38
		::Class_1_2EF69FD7F867E7F6* scriptContext; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWSHOPWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
