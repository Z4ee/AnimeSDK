#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_014AE24512CAB52D;
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_MONOEFFECTPLUGINANIM_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A3B00)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A3BE0)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A3AC0)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A3D00)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0A3950)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A3990)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM_TICK_OFFSET UNITYSDK_OFFSET(0xC0A3D50)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xC0A3DC0)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A3E60)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A3EE0)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0A3F20)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0A3DE0)
#define RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC0A3FA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginAnim_TypeDefinitionIndex = 65477;

	class MonoEffectPluginAnim : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::UnityEngine::Animator* Animator; // 0x28
		::Il2CppArray<::System::String*>* DefaultStateNames; // 0x30
		::System::Single TransitionDuration; // 0x38
		::Class_2_014AE24512CAB52D* Field_6_3; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM_TICK_OFFSET))(this, a1);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINANIM___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}
	};
}
