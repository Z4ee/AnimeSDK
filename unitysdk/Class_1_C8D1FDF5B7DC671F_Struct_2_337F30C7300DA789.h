#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LevelPedestrianV2RoadPointInfo; }

#define CLASS_1_C8D1FDF5B7DC671F_STRUCT_2_337F30C7300DA789__CTOR_OFFSET UNITYSDK_OFFSET(0x829C0)

inline static constexpr unsigned int Class_1_C8D1FDF5B7DC671F_Struct_2_337F30C7300DA789_TypeDefinitionIndex = 64808;

struct alignas(4) Class_1_C8D1FDF5B7DC671F_Struct_2_337F30C7300DA789
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::UnityEngine::Vector3 Field_2_2; // 0x28
	::UnityEngine::Vector3 Field_2_3; // 0x34
	::UnityEngine::Vector3 Field_2_4; // 0x40
	::System::Single Field_2_5; // 0x4C

	::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2RoadPointInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2RoadPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_STRUCT_2_337F30C7300DA789__CTOR_OFFSET))(this, a1);
	}
};
