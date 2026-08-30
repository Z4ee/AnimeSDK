#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_F4BEAB0EB09FD636;
namespace RPG::Client { class UISetTMPAttribute; }

#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C6B50)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C6BE0)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C6B10)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xD7C6CA0)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7C6AC0)
#define RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xD7C6CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginSDFText_TypeDefinitionIndex = 70072;

	class MonoEffectPluginSDFText : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::UISetTMPAttribute* SDFText; // 0x28
		::Class_2_F4BEAB0EB09FD636* KADDKEGNCHE; // 0x30

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

		::Class_2_F4BEAB0EB09FD636* get_Behavior()
		{
			return ((::Class_2_F4BEAB0EB09FD636*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINSDFTEXT_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
