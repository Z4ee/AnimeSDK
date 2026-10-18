#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOITEMBACKGROUND_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD842050)
#define RPG_CLIENT_MONOITEMBACKGROUND_SETANCHORIMAGE_OFFSET UNITYSDK_OFFSET(0xD841C00)
#define RPG_CLIENT_MONOITEMBACKGROUND_SETDUMMYGO_OFFSET UNITYSDK_OFFSET(0xD841860)
#define RPG_CLIENT_MONOITEMBACKGROUND_START_OFFSET UNITYSDK_OFFSET(0xD841C50)
#define RPG_CLIENT_MONOITEMBACKGROUND_UPDATE_OFFSET UNITYSDK_OFFSET(0xD841EE0)
#define RPG_CLIENT_MONOITEMBACKGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xD8420A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoItemBackground_TypeDefinitionIndex = 72581;

	class MonoItemBackground : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* FDLMFOFNBAO; // 0x18
		::UnityEngine::GameObject* FLMODBLFAGD; // 0x20
		::UnityEngine::GameObject* DHGHDFFFBCA; // 0x28
		::UnityEngine::UI::Image* HDDHEHADJOA; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOITEMBACKGROUND__CTOR_OFFSET))(this);
		}

		::System::Void SetDummyGO(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOITEMBACKGROUND_SETDUMMYGO_OFFSET))(this, a1);
		}

		::System::Void SetAnchorImage(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOITEMBACKGROUND_SETANCHORIMAGE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOITEMBACKGROUND_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOITEMBACKGROUND_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOITEMBACKGROUND_ONDESTROY_OFFSET))(this);
		}
	};
}
