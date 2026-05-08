#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B6C74DD58A25C617.h"
#include "unitysdk/Enum_3_BB2C27F60FA583B0.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_INTERACTIONPOINT_GETINTERACTDIRECTION_OFFSET UNITYSDK_OFFSET(0x13838F10)
#define MOLEMOLE_INTERACTIONPOINT_GETPOINTPOS_OFFSET UNITYSDK_OFFSET(0x13838D20)
#define MOLEMOLE_INTERACTIONPOINT_GET_ACCURATE_OFFSET UNITYSDK_OFFSET(0x138391C0)
#define MOLEMOLE_INTERACTIONPOINT_GET_MAXANGLE_OFFSET UNITYSDK_OFFSET(0x138391E0)
#define MOLEMOLE_INTERACTIONPOINT_GET_MINANGLE_OFFSET UNITYSDK_OFFSET(0x138391D0)
#define MOLEMOLE_INTERACTIONPOINT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x13838CE0)
#define MOLEMOLE_INTERACTIONPOINT_GET_RANGE_OFFSET UNITYSDK_OFFSET(0x13839200)
#define MOLEMOLE_INTERACTIONPOINT_GET_USENAVMESH_OFFSET UNITYSDK_OFFSET(0x138391F0)
#define MOLEMOLE_INTERACTIONPOINT_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x13839210)
#define MOLEMOLE_INTERACTIONPOINT_SET_NAME_OFFSET UNITYSDK_OFFSET(0x13838CF0)
#define MOLEMOLE_INTERACTIONPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x13838D00)

namespace MoleMole
{
	inline static constexpr unsigned int InteractionPoint_TypeDefinitionIndex = 37948;

	class InteractionPoint : public ::System::Object
	{
	public:
		::UnityEngine::Transform* pointTransform; // 0x10
		::System::Single range; // 0x18
		::System::Single minAngle; // 0x1C
		::System::Single maxAngle; // 0x20
		::Enum_3_BB2C27F60FA583B0 DirectionType; // 0x24
		::System::Boolean useNavmesh; // 0x28
		::Enum_3_B6C74DD58A25C617 interactType; // 0x2C
		::System::Boolean accurate; // 0x30
		::UnityEngine::Vector3 pointTransformOffset; // 0x34
		::UnityEngine::Vector3 pointCalculatedPos; // 0x40
		::System::Boolean isDirty; // 0x4C
		::System::String* _Name_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_SET_NAME_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPointPos(::System::Boolean a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GETPOINTPOS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetInteractDirection(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GETINTERACTDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_Accurate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_ACCURATE_OFFSET))(this);
		}

		::System::Single get_MinAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_MINANGLE_OFFSET))(this);
		}

		::System::Single get_MaxAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_MAXANGLE_OFFSET))(this);
		}

		::System::Boolean get_UseNavMesh()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_USENAVMESH_OFFSET))(this);
		}

		::System::Single get_Range()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_GET_RANGE_OFFSET))(this);
		}

		::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTIONPOINT_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
		}
	};
}
