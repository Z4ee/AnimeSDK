#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCtrlCamera_CtrlCameraMask.h"

class Class_2_920960A1C595BC52;
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_ALIGNTOCAMERA_OFFSET UNITYSDK_OFFSET(0x1B37C920)
#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37C5F0)
#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37C740)
#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_DISABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37C810)
#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37C6D0)
#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_ENABLEPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37C7C0)
#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x1B37C550)
#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x1B37C590)
#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_TICK_OFFSET UNITYSDK_OFFSET(0x1B37C890)
#define RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B37C970)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginCtrlCamera_TypeDefinitionIndex = 70016;

	class MonoEffectPluginCtrlCamera : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::System::Boolean AlignToCameraOnStart; // 0x28
		::RPG::Client::MonoEffectPluginCtrlCamera_CtrlCameraMask CtrlMask; // 0x2C
		::UnityEngine::Transform* CtrlNode; // 0x30
		::Class_2_920960A1C595BC52* KADDKEGNCHE; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void EnablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_ENABLEPLUGIN_OFFSET))(this);
		}

		::System::Void DisablePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_DISABLEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_TICK_OFFSET))(this, a1);
		}

		::System::Void AlignToCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINCTRLCAMERA_ALIGNTOCAMERA_OFFSET))(this);
		}
	};
}
