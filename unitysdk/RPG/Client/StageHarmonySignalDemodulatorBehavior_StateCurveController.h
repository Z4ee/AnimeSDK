#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurve; }
namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_6F7271C62F1FE776_OFFSET UNITYSDK_OFFSET(0xE0D6350)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0xE0D6260)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_EABB3B542C82E557_OFFSET UNITYSDK_OFFSET(0xE0D5F70)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_FC353143FEF1A387_OFFSET UNITYSDK_OFFSET(0xE0D48D0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D65D0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorBehavior_StateCurveController_TypeDefinitionIndex = 70961;

	class StageHarmonySignalDemodulatorBehavior_StateCurveController : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve_StateConnection*>* InitStateConnections; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve*>* StateCurves; // 0x18
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve* CurrentState; // 0x20
		::System::Boolean _FirstFrame; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_EABB3B542C82E557(::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurve*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_EABB3B542C82E557_OFFSET))(this, a1);
		}

		::System::Single Method_1_FC353143FEF1A387(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_FC353143FEF1A387_OFFSET))(this, a1);
		}

		::System::Void Method_1_805C56F44231AEF9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_805C56F44231AEF9_OFFSET))(this);
		}

		::System::Void Method_1_6F7271C62F1FE776(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORBEHAVIOR_STATECURVECONTROLLER_METHOD_1_6F7271C62F1FE776_OFFSET))(this, a1);
		}
	};
}
