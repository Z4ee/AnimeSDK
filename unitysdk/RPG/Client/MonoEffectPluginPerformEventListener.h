#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/PerformActionType.h"
#include "unitysdk/RPG/Client/PerformEventType.h"

class Class_2_97E9DD4D3F49F96A;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E8160)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E8240)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E8370)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E8310)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_TICK_OFFSET UNITYSDK_OFFSET(0xC0E83C0)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E8430)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E8440)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E84A0)
#define RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC0E8500)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginPerformEventListener_TypeDefinitionIndex = 65540;

	class MonoEffectPluginPerformEventListener : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::PerformEventType EventType; // 0x28
		::RPG::Client::PerformActionType ActionType; // 0x2C
		::System::String* TriggerCustomString; // 0x30
		::System::String* AttachPoint; // 0x38
		::UnityEngine::GameObject* FlyTarget; // 0x40
		::Class_2_97E9DD4D3F49F96A* Field_6_5; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER__CTOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER_TICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPERFORMEVENTLISTENER___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
