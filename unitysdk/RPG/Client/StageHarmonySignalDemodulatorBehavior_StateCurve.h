#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/StageHarmonySignalDemodulatorBehavior_StateCurve_ToOtherStateType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurveController; }
namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_GET_ONESTEPDURATION_OFFSET UNITYSDK_OFFSET(0xA4C8C10)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_45030DA3EF3AEF01_OFFSET UNITYSDK_OFFSET(0xA4C8CB0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_5D3A3EE49803D6C0_OFFSET UNITYSDK_OFFSET(0xA4C8910)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_854CAFC5FADAC24E_OFFSET UNITYSDK_OFFSET(0xA4C8870)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xA4C8BD0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA4C88C0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_D225EBCFE9DF5FDA_OFFSET UNITYSDK_OFFSET(0xA4C8990)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE__CTOR_OFFSET UNITYSDK_OFFSET(0xA4C9050)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorBehavior_StateCurve_TypeDefinitionIndex = 58150;

	class StageHarmonySignalDemodulatorBehavior_StateCurve : public ::System::Object
	{
	public:
		::System::String* StateName; // 0x10
		::System::Int32 CurveID; // 0x18
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve_ToOtherStateType ToOtherStateMode; // 0x1C
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection*>* StateConnections; // 0x20
		::UnityEngine::AnimationCurve* _AnimCurve; // 0x28
		::System::Single _Timer; // 0x30
		::System::Single _LastPlayerRatio; // 0x34
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurveController* Controller; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_854CAFC5FADAC24E(::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurveController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurveController*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_854CAFC5FADAC24E_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Single Method_1_5D3A3EE49803D6C0(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_5D3A3EE49803D6C0_OFFSET))(this, a1);
		}

		::System::Void Method_1_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Single Method_1_D225EBCFE9DF5FDA(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_D225EBCFE9DF5FDA_OFFSET))(this, a1);
		}

		::System::Void Method_1_45030DA3EF3AEF01(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_METHOD_1_45030DA3EF3AEF01_OFFSET))(this, a1);
		}

		::System::Single get_OneStepDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVE_GET_ONESTEPDURATION_OFFSET))(this);
		}
	};
}
