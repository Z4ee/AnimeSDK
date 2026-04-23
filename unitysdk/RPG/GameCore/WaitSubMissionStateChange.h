#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingEventBase.h"
#include "unitysdk/RPG/GameCore/SubMissionState.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_METHOD_4_113D8121111FE529_OFFSET UNITYSDK_OFFSET(0x19109A90)
#define RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_METHOD_4_79E550A93A6019F8_OFFSET UNITYSDK_OFFSET(0x19109B70)
#define RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19109B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitSubMissionStateChange_TypeDefinitionIndex = 19702;

	class WaitSubMissionStateChange : public ::RPG::GameCore::AdvWaitingEventBase
	{
	public:
		::Il2CppArray<::System::UInt32>* SubMissions; // 0x20
		::RPG::GameCore::SubMissionState State; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnChange; // 0x30
		::RPG::GameCore::PredicateConfig* Condition; // 0x38
		::System::Boolean TriggerOnMissionInit; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_113D8121111FE529(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSubMissionStateChange*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSubMissionStateChange*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_METHOD_4_113D8121111FE529_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_79E550A93A6019F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitSubMissionStateChange* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitSubMissionStateChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSUBMISSIONSTATECHANGE_METHOD_4_79E550A93A6019F8_OFFSET))(a1, a2);
		}
	};
}
