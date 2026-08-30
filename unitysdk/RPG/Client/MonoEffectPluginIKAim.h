#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_60E01478B2952162;
namespace RPG::Client { class AimSolver; }

#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B38C1B0)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B38C2A0)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B38C120)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1B38C380)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0x1B38C410)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1B38C050)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B38C090)
#define RPG_CLIENT_MONOEFFECTPLUGINIKAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B38C420)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginIKAim_TypeDefinitionIndex = 70037;

	class MonoEffectPluginIKAim : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::AimSolver* Solver; // 0x28
		::Class_2_60E01478B2952162* KADDKEGNCHE; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::Class_2_60E01478B2952162* get_Behavior()
		{
			return ((::Class_2_60E01478B2952162*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINIKAIM_GET_BEHAVIOR_OFFSET))(this);
		}
	};
}
