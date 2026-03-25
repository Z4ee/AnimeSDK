#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_METHOD_3_444F9FF57BAFF811_OFFSET UNITYSDK_OFFSET(0x179010A0)
#define RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_METHOD_3_E8A947B543BDC4EA_OFFSET UNITYSDK_OFFSET(0x17901170)
#define RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED__CTOR_OFFSET UNITYSDK_OFFSET(0x17901120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitPropCurveMovePaused_TypeDefinitionIndex = 19337;

	class WaitPropCurveMovePaused : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TasksConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_444F9FF57BAFF811(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropCurveMovePaused*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropCurveMovePaused*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_METHOD_3_444F9FF57BAFF811_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E8A947B543BDC4EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitPropCurveMovePaused* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitPropCurveMovePaused*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITPROPCURVEMOVEPAUSED_METHOD_3_E8A947B543BDC4EA_OFFSET))(a1, a2);
		}
	};
}
