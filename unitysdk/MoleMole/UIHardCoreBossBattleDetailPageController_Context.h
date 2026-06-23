#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_2_9E185D2699C28ECF;
namespace MoleMole { class UIHardCoreBossBattletPrepPageController; }

#define MOLEMOLE_UIHARDCOREBOSSBATTLEDETAILPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167099F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHardCoreBossBattleDetailPageController_Context_TypeDefinitionIndex = 80255;

	class UIHardCoreBossBattleDetailPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MoleMole::UIHardCoreBossBattletPrepPageController* BeforeUI; // 0x28
		::Class_2_9E185D2699C28ECF* LevelData; // 0x30
		::System::Int32 SelectedTabIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHARDCOREBOSSBATTLEDETAILPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
