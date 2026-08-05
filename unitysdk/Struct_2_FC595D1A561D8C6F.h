#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Spline { class NAPPointMeta; }

#define STRUCT_2_FC595D1A561D8C6F__CTOR_1_OFFSET UNITYSDK_OFFSET(0x861710)
#define STRUCT_2_FC595D1A561D8C6F__CTOR_OFFSET UNITYSDK_OFFSET(0x4963B0)

inline static constexpr unsigned int Struct_2_FC595D1A561D8C6F_TypeDefinitionIndex = 42513;

struct alignas(4) Struct_2_FC595D1A561D8C6F
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_7; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::MoleMole::Spline::NAPPointMeta* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Spline::NAPPointMeta*))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F__CTOR_1_OFFSET))(this, a1);
	}
};
