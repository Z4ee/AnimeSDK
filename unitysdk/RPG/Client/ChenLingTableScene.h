#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChenLingTableSceneType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGTABLESCENE__CTOR_OFFSET UNITYSDK_OFFSET(0xCB8F7F0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingTableScene_TypeDefinitionIndex = 72397;

	class ChenLingTableScene : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _UniqueNodes; // 0x18
		::Cinemachine::CinemachineVirtualCamera* _VirtualCamera; // 0x20
		::Cinemachine::CinemachineVirtualCamera* _4x3VirtualCamera; // 0x28
		::UnityEngine::Renderer* _TableMatRenderer; // 0x30
		::System::Int32 _TableMatIndex; // 0x38
		::System::Single _TableMatOpcityValue; // 0x3C
		::UnityEngine::Vector3 DefaultAudioListenerPosition; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGTABLESCENE__CTOR_OFFSET))(this);
		}
	};
}
