#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBrain; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_METHOD_5_515934F910E07F75_OFFSET UNITYSDK_OFFSET(0xB38E540)
#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB38E420)
#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xB38E300)
#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0xB38E030)
#define RPG_CLIENT_AVATARPATHCHANGEBGDELAYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB38EA40)

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarPathChangeBgDelayController_TypeDefinitionIndex = 66681;

	class AvatarPathChangeBgDelayController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* BgTransform; // 0x18
		::System::Single BgMoveRatio; // 0x20
		::UnityEngine::Vector3 Field_5_2; // 0x24
		::System::Single Field_5_3; // 0x30
		::UnityEngine::Transform* Field_5_4; // 0x38
		::UnityEngine::Quaternion Field_5_5; // 0x40

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
