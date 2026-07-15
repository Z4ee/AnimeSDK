#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_NODEROTATIONCONTROLLER_ENDCALCROTATION_OFFSET UNITYSDK_OFFSET(0x18265D90)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_GET_ADDOBJ_OFFSET UNITYSDK_OFFSET(0x18265820)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_METHOD_5_41081A5E55D64FFA_OFFSET UNITYSDK_OFFSET(0x18265940)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_METHOD_5_5C45B76158F16B95_OFFSET UNITYSDK_OFFSET(0x182658E0)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_SET_ADDOBJ_OFFSET UNITYSDK_OFFSET(0x18265830)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_STARTCALCROTATION_OFFSET UNITYSDK_OFFSET(0x18265C90)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x18265A20)
#define RPG_CLIENT_NODEROTATIONCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18265A70)
#define RPG_CLIENT_NODEROTATIONCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18265DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int NodeRotationController_TypeDefinitionIndex = 65585;

	class NodeRotationController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single MovingHeight; // 0x18
		::System::Single FinalRotationAngle; // 0x1C
		::UnityEngine::Vector3 RotationAxis; // 0x20
		::UnityEngine::GameObject* RotationNode; // 0x30
		::System::String* RotationNodeRelativePath; // 0x38
		::UnityEngine::Quaternion Field_5_5; // 0x40
		::System::Single Field_5_6; // 0x50
		::System::Single Field_5_7; // 0x54
		::UnityEngine::GameObject* Field_5_8; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_AddObj()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_GET_ADDOBJ_OFFSET))(this);
		}

		::System::Void set_AddObj(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_SET_ADDOBJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* Method_5_41081A5E55D64FFA()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_METHOD_5_41081A5E55D64FFA_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void StartCalcRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_STARTCALCROTATION_OFFSET))(this);
		}

		::System::Void EndCalcRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_ENDCALCROTATION_OFFSET))(this);
		}

		::System::String* Method_5_5C45B76158F16B95(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NODEROTATIONCONTROLLER_METHOD_5_5C45B76158F16B95_OFFSET))(this, a1, a2);
		}
	};
}
