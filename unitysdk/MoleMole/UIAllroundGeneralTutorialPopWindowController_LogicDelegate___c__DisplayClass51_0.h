#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E081FCEC8F87505A;
class Class_2_208CC9941471731A_739;
namespace MoleMole { class UILineupSelectContext_BeginBattleDel; }

#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS51_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12C09440)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS51_0__ONTUTORIALBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x12C09450)
#define MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS51_0__ONTUTORIALBTNCLICKED_B__1_OFFSET UNITYSDK_OFFSET(0x12C09790)

namespace MoleMole
{
	inline static constexpr unsigned int UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c__DisplayClass51_0_TypeDefinitionIndex = 46867;

	class UIAllroundGeneralTutorialPopWindowController_LogicDelegate___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::MoleMole::UILineupSelectContext_BeginBattleDel* __9__1; // 0x10
		::Class_2_208CC9941471731A_739* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS51_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnTutorialBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS51_0__ONTUTORIALBTNCLICKED_B__0_OFFSET))(this);
		}

		::System::Void _OnTutorialBtnClicked_b__1(::Class_1_E081FCEC8F87505A* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E081FCEC8F87505A*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIALLROUNDGENERALTUTORIALPOPWINDOWCONTROLLER_LOGICDELEGATE___C__DISPLAYCLASS51_0__ONTUTORIALBTNCLICKED_B__1_OFFSET))(this, data);
		}
	};
}
