#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class LaserTurnablePuzzleRing; }
namespace RPG::GameCore { class OptionTriggerInfo; }

#define RPG_CLIENT_PROP_LASERTURNABLESELECTPARAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xDC96030)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LaserTurnableSelectParamData_TypeDefinitionIndex = 78201;

	class LaserTurnableSelectParamData : public ::System::Object
	{
	public:
		::RPG::Client::Prop::LaserTurnablePuzzleRing* RotateRing; // 0x10
		::RPG::GameCore::OptionTriggerInfo* RotateInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_LASERTURNABLESELECTPARAMDATA__CTOR_OFFSET))(this);
		}
	};
}
