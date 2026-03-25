#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CustomPostProcessSettings; }
namespace RPG::CustomRP { class CustomVolumeComponent; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x16A73480)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x16A73490)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x16A73360)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x16A73340)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x16A734A0)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ISPPCOMPENABLE_OFFSET UNITYSDK_OFFSET(0x16A73320)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x16A73350)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPCOMP_OFFSET UNITYSDK_OFFSET(0x16A732B0)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPOUTPUTRT_OFFSET UNITYSDK_OFFSET(0x16A732E0)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPSETTING_OFFSET UNITYSDK_OFFSET(0x16A732C0)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUP_OFFSET UNITYSDK_OFFSET(0x16A732D0)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_UPDATE_OFFSET UNITYSDK_OFFSET(0x16A732F0)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2__CTOR_OFFSET UNITYSDK_OFFSET(0x16A732A0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPPostprocessSubPass2_TypeDefinitionIndex = 29384;

	class CRPPostprocessSubPass2 : public ::System::Object
	{
	public:
		::RPG::CustomRP::CustomVolumeComponent* _Comp; // 0x10
		::RPG::CustomRP::CustomPostProcessSettings* _Settings; // 0x18
		::System::Int32 _SrcRT; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2__CTOR_OFFSET))(this);
		}

		::System::Void SetupComp(::RPG::CustomRP::CustomVolumeComponent* comp)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomVolumeComponent*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPCOMP_OFFSET))(this, comp);
		}

		::System::Void SetupSetting(::RPG::CustomRP::CustomPostProcessSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomPostProcessSettings*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPSETTING_OFFSET))(this, settings);
		}

		::System::Void Setup(::System::Int32 srcRT)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUP_OFFSET))(this, srcRT);
		}

		::System::Void SetupOutputRT(::System::Int32& outputID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPOUTPUTRT_OFFSET))(this, outputID);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void OnChangeEnv(::System::Boolean isLeaveScene)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ONCHANGEENV_OFFSET))(this, isLeaveScene);
		}

		static ::System::Void Execute(::RPG::CustomRP::CRPPostprocessSubPass2* pass, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32& srcRT)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPPostprocessSubPass2*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_EXECUTE_OFFSET))(pass, cmd, srcRT);
		}

		static ::System::Void BeginSample(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* tagName)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_BEGINSAMPLE_OFFSET))(cmd, tagName);
		}

		static ::System::Void EndSample(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::String* tagName)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ENDSAMPLE_OFFSET))(cmd, tagName);
		}

		static ::System::Boolean IsPPCompEnable(::RPG::CustomRP::CustomVolumeComponent* comp)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::CustomVolumeComponent*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ISPPCOMPENABLE_OFFSET))(comp);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_INNEREXECUTE_OFFSET))(this, cmd);
		}
	};
}
