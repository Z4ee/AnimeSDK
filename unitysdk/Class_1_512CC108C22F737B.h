#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_512CC108C22F737B_CLEAR_OFFSET UNITYSDK_OFFSET(0x157E3A10)
#define CLASS_1_512CC108C22F737B__CTOR_OFFSET UNITYSDK_OFFSET(0x157E3A80)

inline static constexpr unsigned int Class_1_512CC108C22F737B_TypeDefinitionIndex = 57161;

class Class_1_512CC108C22F737B : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* LDEIFAHFFIB; // 0x10
	::UnityEngine::Transform* HKDLAEGJOGB; // 0x18
	::UnityEngine::Collider* KAELPBIMGKK; // 0x20
	::UnityEngine::Vector3 LDABCOCLAGL; // 0x28
	::UnityEngine::Vector3 KOEJEGHEPAL; // 0x34
	::System::Boolean HDIKKDBCCKI; // 0x40
	::System::UInt32 GEEJAJPPGDG; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_512CC108C22F737B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_512CC108C22F737B_CLEAR_OFFSET))(this);
	}
};
