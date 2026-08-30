#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define CLASS_1_512CC108C22F737B_CLEAR_OFFSET UNITYSDK_OFFSET(0xCCE7040)
#define CLASS_1_512CC108C22F737B__CTOR_OFFSET UNITYSDK_OFFSET(0xCCE70B0)

inline static constexpr unsigned int Class_1_512CC108C22F737B_TypeDefinitionIndex = 57161;

class Class_1_512CC108C22F737B : public ::System::Object
{
public:
	::UnityEngine::Transform* HKDLAEGJOGB; // 0x10
	::UnityEngine::Collider* KAELPBIMGKK; // 0x18
	::RPG::GameCore::GameEntity* LDEIFAHFFIB; // 0x20
	::UnityEngine::Vector3 KOEJEGHEPAL; // 0x28
	::UnityEngine::Vector3 LDABCOCLAGL; // 0x34
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
