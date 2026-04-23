#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/UnityEngine/ParticleSystem_Particle.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA998DF0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA998DB0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9984F0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_GETTRACKPOSITION_OFFSET UNITYSDK_OFFSET(0xA999650)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA998460)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_METHOD_6_033313625F774F11_OFFSET UNITYSDK_OFFSET(0xA998C00)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_METHOD_6_04498CD936205082_OFFSET UNITYSDK_OFFSET(0xA998FA0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_RESETMEMBERS_OFFSET UNITYSDK_OFFSET(0xA9995B0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9984A0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_SETLIFETIME_OFFSET UNITYSDK_OFFSET(0xA999700)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_SETTRACKTARGET_OFFSET UNITYSDK_OFFSET(0xA999600)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_TICK_OFFSET UNITYSDK_OFFSET(0xA998E60)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xA999810)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA999900)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA9998A0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA999830)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xA999960)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleFollow_TypeDefinitionIndex = 64612;

	class MonoEffectPluginParticleFollow : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::GameObject* TrackObject; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>* Field_6_1; // 0x30
		::System::Single Field_6_2; // 0x38
		::System::Single Field_6_3; // 0x3C
		::System::Single Field_6_4; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_TICK_OFFSET))(this, a1);
		}

		::System::Void ResetMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_RESETMEMBERS_OFFSET))(this);
		}

		::System::Void SetTrackTarget(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_SETTRACKTARGET_OFFSET))(this, a1);
		}

		::System::Boolean GetTrackPosition(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_GETTRACKPOSITION_OFFSET))(this, a1);
		}

		::System::Void SetLifetime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_SETLIFETIME_OFFSET))(this, a1);
		}

		::System::Void Method_6_033313625F774F11(::UnityEngine::GameObject* a1, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_METHOD_6_033313625F774F11_OFFSET))(this, a1, a2);
		}

		::System::Void Method_6_04498CD936205082(::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*& a1, ::UnityEngine::ParticleSystem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Particle>*&, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW_METHOD_6_04498CD936205082_OFFSET))(this, a1, a2);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEFOLLOW___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}
