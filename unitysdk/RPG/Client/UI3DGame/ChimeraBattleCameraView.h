#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_DISPOSECAMERA_OFFSET UNITYSDK_OFFSET(0xE34D830)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_INITCAMERA_OFFSET UNITYSDK_OFFSET(0xE34D0D0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE34D5C0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE34D2E0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_REFRESH_OFFSET UNITYSDK_OFFSET(0xE34D4C0)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xE34D9C0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleCameraView_TypeDefinitionIndex = 75770;

	class ChimeraBattleCameraView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Cinemachine::CinemachineVirtualCamera* _Camera43; // 0x18
		::Cinemachine::CinemachineVirtualCamera* _Camera169; // 0x20
		::UnityEngine::Transform* AudioListener; // 0x28
		::Cinemachine::CinemachineVirtualCamera* Camera; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW__CTOR_OFFSET))(this);
		}

		::System::Void InitCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_INITCAMERA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_ONDISABLE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_REFRESH_OFFSET))(this);
		}

		::System::Void DisposeCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_DISPOSECAMERA_OFFSET))(this);
		}
	};
}
