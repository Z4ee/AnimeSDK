#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_CDB0B70212C8BF02;

#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD810A00)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD810B90)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD810AC0)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD8109C0)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD810A70)
#define RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR__CTOR_OFFSET UNITYSDK_OFFSET(0xD810BF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginWaterColor_TypeDefinitionIndex = 70134;

	class MonoEffectPluginWaterColor : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Class_2_CDB0B70212C8BF02* KADDKEGNCHE; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINWATERCOLOR_DESTROYPLUGIN_OFFSET))(this);
		}
	};
}
