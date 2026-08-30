#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_DISPOSECAMERA_OFFSET UNITYSDK_OFFSET(0x1B12BE90)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_INITCAMERA_OFFSET UNITYSDK_OFFSET(0x1B12B730)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B12BC20)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B12B940)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW_REFRESH_OFFSET UNITYSDK_OFFSET(0x1B12BB20)
#define RPG_CLIENT_UI3DGAME_CHIMERABATTLECAMERAVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B12C020)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleCameraView_TypeDefinitionIndex = 75355;

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
