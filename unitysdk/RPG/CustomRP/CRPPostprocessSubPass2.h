#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class CustomPostProcessSettings; }
namespace RPG::CustomRP { class CustomVolumeComponent; }
namespace System { class String; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x192B1F00)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x192B1F10)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x192B1C20)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x192B1C00)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x192B1F20)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ISPPCOMPENABLE_OFFSET UNITYSDK_OFFSET(0x192B1AC0)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ONCHANGEENV_OFFSET UNITYSDK_OFFSET(0x192B1C10)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPCOMP_OFFSET UNITYSDK_OFFSET(0x192B1940)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPOUTPUTRT_OFFSET UNITYSDK_OFFSET(0x192B1970)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPSETTING_OFFSET UNITYSDK_OFFSET(0x192B1950)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUP_OFFSET UNITYSDK_OFFSET(0x192B1960)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_UPDATE_OFFSET UNITYSDK_OFFSET(0x192B1980)
#define RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2__CTOR_OFFSET UNITYSDK_OFFSET(0x192B1930)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPPostprocessSubPass2_TypeDefinitionIndex = 37092;

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

		::System::Void SetupComp(::RPG::CustomRP::CustomVolumeComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomVolumeComponent*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPCOMP_OFFSET))(this, a1);
		}

		::System::Void SetupSetting(::RPG::CustomRP::CustomPostProcessSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::CustomPostProcessSettings*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPSETTING_OFFSET))(this, a1);
		}

		::System::Void Setup(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUP_OFFSET))(this, a1);
		}

		::System::Void SetupOutputRT(::System::Int32& a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_SETUPOUTPUTRT_OFFSET))(this, a1);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_FRAMECLEANUP_OFFSET))(this, a1);
		}

		::System::Void OnChangeEnv(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ONCHANGEENV_OFFSET))(this, a1);
		}

		static ::System::Void Execute(::RPG::CustomRP::CRPPostprocessSubPass2* a1, ::UnityEngine::Rendering::CommandBuffer* a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::RPG::CustomRP::CRPPostprocessSubPass2*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_EXECUTE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void BeginSample(::UnityEngine::Rendering::CommandBuffer* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_BEGINSAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Void EndSample(::UnityEngine::Rendering::CommandBuffer* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ENDSAMPLE_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsPPCompEnable(::RPG::CustomRP::CustomVolumeComponent* a1)
		{
			return ((::System::Boolean(*)(::RPG::CustomRP::CustomVolumeComponent*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_ISPPCOMPENABLE_OFFSET))(a1);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPPOSTPROCESSSUBPASS2_INNEREXECUTE_OFFSET))(this, a1);
		}
	};
}
