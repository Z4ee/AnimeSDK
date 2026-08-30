#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_A9D6E9C3BFC6E74E;
namespace RPG::Client { class DelayEnableGameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37F280)
#define RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37F360)
#define RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37F4A0)
#define RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1B37F240)
#define RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37F440)
#define RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_TICK_OFFSET UNITYSDK_OFFSET(0x1B37F4E0)
#define RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B37F550)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginDelayEnableChildren_TypeDefinitionIndex = 70020;

	class MonoEffectPluginDelayEnableChildren : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::DelayEnableGameObject*>* Targets; // 0x28
		::Class_2_A9D6E9C3BFC6E74E* KADDKEGNCHE; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDELAYENABLECHILDREN_TICK_OFFSET))(this, a1);
		}
	};
}
