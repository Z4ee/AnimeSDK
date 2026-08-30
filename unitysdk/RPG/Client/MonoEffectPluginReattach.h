#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/ReattachOption.h"

class Class_2_020E10261646BBF2;

#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C5870)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C5950)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C5A80)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD7C5830)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_REATTACH_OFFSET UNITYSDK_OFFSET(0xD7C5AD0)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C5A30)
#define RPG_CLIENT_MONOEFFECTPLUGINREATTACH__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C5B50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginReattach_TypeDefinitionIndex = 70067;

	class MonoEffectPluginReattach : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::ReattachOption ReattachOption; // 0x28
		::Class_2_020E10261646BBF2* KADDKEGNCHE; // 0x30

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
	};
}
