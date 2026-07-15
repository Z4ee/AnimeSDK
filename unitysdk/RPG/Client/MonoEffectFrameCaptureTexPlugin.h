#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginBase.h"

class Class_2_DAF15F37AD9CA1B0;
namespace RPG::Client { class MonoEffectFrameCaptureTexPlugin_MatTexItem; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_APPLYFRAMECAPTURE_OFFSET UNITYSDK_OFFSET(0x10CE4A90)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_AWAKEPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CE4AE0)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DESTROYPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CE4C60)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_DISPOSEPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CE4C10)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN_RESETPLUGIN_OFFSET UNITYSDK_OFFSET(0x10CE4BC0)
#define RPG_CLIENT_MONOEFFECTFRAMECAPTURETEXPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x10CE4D00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectFrameCaptureTexPlugin_TypeDefinitionIndex = 66890;

	class MonoEffectFrameCaptureTexPlugin : public ::RPG::Client::MonoEffectPluginBase
	{
	public:
		::Il2CppArray<::RPG::Client::MonoEffectFrameCaptureTexPlugin_MatTexItem*>* MatTexMapping; // 0x28
		::System::Boolean CaptureUI; // 0x30
		::UnityEngine::Camera* TargetCamera; // 0x38
		::System::Boolean DontApplyOnActive; // 0x40
		::Class_2_DAF15F37AD9CA1B0* Field_6_4; // 0x48

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
	};
}
