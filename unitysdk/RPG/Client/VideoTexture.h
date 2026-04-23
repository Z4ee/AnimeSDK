#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_F8201D2F91EFF942;
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_VIDEOTEXTURE_AWAKE_OFFSET UNITYSDK_OFFSET(0xB4780D0)
#define RPG_CLIENT_VIDEOTEXTURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB478410)
#define RPG_CLIENT_VIDEOTEXTURE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB4782C0)
#define RPG_CLIENT_VIDEOTEXTURE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB4781C0)
#define RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTACTIVATE_OFFSET UNITYSDK_OFFSET(0xB478330)
#define RPG_CLIENT_VIDEOTEXTURE_ONLIGHTWEIGHTDEACTIVATE_OFFSET UNITYSDK_OFFSET(0xB4783A0)
#define RPG_CLIENT_VIDEOTEXTURE_PLAY_OFFSET UNITYSDK_OFFSET(0xB4785E0)
#define RPG_CLIENT_VIDEOTEXTURE_SETRENDERERENABLE_OFFSET UNITYSDK_OFFSET(0xB4786B0)
#define RPG_CLIENT_VIDEOTEXTURE_SETVIDEOINFO_OFFSET UNITYSDK_OFFSET(0xB478560)
#define RPG_CLIENT_VIDEOTEXTURE_STOP_OFFSET UNITYSDK_OFFSET(0xB478640)
#define RPG_CLIENT_VIDEOTEXTURE_UPDATE_OFFSET UNITYSDK_OFFSET(0xB4784E0)
#define RPG_CLIENT_VIDEOTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0xB478740)

namespace RPG::Client
{
	inline static constexpr unsigned int VideoTexture_TypeDefinitionIndex = 67423;

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
		::Class_2_F8201D2F91EFF942* Field_5_7; // 0x40

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
