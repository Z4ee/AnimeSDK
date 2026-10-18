#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_512CC108C22F737B_CLEAR_OFFSET UNITYSDK_OFFSET(0xCC590E0)
#define CLASS_1_512CC108C22F737B__CTOR_OFFSET UNITYSDK_OFFSET(0xCC59140)

inline static constexpr unsigned int Class_1_512CC108C22F737B_TypeDefinitionIndex = 56994;

class Class_1_512CC108C22F737B : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* LDEIFAHFFIB; // 0x10
	::UnityEngine::Collider* KAELPBIMGKK; // 0x18
	::UnityEngine::Transform* HKDLAEGJOGB; // 0x20
	::System::UInt32 GEEJAJPPGDG; // 0x28
	::UnityEngine::Vector3 LDABCOCLAGL; // 0x2C
	::System::Boolean HDIKKDBCCKI; // 0x38
	::UnityEngine::Vector3 KOEJEGHEPAL; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_512CC108C22F737B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_512CC108C22F737B_CLEAR_OFFSET))(this);
	}
};
