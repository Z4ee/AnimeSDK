#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_3C21D43C91D2A590;

#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BC8B0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BC9B0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BC7E0)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xD7BCA90)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7BC730)
#define RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0xD7BCB90)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFiveDimFeature_TypeDefinitionIndex = 70025;

	class MonoEffectPluginFiveDimFeature : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Class_2_3C21D43C91D2A590* _Behavior; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFIVEDIMFEATURE_ENDOFLATETICK_OFFSET))(this, a1);
		}
	};
}
