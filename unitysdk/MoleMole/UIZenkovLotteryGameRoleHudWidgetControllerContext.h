#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1148D240)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovLotteryGameRoleHudWidgetControllerContext_TypeDefinitionIndex = 83352;

	class UIZenkovLotteryGameRoleHudWidgetControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Foundation::AssetPath HeadIconPath; // 0x28
		::System::Single MaxHpReductionPercent; // 0x38
		::System::Single ShaderCurHpPercent; // 0x3C
		::System::Boolean IsAlive; // 0x40
		::System::Boolean IsEmpty; // 0x41
		::System::Single CurHpPercent; // 0x44
		::System::Single ReduceHpPercent; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVLOTTERYGAMEROLEHUDWIDGETCONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
