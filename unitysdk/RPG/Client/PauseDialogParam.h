#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_2.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PAUSEDIALOGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4F8260)

namespace RPG::Client
{
	inline static constexpr unsigned int PauseDialogParam_TypeDefinitionIndex = 71597;

	class PauseDialogParam : public ::System::Object
	{
	public:
		::RPG::Client::PauseDialogTabEnum InitTabEnum; // 0x10
		::System::Boolean IsExitBattleBtnShow; // 0x14
		::System::Boolean IsExitBattleBtnDisable; // 0x15
		::Enum_3_71AA90D596A09AC8_2 ModeType; // 0x18
		::RPG::GameCore::StageType StageType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAUSEDIALOGPARAM__CTOR_OFFSET))(this);
		}
	};
}
