#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_GenerateConfig.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_PhaseConfig.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_RunMode.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_TrackMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LoopGenerateBehavior; }
namespace RPG::Client { class LoopGenerateBehavior_RuntimeSlider; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN_COLLECTALLREFASSETPATH_OFFSET UNITYSDK_OFFSET(0x18645420)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN_GET_EFFECTIVESTARTPOS_OFFSET UNITYSDK_OFFSET(0x186417D0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN_HIDEORIGINALCHILDREN_OFFSET UNITYSDK_OFFSET(0x174825C0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN_ONPHASELOOPRESET_OFFSET UNITYSDK_OFFSET(0x17482530)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SETTEMPSPEED_OFFSET UNITYSDK_OFFSET(0x18645550)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SHOWORIGINALCHILDREN_OFFSET UNITYSDK_OFFSET(0x174826A0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SWITCHCONFIG_OFFSET UNITYSDK_OFFSET(0x186454A0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17482780)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateMonoPlugin_TypeDefinitionIndex = 70882;

	class LoopGenerateMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::LoopGenerateBehavior*>
	{
	public:
		::RPG::Client::LoopGenerateBehavior_TrackMode TrackMode; // 0x30
		::System::Single Length; // 0x34
		::System::Boolean UseTransformAsStart; // 0x38
		::System::Boolean CenterAtStart; // 0x39
		::UnityEngine::Vector3 StartPos; // 0x3C
		::RPG::Client::LoopGenerateBehavior_RunMode RunMode; // 0x48
		::System::Int32 DefaultConfigIndex; // 0x4C
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_GenerateConfig>* GenerateConfigs; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_PhaseConfig>* PhaseConfigs; // 0x58
		::System::Int32 AnimPhaseIndex; // 0x60
		::System::Int32 CurrentConfigIndex; // 0x64
		::System::String* DebugCurrentPhase; // 0x68
		::System::String* DebugPhaseProgress; // 0x70
		::System::Single DebugComputedSpeed; // 0x78
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* RuntimeSliders; // 0x80
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* UnusedRuntimeSliders; // 0x88
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* LastUsedRuntimeSliders; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_EffectiveStartPos()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN_GET_EFFECTIVESTARTPOS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::String*>* CollectAllRefAssetPath()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN_COLLECTALLREFASSETPATH_OFFSET))(this);
		}

		::System::Void SwitchConfig(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SWITCHCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void SetTempSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SETTEMPSPEED_OFFSET))(this, a1);
		}

		::System::Void OnPhaseLoopReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN_ONPHASELOOPRESET_OFFSET))(this);
		}

		::System::Void HideOriginalChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN_HIDEORIGINALCHILDREN_OFFSET))(this);
		}

		::System::Void ShowOriginalChildren()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SHOWORIGINALCHILDREN_OFFSET))(this);
		}
	};
}
