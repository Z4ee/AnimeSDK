#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_595;
namespace MoleMole { class UIGachaPerformance3DModelController; }
namespace MoleMole { class UIGachaStage3DModelControllerBase; }
namespace System { class Action; }

#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x158FA7B0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS12_1__PLAYSTAGE_B__2_OFFSET UNITYSDK_OFFSET(0x158FA7C0)
#define MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS12_1__PLAYSTAGE_B__3_OFFSET UNITYSDK_OFFSET(0x158FA980)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaPerformance3DModelController___c__DisplayClass12_1_TypeDefinitionIndex = 70357;

	class UIGachaPerformance3DModelController___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGachaPerformance3DModelController* __4__this; // 0x10
		::MoleMole::UIGachaStage3DModelControllerBase* capturedCtrler; // 0x18
		::Class_2_208CC9941471731A_595* capturedTemplate; // 0x20
		::System::Action* __9__3; // 0x28
		::System::Int32 capturedPerformanceId; // 0x30
		::System::Single capturedDuration; // 0x34
		::System::Int32 capturedTotalPhaseCount; // 0x38
		::System::Int32 capturedPhaseCount; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _PlayStage_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS12_1__PLAYSTAGE_B__2_OFFSET))(this);
		}

		::System::Void _PlayStage_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAPERFORMANCE3DMODELCONTROLLER___C__DISPLAYCLASS12_1__PLAYSTAGE_B__3_OFFSET))(this);
		}
	};
}
