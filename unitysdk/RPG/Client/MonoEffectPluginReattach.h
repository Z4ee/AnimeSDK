#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/ReattachOption.h"

class Class_2_7F17E8A8CCBE1B04;

#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CDA2C0)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CDA3A0)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CDA4D0)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CDA280)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_REATTACH_OFFSET UNITYSDK_OFFSET(0x9CDA520)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CDA480)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH__CTOR_OFFSET UNITYSDK_OFFSET(0x9CDA5A0)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CDA620)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CDA680)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CDA5B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginReattach_TypeDefinitionIndex = 57365;

	class MonoEffectPluginReattach : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::ReattachOption ReattachOption; // 0x28
		::Class_2_7F17E8A8CCBE1B04* Field_6_1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Reattach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH_REATTACH_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINREATTACH___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}
	};
}
