#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_0F324A0DDA48BBC6;
namespace RPG::Client { class MatTexItem; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CE68E0)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CE69C0)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CE6AF0)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CE68A0)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CE6AA0)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9CE6B40)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CE6BC0)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9CE6C20)
#define RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET UNITYSDK_OFFSET(0x9CE6B50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectScreenCrackPlugin_TypeDefinitionIndex = 57398;

	class MonoEffectScreenCrackPlugin : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::MatTexItem*>* MatTexMapping; // 0x28
		::System::Boolean CaptureUI; // 0x30
		::UnityEngine::Camera* TargetCamera; // 0x38
		::Class_2_0F324A0DDA48BBC6* Field_6_3; // 0x40

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

		::System::Boolean __iFixBaseProxy_IgnoreInEditor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN___IFIXBASEPROXY_IGNOREINEDITOR_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTSCREENCRACKPLUGIN___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}
	};
}
