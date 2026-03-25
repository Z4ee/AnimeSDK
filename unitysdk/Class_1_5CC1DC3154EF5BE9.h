#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ColliderConfig; }
namespace UnityEngine { class Collider; }

#define CLASS_1_5CC1DC3154EF5BE9_METHOD_1_A29023AF55B068B5_OFFSET UNITYSDK_OFFSET(0x114FDDD0)
#define CLASS_1_5CC1DC3154EF5BE9_METHOD_1_E015411657BD4C96_OFFSET UNITYSDK_OFFSET(0x114FE010)

inline static constexpr unsigned int Class_1_5CC1DC3154EF5BE9_TypeDefinitionIndex = 46055;

class Class_1_5CC1DC3154EF5BE9 : public ::System::Object
{
public:
	static ::System::Void Method_1_A29023AF55B068B5(::RPG::GameCore::ColliderConfig* a1, ::UnityEngine::Collider* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::RPG::GameCore::ColliderConfig*, ::UnityEngine::Collider*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_5CC1DC3154EF5BE9_METHOD_1_A29023AF55B068B5_OFFSET))(a1, a2, a3);
	}

	static ::RPG::GameCore::ColliderConfig* Method_1_E015411657BD4C96(::UnityEngine::Collider* a1)
	{
		return ((::RPG::GameCore::ColliderConfig*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_5CC1DC3154EF5BE9_METHOD_1_E015411657BD4C96_OFFSET))(a1);
	}
};
