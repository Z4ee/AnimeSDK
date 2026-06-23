#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMainStoryPageController; }
namespace MoleMole { class UITape3DModelController; }
namespace MoleMole { class UITapesGroup3DModelController___c__DisplayClass39_0; }
namespace System { class Action; }

#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__CTOR_OFFSET UNITYSDK_OFFSET(0x12C7C9E0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__2_OFFSET UNITYSDK_OFFSET(0x12C7CB20)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__3_OFFSET UNITYSDK_OFFSET(0x12C7CDB0)
#define MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__4_OFFSET UNITYSDK_OFFSET(0x12C7CF80)

namespace MoleMole
{
	inline static constexpr unsigned int UITapesGroup3DModelController___c__DisplayClass39_1_TypeDefinitionIndex = 72713;

	class UITapesGroup3DModelController___c__DisplayClass39_1 : public ::System::Object
	{
	public:
		::MoleMole::UITape3DModelController* initCenterTape; // 0x10
		::System::Action* __9__4; // 0x18
		::System::Action* __9__3; // 0x20
		::MoleMole::UIMainStoryPageController* mainStoryPage; // 0x28
		::MoleMole::UITapesGroup3DModelController___c__DisplayClass39_0* CS___8__locals1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__CTOR_OFFSET))(this);
		}

		::System::Void _StartPerformance_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__2_OFFSET))(this);
		}

		::System::Void _StartPerformance_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__3_OFFSET))(this);
		}

		::System::Void _StartPerformance_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAPESGROUP3DMODELCONTROLLER___C__DISPLAYCLASS39_1__STARTPERFORMANCE_B__4_OFFSET))(this);
		}
	};
}
