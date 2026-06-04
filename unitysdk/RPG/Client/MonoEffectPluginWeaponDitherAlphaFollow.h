#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0F3EC0)
#define RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0F3E30)
#define RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0F3E70)
#define RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW_TICK_OFFSET UNITYSDK_OFFSET(0xC0F3F00)
#define RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F4080)
#define RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0F4090)
#define RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC0F40F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginWeaponDitherAlphaFollow_TypeDefinitionIndex = 65578;

	class MonoEffectPluginWeaponDitherAlphaFollow : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Renderer* TargetRender; // 0x28
		::System::Single SyncVisibilityDitherAlphaThreshold; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW_TICK_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWEAPONDITHERALPHAFOLLOW___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
