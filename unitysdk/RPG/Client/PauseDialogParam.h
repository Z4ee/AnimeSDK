#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_2.h"
#include "unitysdk/RPG/Client/PauseDialogTabEnum.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PAUSEDIALOGPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0xC350FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int PauseDialogParam_TypeDefinitionIndex = 66972;

	class PauseDialogParam : public ::System::Object
	{
	public:
		::RPG::Client::PauseDialogTabEnum InitTabEnum; // 0x10
		::Enum_3_71AA90D596A09AC8_2 ModeType; // 0x14
		::System::Boolean IsExitBattleBtnShow; // 0x18
		::System::Boolean IsExitBattleBtnDisable; // 0x19
		::RPG::GameCore::StageType StageType; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PAUSEDIALOGPARAM__CTOR_OFFSET))(this);
		}
	};
}
