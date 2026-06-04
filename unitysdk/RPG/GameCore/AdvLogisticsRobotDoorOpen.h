#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_METHOD_3_12C6D2083989409E_OFFSET UNITYSDK_OFFSET(0x19428900)
#define RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_METHOD_3_DAD21E4DD774FC6F_OFFSET UNITYSDK_OFFSET(0x19428880)
#define RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN__CTOR_OFFSET UNITYSDK_OFFSET(0x194288D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvLogisticsRobotDoorOpen_TypeDefinitionIndex = 20031;

	class AdvLogisticsRobotDoorOpen : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_DAD21E4DD774FC6F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotDoorOpen*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotDoorOpen*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_METHOD_3_DAD21E4DD774FC6F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_12C6D2083989409E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AdvLogisticsRobotDoorOpen* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AdvLogisticsRobotDoorOpen*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVLOGISTICSROBOTDOOROPEN_METHOD_3_12C6D2083989409E_OFFSET))(a1, a2);
		}
	};
}
