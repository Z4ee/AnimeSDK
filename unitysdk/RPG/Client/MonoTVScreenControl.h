#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

class Class_2_C1CE267B4A549C42;
namespace System { class String; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_MONOTVSCREENCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xD868270)
#define RPG_CLIENT_MONOTVSCREENCONTROL_METHOD_5_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xD868120)
#define RPG_CLIENT_MONOTVSCREENCONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD8683C0)
#define RPG_CLIENT_MONOTVSCREENCONTROL_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD8682D0)
#define RPG_CLIENT_MONOTVSCREENCONTROL_PLAYCUSTOMTEXTURE_OFFSET UNITYSDK_OFFSET(0xD868030)
#define RPG_CLIENT_MONOTVSCREENCONTROL_STOPCUSTOMTEXTURE_OFFSET UNITYSDK_OFFSET(0xD868190)
#define RPG_CLIENT_MONOTVSCREENCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD868340)
#define RPG_CLIENT_MONOTVSCREENCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xD868450)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTVScreenControl_TypeDefinitionIndex = 70708;

	class MonoTVScreenControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* KeyPerProp; // 0x18
		::UnityEngine::Renderer* screenRenderer; // 0x20
		::Il2CppArray<::UnityEngine::Texture2D*>* contensTex; // 0x28
		::Il2CppArray<::System::Int32>* contensTexType; // 0x30
		::System::Boolean UseCustomTextureProperty; // 0x38
		::System::String* CustomContextTexProperty; // 0x40
		::System::Int32 StartIDRandom; // 0x48
		::System::Single contentRemainDuration; // 0x4C
		::System::Single contentFlipDuration; // 0x50
		::UnityEngine::Vector4 currentTexPos; // 0x54
		::UnityEngine::Vector4 nextTexPos; // 0x64
		::System::Boolean isAssigningDirectly; // 0x74
		::System::Int32 assigningID; // 0x78
		::System::Single snowDotIntensity; // 0x7C
		::System::Boolean isTemporaryGlitch; // 0x80
		::UnityEngine::Vector4 glitchSpeed; // 0x84
		::UnityEngine::Vector4 switchByID; // 0x94
		::Class_2_C1CE267B4A549C42* _Behavior; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void PlayCustomTexture(::UnityEngine::Texture2D* a1, ::UnityEngine::Texture2D* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENCONTROL_PLAYCUSTOMTEXTURE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StopCustomTexture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENCONTROL_STOPCUSTOMTEXTURE_OFFSET))(this);
		}

		::System::Void Method_5_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENCONTROL_METHOD_5_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENCONTROL_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENCONTROL_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTVSCREENCONTROL_ONDESTROY_OFFSET))(this);
		}
	};
}
