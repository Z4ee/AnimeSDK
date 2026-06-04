#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SignalAnimationStateConnection_StateConditionType.h"
#include "unitysdk/RPG/Client/SignalAnimationStateConnection_TransitionTiming.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SignalAnimationState; }

#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_GET_NEXTSTATEINDEX_OFFSET UNITYSDK_OFFSET(0xC8C1790)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_15C46FE02323990A_OFFSET UNITYSDK_OFFSET(0xC8C0F70)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_654FFD98884CDDEC_OFFSET UNITYSDK_OFFSET(0xC8C1350)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_8B7EF0490E4F5997_OFFSET UNITYSDK_OFFSET(0xC8C15D0)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_C533D7088789E5A0_OFFSET UNITYSDK_OFFSET(0xC8C16F0)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xC8C17B0)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_E6E4670CC7E80120_OFFSET UNITYSDK_OFFSET(0xC8C1480)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_SET_NEXTSTATEINDEX_OFFSET UNITYSDK_OFFSET(0xC8C17A0)
#define RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xC8C1330)

namespace RPG::Client
{
	inline static constexpr unsigned int SignalAnimationStateConnection_TypeDefinitionIndex = 66350;

	class SignalAnimationStateConnection : public ::System::Object
	{
	public:
		::System::Int32 _nextStateIndex; // 0x10
		::RPG::Client::SignalAnimationStateConnection_TransitionTiming TransitionTimingType; // 0x14
		::System::Boolean UseCondition; // 0x18
		::System::Boolean _conditionSatisfiedPendingAnimation; // 0x19
		::System::Single _lastAnimationProgress; // 0x1C
		::System::Boolean _animationCycleCompleted; // 0x20
		::RPG::Client::SignalAnimationStateConnection_StateConditionType StateCondition; // 0x24
		::System::Single ThresholdValue; // 0x28
		::System::Single TransitionDuration; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_15C46FE02323990A(::System::Single a1, ::System::Single a2, ::RPG::Client::SignalAnimationState* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::SignalAnimationState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_15C46FE02323990A_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_E6E4670CC7E80120(::System::Single a1, ::System::Single a2, ::RPG::Client::SignalAnimationState* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::SignalAnimationState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_E6E4670CC7E80120_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_8B7EF0490E4F5997(::System::Single a1, ::System::Single a2, ::RPG::Client::SignalAnimationState* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::RPG::Client::SignalAnimationState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_8B7EF0490E4F5997_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_C533D7088789E5A0(::RPG::Client::SignalAnimationState* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SignalAnimationState*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_C533D7088789E5A0_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_654FFD98884CDDEC(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_654FFD98884CDDEC_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_NextStateIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_GET_NEXTSTATEINDEX_OFFSET))(this);
		}

		::System::Void set_NextStateIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_SET_NEXTSTATEINDEX_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIGNALANIMATIONSTATECONNECTION_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
