#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityRebateTriggerType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYREBATETRIGGERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D37C6C0)
#define RPG_GAMECORE_ACTIVITYREBATETRIGGERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D37C800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRebateTriggerConfigRow_TypeDefinitionIndex = 12331;

	class ActivityRebateTriggerConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityRebateTriggerType TriggerType; // 0x10
		::System::UInt32 Param1; // 0x14
		::System::UInt32 TriggerID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREBATETRIGGERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityRebateTriggerConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRebateTriggerConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREBATETRIGGERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
