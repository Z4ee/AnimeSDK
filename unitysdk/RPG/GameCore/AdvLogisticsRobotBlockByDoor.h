#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_METHOD_3_8E2A5AB9145890CD_OFFSET UNITYSDK_OFFSET(0x1D6BB840)
#define RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_METHOD_3_941EEB165F66888E_OFFSET UNITYSDK_OFFSET(0x1D6BB880)
#define RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotBlockByDoor_TypeDefinitionIndex = 20954;

	class AdvLogisticsRobotBlockByDoor : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8E2A5AB9145890CD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_METHOD_3_8E2A5AB9145890CD_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_941EEB165F66888E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotBlockByDoor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTBLOCKBYDOOR_METHOD_3_941EEB165F66888E_OFFSET))(a1, a2);
		}
	};
}
