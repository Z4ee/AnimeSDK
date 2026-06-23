#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_FD590E733B7F1723.h"

#define MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_BALLPITINITGAMECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D78D350)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameMainPageController_BallPitInitGameContext_TypeDefinitionIndex = 89375;

	class UIBallGameMainPageController_BallPitInitGameContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Struct_2_FD590E733B7F1723 stateData; // 0x28
		::System::Int32 LevelID; // 0x48
		::System::Int32 AvatarID; // 0x4C
		::System::Boolean hasRoleData; // 0x50
		::System::Boolean isContinue; // 0x51

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEMAINPAGECONTROLLER_BALLPITINITGAMECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
