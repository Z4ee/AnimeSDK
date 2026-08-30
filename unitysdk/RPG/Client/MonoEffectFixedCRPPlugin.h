#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1167BD60)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1167B800)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_28F3459B67DFCFFF_OFFSET UNITYSDK_OFFSET(0x1167BEA0)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1167B8E0)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_43E290A0B26B39F6_OFFSET UNITYSDK_OFFSET(0x1167C010)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_C1B8E22342A271F3_OFFSET UNITYSDK_OFFSET(0x1167BA70)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_D737CD2779D51A4E_OFFSET UNITYSDK_OFFSET(0x1167B960)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1167BB70)
#define RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1167C3A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectFixedCRPPlugin_TypeDefinitionIndex = 69994;

	class MonoEffectFixedCRPPlugin : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		// static const ::System::Single DKKOEMPGCDI; // 0x0
		::System::String* SampleCameraAnimPath; // 0x28
		::System::String* CustomRenderMaskEffectUniqueName; // 0x30
		::System::Single SampleTime; // 0x38
		::UnityEngine::Rendering::CRPVirtualCamera* VirtualCamera; // 0x40
		::UnityEngine::Camera* SampleCamera; // 0x48
		::UnityEngine::MeshRenderer* JHGPEICPMFP; // 0x50
		::UnityEngine::AnimationClip* IDLCPGDHOEO; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Method_6_C1B8E22342A271F3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_C1B8E22342A271F3_OFFSET))(this, a1);
		}

		::System::Void Method_6_28F3459B67DFCFFF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_28F3459B67DFCFFF_OFFSET))(this, a1);
		}

		::System::Void Method_6_D737CD2779D51A4E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_D737CD2779D51A4E_OFFSET))(this);
		}

		::System::Single Method_6_43E290A0B26B39F6(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_43E290A0B26B39F6_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFIXEDCRPPLUGIN_METHOD_6_30D1209326FA87FC_OFFSET))(this);
		}
	};
}
