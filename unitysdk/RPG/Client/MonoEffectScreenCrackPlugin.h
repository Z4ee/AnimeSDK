#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_AC6A6A3E0030E7D9;
namespace RPG::Client { class MatTexItem; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7D1AC0)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7D1BA0)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7D1CD0)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xD7D1A80)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xD7D1C80)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0xD7D1D20)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectScreenCrackPlugin_TypeDefinitionIndex = 70102;

	class MonoEffectScreenCrackPlugin : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::MatTexItem*>* MatTexMapping; // 0x28
		::System::Boolean CaptureUI; // 0x30
		::UnityEngine::Camera* TargetCamera; // 0x38
		::Class_2_AC6A6A3E0030E7D9* KADDKEGNCHE; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_DISPOSEPLUGIN_OFFSET))(this);
		}
	};
}
