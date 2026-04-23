#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_A491B638C31D084F;
namespace RPG::Client { class UISetTMPAttribute; }

#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99E640)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99E6D0)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99E600)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xA99E790)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99E5B0)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xA99E7A0)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99E7B0)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99E810)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSDFText_TypeDefinitionIndex = 64631;

	class MonoEffectPluginSDFText : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::UISetTMPAttribute* SDFText; // 0x28
		::Class_2_A491B638C31D084F* Field_6_1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DESTROYPLUGIN_OFFSET))(this);
		}

		::Class_2_A491B638C31D084F* get_Behavior()
		{
			return ((::Class_2_A491B638C31D084F*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}
	};
}
