#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_B9E22E218D2BB16E;

#define MOLEMOLE_UIGACHABTNWIDGETCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x149D4500)
#define MOLEMOLE_UIGACHABTNWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x149D44F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaBtnWidgetContext_TypeDefinitionIndex = 40848;

	class UIGachaBtnWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::MoleMole::UIGachaBtnWidgetContext*>* UIGroup; // 0x28
		::Class_1_B9E22E218D2BB16E* LoopTimer; // 0x30
		::System::Int32 GachaID; // 0x38
		::System::Boolean IsUIGroup; // 0x3C
		::System::Int32 UIGroupID; // 0x40
		::System::Int32 GachaScheduleID; // 0x44
		::System::Int32 UIID; // 0x48

		::System::Void _ctor(::System::Int32 gachaID, ::System::Int32 gachaScheduleID, ::System::Int32 uiID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTEXT__CTOR_OFFSET))(this, gachaID, gachaScheduleID, uiID);
		}

		::System::Void _ctor_1(::System::Int32 uiGroupID, ::Il2CppArray<::MoleMole::UIGachaBtnWidgetContext*>* uiGroup, ::Class_1_B9E22E218D2BB16E* loopTimer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::MoleMole::UIGachaBtnWidgetContext*>*, ::Class_1_B9E22E218D2BB16E*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHABTNWIDGETCONTEXT__CTOR_1_OFFSET))(this, uiGroupID, uiGroup, loopTimer);
		}
	};
}
