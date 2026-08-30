#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_METHOD_5_515934F910E07F75_OFFSET UNITYSDK_OFFSET(0x19EC0CF0)
#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x19EC0BF0)
#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19EC0AF0)
#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19EC0840)
#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19EC11F0)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeBgDelayController_TypeDefinitionIndex = 71294;

	class AvatarPathChangeBgDelayController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* BgTransform; // 0x18
		::System::Single BgMoveRatio; // 0x20
		::UnityEngine::Vector3 DFEMLLMOHMP; // 0x24
		::System::Single IKKNJMJCDOJ; // 0x30
		::UnityEngine::Transform* NKCMKABAAJI; // 0x38
		::UnityEngine::Quaternion HGNJLAJAINK; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_515934F910E07F75(::Cinemachine::CinemachineBrain* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_METHOD_5_515934F910E07F75_OFFSET))(this, a1);
		}
	};
}
