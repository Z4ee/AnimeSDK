#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14840440)
#define MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS1_0__ENTERSCENEPERFORM_B__0_OFFSET UNITYSDK_OFFSET(0x14840450)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneDungeonSubsystem___c__DisplayClass1_0_TypeDefinitionIndex = 44142;

	class BigSceneDungeonSubsystem___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action* FinishAction; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _EnterScenePerform_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEDUNGEONSUBSYSTEM___C__DISPLAYCLASS1_0__ENTERSCENEPERFORM_B__0_OFFSET))(this);
		}
	};
}
