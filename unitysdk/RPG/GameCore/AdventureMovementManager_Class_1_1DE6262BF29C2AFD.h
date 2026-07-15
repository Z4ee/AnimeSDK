#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15411BA0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x15410AE0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_7865C2E7793795CC_OFFSET UNITYSDK_OFFSET(0x1540D010)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD__CTOR_OFFSET UNITYSDK_OFFSET(0x15411AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_Class_1_1DE6262BF29C2AFD_TypeDefinitionIndex = 54541;

	class AdventureMovementManager_Class_1_1DE6262BF29C2AFD : public ::System::Object
	{
	public:
		// static const ::System::Single Field_1_0; // 0x0
		::UnityEngine::Transform* Field_1_1; // 0x10
		::UnityEngine::Quaternion Field_1_2; // 0x18
		::UnityEngine::Vector3 Field_1_3; // 0x28
		::System::Int32 Field_1_4; // 0x34

		::System::Void _ctor(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_4DA6D4A624E42CAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Method_1_7865C2E7793795CC(::UnityEngine::Collider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_7865C2E7793795CC_OFFSET))(this, a1);
		}
	};
}
