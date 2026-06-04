#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_9F14CFB55CC61F60;

#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC0F9090)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_GET_ANIMLAYERWEIGHT_OFFSET UNITYSDK_OFFSET(0xC0F9410)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_GET_ANIMPARAMS_OFFSET UNITYSDK_OFFSET(0xC0F9470)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ONAUDIOLANGUAGECHANGED_OFFSET UNITYSDK_OFFSET(0xC0F9150)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC0F90F0)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_PLAY_OFFSET UNITYSDK_OFFSET(0xC0F91E0)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_SETUPFRAMEDELTATIME_OFFSET UNITYSDK_OFFSET(0xC0F9320)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_STOP_OFFSET UNITYSDK_OFFSET(0xC0F9270)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_TICK_OFFSET UNITYSDK_OFFSET(0xC0F93A0)
#define RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC0F94E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEmoAnimMouthShapeLayerController_TypeDefinitionIndex = 66500;

	class MonoEmoAnimMouthShapeLayerController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams DefaultAnimParams; // 0x18
		::Class_2_9F14CFB55CC61F60* Field_5_1; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnAudioLanguageChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_ONAUDIOLANGUAGECHANGED_OFFSET))(this);
		}

		::System::Void Play(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_PLAY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_STOP_OFFSET))(this);
		}

		::System::Void SetupFrameDeltaTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_SETUPFRAMEDELTATIME_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_TICK_OFFSET))(this, a1);
		}

		::System::Single get_AnimLayerWeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_GET_ANIMLAYERWEIGHT_OFFSET))(this);
		}

		::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams get_AnimParams()
		{
			return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEMOANIMMOUTHSHAPELAYERCONTROLLER_GET_ANIMPARAMS_OFFSET))(this);
		}
	};
}
