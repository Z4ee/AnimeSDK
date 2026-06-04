#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_GenerateConfig.h"
#include "unitysdk/RPG/Client/LoopGenerateBehavior_TrackMode.h"
#include "unitysdk/RPG/Client/TAMonoPlugin_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class LoopGenerateBehavior; }
namespace RPG::Client { class LoopGenerateBehavior_RuntimeSlider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SETTEMPSPEED_OFFSET UNITYSDK_OFFSET(0xBE7B9A0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SWITCHCONFIG_OFFSET UNITYSDK_OFFSET(0xBE7B8F0)
#define RPG_CLIENT_LOOPGENERATEMONOPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xBE7BA60)

namespace RPG::Client
{
	inline static constexpr unsigned int LoopGenerateMonoPlugin_TypeDefinitionIndex = 66298;

	class LoopGenerateMonoPlugin : public ::RPG::Client::TAMonoPlugin_1<::RPG::Client::LoopGenerateBehavior*>
	{
	public:
		::RPG::Client::LoopGenerateBehavior_TrackMode TrackMode; // 0x30
		::System::Single Length; // 0x34
		::UnityEngine::Vector3 StartPos; // 0x38
		::System::Int32 DefaultConfigIndex; // 0x44
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_GenerateConfig>* GenerateConfigs; // 0x48
		::System::Int32 CurrentConfigIndex; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* RuntimeSliders; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* UnusedRuntimeSliders; // 0x60
		::System::Collections::Generic::List_1<::RPG::Client::LoopGenerateBehavior_RuntimeSlider*>* LastUsedRuntimeSliders; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void SwitchConfig(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SWITCHCONFIG_OFFSET))(this, a1, a2);
		}

		::System::Void SetTempSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LOOPGENERATEMONOPLUGIN_SETTEMPSPEED_OFFSET))(this, a1);
		}
	};
}
