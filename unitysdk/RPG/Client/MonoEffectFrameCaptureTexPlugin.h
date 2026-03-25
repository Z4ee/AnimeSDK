#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_1AEFE812A37690A3;
namespace RPG::Client { class MonoEffectFrameCaptureTexPlugin_MatTexItem; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_APPLYFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0x9C7D740)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9C7D790)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9C7D910)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9C7D8C0)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x9C7D870)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x9C7D9B0)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x9C7D9D0)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x9C7DA50)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectFrameCaptureTexPlugin_TypeDefinitionIndex = 57300;

	class MonoEffectFrameCaptureTexPlugin : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::MonoEffectFrameCaptureTexPlugin_MatTexItem*>* MatTexMapping; // 0x28
		::System::Boolean CaptureUI; // 0x30
		::UnityEngine::Camera* TargetCamera; // 0x38
		::System::Boolean DontApplyOnActive; // 0x40
		::Class_2_1AEFE812A37690A3* Field_6_4; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void ApplyFrameCapture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_APPLYFRAMECAPTURE_OFFSET))(this);
		}

		::System::Void AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void ResetPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_RESETPLUGIN_OFFSET))(this);
		}

		::System::Void DisposePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DISPOSEPLUGIN_OFFSET))(this);
		}

		::System::Void DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DESTROYPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_AwakePlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN___IFIXBASEPROXY_AWAKEPLUGIN_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_DestroyPlugin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN___IFIXBASEPROXY_DESTROYPLUGIN_OFFSET))(this);
		}
	};
}
