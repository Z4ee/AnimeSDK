#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonopolyBoundaryUtils; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOPOLYDRAGMAPCMPT_DODRAG_OFFSET UNITYSDK_OFFSET(0xD886780)
#define RPG_CLIENT_MONOPOLYDRAGMAPCMPT_GET_ISCAMERAMOVED_OFFSET UNITYSDK_OFFSET(0xD886BA0)
#define RPG_CLIENT_MONOPOLYDRAGMAPCMPT_ONDRAGSTART_OFFSET UNITYSDK_OFFSET(0xD886720)
#define RPG_CLIENT_MONOPOLYDRAGMAPCMPT_RESETCAMERA_OFFSET UNITYSDK_OFFSET(0xD886BC0)
#define RPG_CLIENT_MONOPOLYDRAGMAPCMPT_SET_ISCAMERAMOVED_OFFSET UNITYSDK_OFFSET(0xD886BB0)
#define RPG_CLIENT_MONOPOLYDRAGMAPCMPT_START_OFFSET UNITYSDK_OFFSET(0xD8865A0)
#define RPG_CLIENT_MONOPOLYDRAGMAPCMPT__CTOR_OFFSET UNITYSDK_OFFSET(0xD886CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyDragMapCmpt_TypeDefinitionIndex = 72760;

	class MonopolyDragMapCmpt : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single Speed; // 0x18
		::UnityEngine::Vector3 Rotation; // 0x1C
		::Cinemachine::CinemachineVirtualCamera* _Camera; // 0x28
		::UnityEngine::Vector3 _Offset; // 0x30
		::UnityEngine::Transform* _OriginLookAt; // 0x40
		::RPG::Client::MonopolyBoundaryUtils* _Utils; // 0x48
		::System::Boolean _IsCameraMoved_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDRAGMAPCMPT__CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDRAGMAPCMPT_START_OFFSET))(this);
		}

		::System::Void OnDragStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDRAGMAPCMPT_ONDRAGSTART_OFFSET))(this);
		}

		::System::Void DoDrag(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDRAGMAPCMPT_DODRAG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCameraMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDRAGMAPCMPT_GET_ISCAMERAMOVED_OFFSET))(this);
		}

		::System::Void set_IsCameraMoved(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDRAGMAPCMPT_SET_ISCAMERAMOVED_OFFSET))(this, a1);
		}

		::System::Void ResetCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYDRAGMAPCMPT_RESETCAMERA_OFFSET))(this);
		}
	};
}
