#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_93DCB8A87A233434;
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99BEF0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99BF30)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99BEB0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA99BDA0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99BDE0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM__CTOR_OFFSET UNITYSDK_OFFSET(0xA99BFF0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99C0D0)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0xA99C070)
#define RPG_CLIENT_MONOEFFECTPLUGINPOSM___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xA99C000)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginPosm_TypeDefinitionIndex = 64620;

	class MonoEffectPluginPosm : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::UnityEngine::GameObject*>* POSMList; // 0x28
		::System::Boolean IsCharacter; // 0x30
		::System::Boolean IsAttachToTarget; // 0x31
		::System::Boolean NeedUI3DShadow; // 0x32
		::Class_2_93DCB8A87A233434* Field_6_4; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM___IFIXBASEPROXY_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPOSM___IFIXBASEPROXY_DISABLEPLUGIN_OFFSET))(this);
		}
	};
}
