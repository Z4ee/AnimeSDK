#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_DISPOSECAMERA_OFFSET UNITYSDK_OFFSET(0xE318F70)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_INITCAMERA_OFFSET UNITYSDK_OFFSET(0xE318810)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE318D00)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE318A20)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_REFRESH_OFFSET UNITYSDK_OFFSET(0xE318C00)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xE319100)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleCameraView_TypeDefinitionIndex = 75356;

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
