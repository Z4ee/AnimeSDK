#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"
#include "unitysdk/RPG/Client/MonoEffectPluginFrameCapture_CaptureCameraType.h"

class Class_2_8D3E80527455688C;
namespace System { class String; }
namespace UnityEngine { class Renderer; }

#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E15C0)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E16A0)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E14B0)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_GET_BEHAVIOR_OFFSET UNITYSDK_OFFSET(0xC0E1760)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0E13E0)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E1420)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_TICK_OFFSET UNITYSDK_OFFSET(0xC0E1540)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE__CTOR_OFFSET UNITYSDK_OFFSET(0xC0E1770)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E1820)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0xC0E1860)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0xC0E1780)
#define RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xC0E17C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginFrameCapture_TypeDefinitionIndex = 65514;

	class MonoEffectPluginFrameCapture : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::RPG::Client::MonoEffectPluginFrameCapture_CaptureCameraType CameraType; // 0x28
		::System::Boolean Immediately; // 0x2C
		::UnityEngine::Renderer* CaptureRenderer; // 0x30
		::System::Int32 MaterialIndex; // 0x38
		::System::String* TexName; // 0x40
		::Class_2_8D3E80527455688C* Field_6_5; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE__CTOR_OFFSET))(this);
		}

		::System::Boolean IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_TICK_OFFSET))(this, a1);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_DESTROYPLUGIN_OFFSET))(this);
		}

		::Class_2_8D3E80527455688C* get_Behavior()
		{
			return ((::Class_2_8D3E80527455688C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE_GET_BEHAVIOR_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE___IFIXBASEPROXY_TICK_OFFSET))(this, a1);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINFRAMECAPTURE___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}
	};
}
