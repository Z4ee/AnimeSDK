#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_0_16E4307DCC419505_181;
class Class_1_5DA2E7556103D5A3_146;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UISUMMERTIDETREASURESTAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8C4F0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasureStageWidgetController_Context_TypeDefinitionIndex = 40563;

	class UISummerTideTreasureStageWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Action_1<::System::Int32>* OnStageClicked; // 0x28
		::Class_1_5DA2E7556103D5A3_146* StageConfig; // 0x30
		::Class_0_16E4307DCC419505_181* GeneralLevel; // 0x38
		::System::Boolean IsLatestUnlockedStage; // 0x40
		::System::Boolean IsSelected; // 0x41
		::System::Int32 StageIndex; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASURESTAGEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
