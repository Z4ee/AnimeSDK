#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class LevelTriggerShapParam; }
namespace MoleMole { class MonoSceneToFindObject; }

#define MOLEMOLE_MONOSPAWNPOINT_GET_FORWARD_OFFSET UNITYSDK_OFFSET(0x13865930)
#define MOLEMOLE_MONOSPAWNPOINT_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x13865880)
#define MOLEMOLE_MONOSPAWNPOINT_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x138658E0)
#define MOLEMOLE_MONOSPAWNPOINT_GET_SCENETOFINDOBJECT_OFFSET UNITYSDK_OFFSET(0x13865AB0)
#define MOLEMOLE_MONOSPAWNPOINT_GET_TRIGGERPARAM_OFFSET UNITYSDK_OFFSET(0x13865AA0)
#define MOLEMOLE_MONOSPAWNPOINT_GET_XZPOSITION_OFFSET UNITYSDK_OFFSET(0x13865780)
#define MOLEMOLE_MONOSPAWNPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x13865B90)

namespace MoleMole
{
	inline static constexpr unsigned int MonoSpawnPoint_TypeDefinitionIndex = 60377;

	class MonoSpawnPoint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _isTrigger; // 0x18
		::System::Boolean _showGizmos; // 0x19
		::System::Boolean _wireMode; // 0x1A
		::UnityEngine::Color _color; // 0x1C
		::UnityEngine::Vector3 _gizmosSize; // 0x2C
		::UnityEngine::Vector3 _gizmosOffset; // 0x38
		::MoleMole::LevelTriggerShapParam* triggerParam; // 0x48
		::System::Boolean Field_5_7; // 0x50
		::MoleMole::MonoSceneToFindObject* Field_5_8; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_XZPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINT_GET_XZPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINT_GET_POSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_Rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINT_GET_ROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Forward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINT_GET_FORWARD_OFFSET))(this);
		}

		::MoleMole::LevelTriggerShapParam* get_TriggerParam()
		{
			return ((::MoleMole::LevelTriggerShapParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINT_GET_TRIGGERPARAM_OFFSET))(this);
		}

		::MoleMole::MonoSceneToFindObject* get_SceneToFindObject()
		{
			return ((::MoleMole::MonoSceneToFindObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSPAWNPOINT_GET_SCENETOFINDOBJECT_OFFSET))(this);
		}
	};
}
