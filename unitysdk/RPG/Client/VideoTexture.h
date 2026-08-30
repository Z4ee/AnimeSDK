#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_B16AFEE6CD05F5FC;
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_VIDEOTEXTURE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C80BCB0)
#define RPG_CLIENT_VIDEOTEXTURE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1C80C1D0)
#define RPG_CLIENT_VIDEOTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C80C0C0)
#define RPG_CLIENT_VIDEOTEXTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1C80BFB0)
#define RPG_CLIENT_VIDEOTEXTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C80BE30)
#define RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0x1C80C000)
#define RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0x1C80C070)
#define RPG_CLIENT_VIDEOTEXTURE_PLAY_OFFSET UNITYSDK_OFFSET(0x1C80C2C0)
#define RPG_CLIENT_VIDEOTEXTURE_SETRENDERERENABLE_OFFSET UNITYSDK_OFFSET(0x1C80C370)
#define RPG_CLIENT_VIDEOTEXTURE_SETVIDEOINFO_OFFSET UNITYSDK_OFFSET(0x1C80C240)
#define RPG_CLIENT_VIDEOTEXTURE_STOP_OFFSET UNITYSDK_OFFSET(0x1C80C320)
#define RPG_CLIENT_VIDEOTEXTURE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1C80C150)
#define RPG_CLIENT_VIDEOTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C80C400)

namespace RPG::Client
{
	inline static constexpr unsigned int VideoTexture_TypeDefinitionIndex = 73124;

	class VideoTexture : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* KeyPerProp; // 0x18
		::System::String* VideoPath; // 0x20
		::System::String* SoundEvent; // 0x28
		::System::Boolean IsLoop; // 0x30
		::System::Boolean PlayOnEnable; // 0x31
		::System::Single MaterialForwardOffsetFactor; // 0x34
		::System::Single MaterialForwardOffsetUnit; // 0x38
		::Class_2_B16AFEE6CD05F5FC* KADDKEGNCHE; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTACTIVATE_OFFSET))(this);
		}

		::System::Void OnLightweightDeactivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTDEACTIVATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_LATEUPDATE_OFFSET))(this);
		}

		::System::Void SetVideoInfo(::System::String* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_SETVIDEOINFO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Play(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_PLAY_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_STOP_OFFSET))(this);
		}

		::System::Void SetRendererEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_VIDEOTEXTURE_SETRENDERERENABLE_OFFSET))(this, a1);
		}
	};
}
