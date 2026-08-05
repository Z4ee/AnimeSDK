#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_AD1085F76E7418A3;

#define MOLEMOLE_UIHARDCOREBOSSBATTLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB1B40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleWidgetController_Context_TypeDefinitionIndex = 79723;

	class UIHardCoreBossBattleWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_AD1085F76E7418A3* LevelData; // 0x28
		::System::Int32 ModeTabIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
