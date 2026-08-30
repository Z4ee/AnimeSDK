#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class LevelPedestrianV2RoadPointInfo; }

#define CLASS_1_C8D1FDF5B7DC671F_STRUCT_2_337F30C7300DA789__CTOR_OFFSET UNITYSDK_OFFSET(0x87D30)

inline static constexpr unsigned int Class_1_C8D1FDF5B7DC671F_Struct_2_337F30C7300DA789_TypeDefinitionIndex = 69269;

struct alignas(4) Class_1_C8D1FDF5B7DC671F_Struct_2_337F30C7300DA789
{
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
	::UnityEngine::Vector3 HLENMDAPAGH; // 0x1C
	::UnityEngine::Vector3 NKDECDGECFL; // 0x28
	::UnityEngine::Vector3 CLMKNFILOLB; // 0x34
	::UnityEngine::Vector3 EKLLJLGNOGB; // 0x40
	::System::Single NKPKPNKBBAP; // 0x4C

	::System::Void _ctor(::RPG::GameCore::LevelPedestrianV2RoadPointInfo* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2RoadPointInfo*))((::PBYTE)hIl2Cpp + CLASS_1_C8D1FDF5B7DC671F_STRUCT_2_337F30C7300DA789__CTOR_OFFSET))(this, a1);
	}
};
