#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x193535F0)
#define MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS15_0__TAKESELECTCOREREWARD_B__0_OFFSET UNITYSDK_OFFSET(0x19353BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBPCoreRewardWidgetWidgetController___c__DisplayClass15_0_TypeDefinitionIndex = 57322;

	class UIBPCoreRewardWidgetWidgetController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* successCallback; // 0x10
		::System::Int32 rewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _TakeSelectCoreReward_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBPCOREREWARDWIDGETWIDGETCONTROLLER___C__DISPLAYCLASS15_0__TAKESELECTCOREREWARD_B__0_OFFSET))(this);
		}
	};
}
