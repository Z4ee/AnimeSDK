#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB58EAB0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_7865C2E7793795CC_OFFSET UNITYSDK_OFFSET(0xB58A1C0)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xB58DA80)
#define RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD__CTOR_OFFSET UNITYSDK_OFFSET(0xB58E9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMovementManager_Class_1_1DE6262BF29C2AFD_TypeDefinitionIndex = 52626;

	class AdventureMovementManager_Class_1_1DE6262BF29C2AFD : public ::System::Object
	{
	public:
		// static const ::System::Single Field_1_0; // 0x0
		::UnityEngine::Transform* Field_1_2; // 0x10
		::System::Int32 Field_1_1; // 0x18
		::UnityEngine::Quaternion Field_1_4; // 0x1C
		::UnityEngine::Vector3 Field_1_3; // 0x2C

		::System::Void _ctor(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean Method_1_A3FAE12D7B6ACD62()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMOVEMENTMANAGER_CLASS_1_1DE6262BF29C2AFD_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
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
