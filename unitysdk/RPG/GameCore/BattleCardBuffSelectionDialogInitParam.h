#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ShowBattleCardBuffSelection; }

#define RPG_GAMECORE_BATTLECARDBUFFSELECTIONDIALOGINITPARAM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B623520)
#define RPG_GAMECORE_BATTLECARDBUFFSELECTIONDIALOGINITPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B623570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleCardBuffSelectionDialogInitParam_TypeDefinitionIndex = 58755;

	class BattleCardBuffSelectionDialogInitParam : public ::System::Object
	{
	public:
		::RPG::GameCore::ShowBattleCardBuffSelection* Config; // 0x10
		::System::Single AutoConfirmDelay; // 0x18
		::System::Single AutoSelectDelay; // 0x1C
		::System::Int32 AutoSelectIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECARDBUFFSELECTIONDIALOGINITPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECARDBUFFSELECTIONDIALOGINITPARAM_DISPOSE_OFFSET))(this);
		}
	};
}
