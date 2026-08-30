#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AxisType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class CapsuleCollider; }

#define CLASS_1_56AE464A4331143D_STRUCT_2_1CEEDA3D78689FA3_METHOD_2_8866FFFE77AD9452_OFFSET UNITYSDK_OFFSET(0x14BAC0)
#define CLASS_1_56AE464A4331143D_STRUCT_2_1CEEDA3D78689FA3__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA70)

inline static constexpr unsigned int Class_1_56AE464A4331143D_Struct_2_1CEEDA3D78689FA3_TypeDefinitionIndex = 69240;

struct alignas(4) Class_1_56AE464A4331143D_Struct_2_1CEEDA3D78689FA3
{
	::RPG::GameCore::AxisType AFMHBENIEPG; // 0x10
	::UnityEngine::Vector3 CLIFHNODGEH; // 0x14
	::UnityEngine::Vector3 EDGNGCFCNID; // 0x20

	::System::Void _ctor(::RPG::GameCore::AxisType a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AxisType, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_STRUCT_2_1CEEDA3D78689FA3__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_8866FFFE77AD9452(::UnityEngine::CapsuleCollider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + CLASS_1_56AE464A4331143D_STRUCT_2_1CEEDA3D78689FA3_METHOD_2_8866FFFE77AD9452_OFFSET))(this, a1);
	}
};
