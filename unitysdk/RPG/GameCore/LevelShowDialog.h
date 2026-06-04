#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

#define RPG_GAMECORE_LEVELSHOWDIALOG__CTOR_OFFSET UNITYSDK_OFFSET(0xCE4D760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelShowDialog_TypeDefinitionIndex = 54384;

	class LevelShowDialog : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSHOWDIALOG__CTOR_OFFSET))(this);
		}
	};
}
