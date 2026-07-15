#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Collider; }

#define STRUCT_2_591DD46947F040CB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x395C070)
#define STRUCT_2_591DD46947F040CB__CTOR_OFFSET UNITYSDK_OFFSET(0x395C030)

inline static constexpr unsigned int Struct_2_591DD46947F040CB_TypeDefinitionIndex = 67906;

struct alignas(8) Struct_2_591DD46947F040CB
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::UnityEngine::Collider* Field_2_1; // 0x18
	::UnityEngine::Vector3 Field_2_2; // 0x20
	::System::UInt32 Field_2_3; // 0x2C
	::System::Int32 Field_2_4; // 0x30

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Collider*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + STRUCT_2_591DD46947F040CB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Collider* a2, ::UnityEngine::Vector3 a3, ::System::UInt32 a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Collider*, ::UnityEngine::Vector3, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_591DD46947F040CB__CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
