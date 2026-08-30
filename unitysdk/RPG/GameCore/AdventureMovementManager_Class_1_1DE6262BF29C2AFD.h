#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE4EAA00)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xE4E98A0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_7865C2E7793795CC_OFFSET UNITYSDK_OFFSET(0xE4E56A0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD__CTOR_OFFSET UNITYSDK_OFFSET(0xE4EA920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_Class_1_1DE6262BF29C2AFD_TypeDefinitionIndex = 57262;

	class AdventureMovementManager_Class_1_1DE6262BF29C2AFD : public ::System::Object
	{
	public:
		// static const ::System::Single LDNMJCNCGOJ; // 0x0
		::UnityEngine::Transform* DICDJJOJKGF; // 0x10
		::System::Int32 GDBJDAOOCOH; // 0x18
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x1C
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x2C

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
