#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimTriggerShape; }
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class TriggerEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_METHOD_3_3E00728587CF6BB3_OFFSET UNITYSDK_OFFSET(0x18922A50)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_METHOD_3_E5C7901BDF7B3CBF_OFFSET UNITYSDK_OFFSET(0x18922BF0)
#define RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1891DC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimTriggerEventEmitterConfig_TypeDefinitionIndex = 17706;

	class FiveDimTriggerEventEmitterConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsTriggerEventEmitter; // 0x10
		::RPG::GameCore::FiveDimTriggerShape* TriggerShape; // 0x18
		::System::Boolean IsPlayerOnly; // 0x20
		::System::Boolean TriggerEventByGuestType; // 0x21
		::RPG::GameCore::FiveDimTriggerTargetType TargetType; // 0x24
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* EnterEvents; // 0x28
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* ExitEvents; // 0x30
		::Il2CppArray<::RPG::GameCore::TriggerEventConfig*>* TriggerEventConfigList; // 0x38
		::Il2CppArray<::System::String*>* EnterEventsToGuests; // 0x40
		::Il2CppArray<::System::String*>* ExitEventsToGuests; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3E00728587CF6BB3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_METHOD_3_3E00728587CF6BB3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E5C7901BDF7B3CBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimTriggerEventEmitterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRIGGEREVENTEMITTERCONFIG_METHOD_3_E5C7901BDF7B3CBF_OFFSET))(a1, a2);
		}
	};
}
