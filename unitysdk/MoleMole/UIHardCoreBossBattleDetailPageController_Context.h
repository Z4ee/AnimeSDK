#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_AD1085F76E7418A3;
namespace MoleMole { class UIHardCoreBossBattletPrepPageController; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLEDETAILPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18ED6950)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleDetailPageController_Context_TypeDefinitionIndex = 86041;

	class UIHardCoreBossBattleDetailPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_2_AD1085F76E7418A3* LevelData; // 0x28
		::MoleMole::UIHardCoreBossBattletPrepPageController* BeforeUI; // 0x30
		::System::Int32 SelectedTabIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEDETAILPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
