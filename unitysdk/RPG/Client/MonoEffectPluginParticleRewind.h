#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

namespace RPG::Client { class MonoEffectPluginParticleRewind_ParticleSystemItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E7060)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E7650)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0E7020)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0xC0E7540)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_137034D6EE7EADFD_OFFSET UNITYSDK_OFFSET(0xC0E7B40)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_19FB5FBEA9EA66CD_OFFSET UNITYSDK_OFFSET(0xC0E7100)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0xC0E7BE0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E70A0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_TICK_OFFSET UNITYSDK_OFFSET(0xC0E7690)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E7D50)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E8000)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0E7FA0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC0E8060)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleRewind_TypeDefinitionIndex = 65536;

	class MonoEffectPluginParticleRewind : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::MonoEffectPluginParticleRewind_ParticleSystemItem*>* rewindParticleSystems; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginParticleRewind_ParticleSystemItem*>* Field_6_1; // 0x30
		::Il2CppArray<::System::Single>* Field_6_2; // 0x38
		::System::Boolean Field_6_3; // 0x40
		::System::Boolean Field_6_4; // 0x41
		::System::Single Field_6_5; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_6_19FB5FBEA9EA66CD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_19FB5FBEA9EA66CD_OFFSET))(this);
		}

		::System::Void Method_6_08DCF72FBE01FF99()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_08DCF72FBE01FF99_OFFSET))(this);
		}

		::System::Void Method_6_137034D6EE7EADFD(::UnityEngine::ParticleSystem* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_137034D6EE7EADFD_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_C72B925A491E9859()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_C72B925A491E9859_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
