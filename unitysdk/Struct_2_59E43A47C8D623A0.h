#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_59E43A47C8D623A0_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x3AF34C0)
#define STRUCT_2_59E43A47C8D623A0__CTOR_OFFSET UNITYSDK_OFFSET(0x3AF3420)

inline static constexpr unsigned int Struct_2_59E43A47C8D623A0_TypeDefinitionIndex = 57181;

struct alignas(8) Struct_2_59E43A47C8D623A0
{
	::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x10
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x24

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_59E43A47C8D623A0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_59E43A47C8D623A0_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}
};
