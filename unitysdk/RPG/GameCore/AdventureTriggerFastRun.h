#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_METHOD_3_67F9AC3BB36E754D_OFFSET UNITYSDK_OFFSET(0x16F5C610)
#define RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_METHOD_3_EE177D8ABA369561_OFFSET UNITYSDK_OFFSET(0x16F5C690)
#define RPG_GAMECORE_ADVENTURETRIGGERFASTRUN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5C660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureTriggerFastRun_TypeDefinitionIndex = 18468;

	class AdventureTriggerFastRun : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TransitionTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERFASTRUN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_67F9AC3BB36E754D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerFastRun*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerFastRun*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_METHOD_3_67F9AC3BB36E754D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_EE177D8ABA369561(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdventureTriggerFastRun* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdventureTriggerFastRun*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURETRIGGERFASTRUN_METHOD_3_EE177D8ABA369561_OFFSET))(a1, a2);
		}
	};
}
