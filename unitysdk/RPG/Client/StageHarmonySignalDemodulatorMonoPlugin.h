#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SignalTransformProcessor_SignalDrivenMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/Struct_2_CC45B4503679E14E_10.h"

class StageHarmonyBaseLinkSlot;
namespace RPG::Client { class SignalCurvePool; }
namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior; }
namespace RPG::Client { class StageHarmonySignalDemodulatorBehavior_StateCurveController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_DUMP_OFFSET UNITYSDK_OFFSET(0xE0D6A30)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE0D7040)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GET_ACTIVECURVEPOOL_OFFSET UNITYSDK_OFFSET(0xE0D7030)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GET_SIGNALCURVE_OFFSET UNITYSDK_OFFSET(0xE0D4C80)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_LOAD_OFFSET UNITYSDK_OFFSET(0xE0D6730)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_METHOD_7_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE0D6FD0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_METHOD_7_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xE0D7020)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_UNLOAD_OFFSET UNITYSDK_OFFSET(0xE0D69E0)
#define RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xE0D7090)

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonySignalDemodulatorMonoPlugin_TypeDefinitionIndex = 70962;

	class StageHarmonySignalDemodulatorMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::StageHarmonySignalDemodulatorBehavior*>
	{
	public:
		::System::String* Channle; // 0x30
		::System::Int32 SerialID; // 0x38
		::RPG::Client::SignalTransformProcessor_SignalDrivenMode signalDrivenMode; // 0x3C
		::RPG::Client::StageHarmonySignalDemodulatorBehavior_StateCurveController* StateCurveControll; // 0x40
		::System::Int32 phaseID; // 0x48
		::System::Single threshold; // 0x4C
		::System::Single speed; // 0x50
		::RPG::Client::SignalCurvePool* linkedCurvePool; // 0x58
		::System::Single Signal; // 0x60
		::System::Int32 curveId; // 0x64
		::System::Collections::Generic::List_1<::StageHarmonyBaseLinkSlot*>* OutputSlots; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Load(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_LOAD_OFFSET))(this, a1);
		}

		::System::Void UnLoad(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_UNLOAD_OFFSET))(this, a1);
		}

		::System::Void Dump(::Struct_2_CC45B4503679E14E_10 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_CC45B4503679E14E_10))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_DUMP_OFFSET))(this, a1);
		}

		::System::Boolean Method_7_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_METHOD_7_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_7_F0088C88851A7DFB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_METHOD_7_F0088C88851A7DFB_OFFSET))(this);
		}

		::RPG::Client::SignalCurvePool* get_ActiveCurvePool()
		{
			return ((::RPG::Client::SignalCurvePool*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GET_ACTIVECURVEPOOL_OFFSET))(this);
		}

		::UnityEngine::AnimationCurve* get_SignalCurve()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GET_SIGNALCURVE_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYSIGNALDEMODULATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}
	};
}
