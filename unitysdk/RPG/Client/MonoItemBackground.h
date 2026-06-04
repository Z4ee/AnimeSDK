#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_MONOITEMBACKGROUND_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xC123F20)
#define RPG_CLIENT_MONOITEMBACKGROUND_SETANCHORIMAGE_OFFSET UNITYSDK_OFFSET(0xC123AD0)
#define RPG_CLIENT_MONOITEMBACKGROUND_SETDUMMYGO_OFFSET UNITYSDK_OFFSET(0xC123760)
#define RPG_CLIENT_MONOITEMBACKGROUND_START_OFFSET UNITYSDK_OFFSET(0xC123B20)
#define RPG_CLIENT_MONOITEMBACKGROUND_UPDATE_OFFSET UNITYSDK_OFFSET(0xC123DB0)
#define RPG_CLIENT_MONOITEMBACKGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xC123F70)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoItemBackground_TypeDefinitionIndex = 67814;

	class MonoItemBackground : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* Field_5_0; // 0x18
		::UnityEngine::GameObject* Field_5_1; // 0x20
		::UnityEngine::GameObject* Field_5_2; // 0x28
		::UnityEngine::UI::Image* Field_5_3; // 0x30

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
