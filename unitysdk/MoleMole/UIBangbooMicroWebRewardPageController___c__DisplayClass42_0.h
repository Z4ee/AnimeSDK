#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIBangbooMicroWebRewardPageController; }

#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1956CDE0)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS42_0__PLAYEXPLEVELUPANIMATION_B__0_OFFSET UNITYSDK_OFFSET(0x1956CDF0)
#define MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS42_0__PLAYEXPLEVELUPANIMATION_B__1_OFFSET UNITYSDK_OFFSET(0x1956CE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebRewardPageController___c__DisplayClass42_0_TypeDefinitionIndex = 73650;

	class UIBangbooMicroWebRewardPageController___c__DisplayClass42_0 : public ::System::Object
	{
	public:
		::MoleMole::UIBangbooMicroWebRewardPageController* __4__this; // 0x10
		::System::Int32 newExp; // 0x18
		::System::Boolean reachMaxLevel; // 0x1C
		::System::Int32 oldLevel; // 0x20
		::System::Int32 newLevel; // 0x24
		::System::Single newRatio; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS42_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayExpLevelUpAnimation_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS42_0__PLAYEXPLEVELUPANIMATION_B__0_OFFSET))(this);
		}

		::System::Void _PlayExpLevelUpAnimation_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMICROWEBREWARDPAGECONTROLLER___C__DISPLAYCLASS42_0__PLAYEXPLEVELUPANIMATION_B__1_OFFSET))(this);
		}
	};
}
