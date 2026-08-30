#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

namespace RPG::Client { class MonoEffectPluginParticleRewind_ParticleSystemItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B38FDF0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B3903C0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1B38FDB0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x1B3902B0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_137034D6EE7EADFD_OFFSET UNITYSDK_OFFSET(0x1B3908B0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_6A0EBEECA245A27C_OFFSET UNITYSDK_OFFSET(0x1B38FE90)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_C72B925A491E9859_OFFSET UNITYSDK_OFFSET(0x1B3909F0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B38FE30)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_TICK_OFFSET UNITYSDK_OFFSET(0x1B390400)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B390B60)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleRewind_TypeDefinitionIndex = 70056;

	class MonoEffectPluginParticleRewind : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::MonoEffectPluginParticleRewind_ParticleSystemItem*>* rewindParticleSystems; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffectPluginParticleRewind_ParticleSystemItem*>* FNLMDNHHPIE; // 0x30
		::Il2CppArray<::System::Single>* CHPIPIFPGHG; // 0x38
		::System::Boolean KDNIIDOBHML; // 0x40
		::System::Boolean BPMGFODJKLK; // 0x41
		::System::Single KJGPBILGDHK; // 0x44

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

		::System::Void Method_6_6A0EBEECA245A27C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEREWIND_METHOD_6_6A0EBEECA245A27C_OFFSET))(this);
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
	};
}
