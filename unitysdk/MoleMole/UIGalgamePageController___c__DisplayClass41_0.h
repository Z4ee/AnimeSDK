#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalArgueStageLocation.h"
#include "unitysdk/System/Object.h"

class Class_1_C20A73D898541F34;
namespace MoleMole { class UIGalgamePageController; }
namespace MoleMole::GalGame { class GalPlayArgueHealthChangeNode; }

#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18400A90)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__PLAYARGUEHEALTHCHANGENODE_B__0_OFFSET UNITYSDK_OFFSET(0x18400AA0)
#define MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__PLAYARGUEHEALTHCHANGENODE_B__1_OFFSET UNITYSDK_OFFSET(0x18400B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGalgamePageController___c__DisplayClass41_0_TypeDefinitionIndex = 62784;

	class UIGalgamePageController___c__DisplayClass41_0 : public ::System::Object
	{
	public:
		::Class_1_C20A73D898541F34* targetStageData; // 0x10
		::MoleMole::UIGalgamePageController* __4__this; // 0x18
		::MoleMole::GalGame::GalPlayArgueHealthChangeNode* healthChangeData; // 0x20
		::MoleMole::GalGame::GalArgueStageLocation targetLocation; // 0x28
		::System::Int32 healthDelta; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayArgueHealthChangeNode_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__PLAYARGUEHEALTHCHANGENODE_B__0_OFFSET))(this);
		}

		::System::Void _PlayArgueHealthChangeNode_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGALGAMEPAGECONTROLLER___C__DISPLAYCLASS41_0__PLAYARGUEHEALTHCHANGENODE_B__1_OFFSET))(this);
		}
	};
}
