#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/FollowVisibilityType.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_E7E54080F13AC12A;

#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912ECC0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912EDB0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912EEB0)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1912EC80)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1912EE70)
#define RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1912EEF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFollowVisibility_TypeDefinitionIndex = 66928;

	class MonoEffectPluginFollowVisibility : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::FollowVisibilityType FollowType; // 0x28
		::Class_2_E7E54080F13AC12A* Field_6_1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFOLLOWVISIBILITY_DISPOSEPLUGIN_OFFSET))(this);
		}
	};
}
