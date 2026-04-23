#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection_StateConditionType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurveController; }
namespace System { class String; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_STATECONNECTION_GET_NEXTSTATENAME_OFFSET UNITYSDK_OFFSET(0xB1BA1F0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_STATECONNECTION_METHOD_1_A9E21AEFB7D4CB48_OFFSET UNITYSDK_OFFSET(0xB1B9F40)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_STATECONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xB1BA1E0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection_TypeDefinitionIndex = 65438;

	class StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection : public ::System::Object
	{
	public:
		::System::Int32 NextStateIndex; // 0x10
		::System::Boolean UseCondition; // 0x14
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection_StateConditionType StateCondition; // 0x18
		::System::Single ThresholdValue; // 0x1C
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurveController* _OnwerController; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_STATECONNECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_A9E21AEFB7D4CB48(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_STATECONNECTION_METHOD_1_A9E21AEFB7D4CB48_OFFSET))(this, a1);
		}

		::System::String* get_NextStateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_STATECONNECTION_GET_NEXTSTATENAME_OFFSET))(this);
		}
	};
}
