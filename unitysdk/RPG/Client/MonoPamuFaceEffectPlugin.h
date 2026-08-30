#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOPAMUFACEEFFECTPLUGIN_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1ACFE820)
#define RPG_CLIENT_MONOPAMUFACEEFFECTPLUGIN_START_OFFSET UNITYSDK_OFFSET(0x1ACFE7E0)
#define RPG_CLIENT_MONOPAMUFACEEFFECTPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACFEEC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPamuFaceEffectPlugin_TypeDefinitionIndex = 68578;

	class MonoPamuFaceEffectPlugin : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* centerObject; // 0x18
		::UnityEngine::GameObject* leftBone; // 0x20
		::UnityEngine::GameObject* rightBone; // 0x28
		::UnityEngine::Vector4 frontOffsetScale; // 0x30
		::UnityEngine::Vector4 sideOffsetScale; // 0x40
		::UnityEngine::Vector4 HMPHEFLLIKC; // 0x50
		::UnityEngine::Vector4 KGAOFGJGKPG; // 0x60
		::UnityEngine::Vector4 DPHPGKFIDMA; // 0x70
		::UnityEngine::Vector4 HMACHLDCGIC; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPAMUFACEEFFECTPLUGIN__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPAMUFACEEFFECTPLUGIN_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPAMUFACEEFFECTPLUGIN_LATEUPDATE_OFFSET))(this);
		}
	};
}
