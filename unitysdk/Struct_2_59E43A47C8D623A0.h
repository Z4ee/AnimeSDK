#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }

#define STRUCT_2_59E43A47C8D623A0_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x73F60)
#define STRUCT_2_59E43A47C8D623A0__CTOR_OFFSET UNITYSDK_OFFSET(0x73EC0)

inline static constexpr unsigned int Struct_2_59E43A47C8D623A0_TypeDefinitionIndex = 52545;

struct alignas(8) Struct_2_59E43A47C8D623A0
{
	::RPG::GameCore::GameEntity* Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x18
	::UnityEngine::Quaternion Field_2_2; // 0x24

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + STRUCT_2_59E43A47C8D623A0__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_59E43A47C8D623A0_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}
};
