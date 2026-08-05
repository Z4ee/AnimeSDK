#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_179;
class Class_1_67BCD41915294A27;

#define MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BD5140)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSkinPackNameplateWidgetController_Context_TypeDefinitionIndex = 81223;

	class UIGeneralRoleSkinPackNameplateWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_67BCD41915294A27* RecommendPageData; // 0x28
		::Class_0_16E4307DCC419505_179* GoodsData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINPACKNAMEPLATEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
