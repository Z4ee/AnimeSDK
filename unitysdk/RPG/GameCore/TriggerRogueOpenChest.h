#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_TRIGGERROGUEOPENCHEST_METHOD_3_3461181C2DEBA8D6_OFFSET UNITYSDK_OFFSET(0x1D604680)
#define RPG_GAMECORE_TRIGGERROGUEOPENCHEST_METHOD_3_8FBE78EA1C620515_OFFSET UNITYSDK_OFFSET(0x1D6046C0)
#define RPG_GAMECORE_TRIGGERROGUEOPENCHEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6046B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerRogueOpenChest_TypeDefinitionIndex = 22019;

	class TriggerRogueOpenChest : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEOPENCHEST__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3461181C2DEBA8D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueOpenChest*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueOpenChest*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEOPENCHEST_METHOD_3_3461181C2DEBA8D6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8FBE78EA1C620515(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TriggerRogueOpenChest* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TriggerRogueOpenChest*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERROGUEOPENCHEST_METHOD_3_8FBE78EA1C620515_OFFSET))(a1, a2);
		}
	};
}
