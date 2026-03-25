#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE_METHOD_2_EA1AC2098441EF1B_OFFSET UNITYSDK_OFFSET(0x16F88F20)
#define RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE__CTOR_OFFSET UNITYSDK_OFFSET(0x16F89110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AssistWayPointFastComplete_TypeDefinitionIndex = 17418;

	class AssistWayPointFastComplete : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 StartIndex; // 0x10
		::System::UInt32 EndIndex; // 0x14
		::System::Boolean UseOverrideTriggerTime; // 0x18
		::System::Single TriggerTime; // 0x1C
		::System::UInt32 TeleportTargetID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EA1AC2098441EF1B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AssistWayPointFastComplete*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AssistWayPointFastComplete*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTWAYPOINTFASTCOMPLETE_METHOD_2_EA1AC2098441EF1B_OFFSET))(a1, a2);
		}
	};
}
