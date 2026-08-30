#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_8258879D6E11AFA5;
namespace RPG::Client { class CableProcedural; }

#define RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x116994B0)
#define RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x11699540)
#define RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x11699420)
#define RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x11699600)
#define RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x11699670)
#define RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x11699390)
#define RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL__CTOR_OFFSET UNITYSDK_OFFSET(0x11699680)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCableProcedural_TypeDefinitionIndex = 70008;

	class MonoEffectPluginCableProcedural : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::CableProcedural* CableProcedural; // 0x28
		::Class_2_8258879D6E11AFA5* KADDKEGNCHE; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL__CTOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::Class_2_8258879D6E11AFA5* get_Behavior()
		{
			return ((::Class_2_8258879D6E11AFA5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCABLEPROCEDURAL_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
