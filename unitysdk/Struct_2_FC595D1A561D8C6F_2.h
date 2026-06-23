#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Spline { class NAPPointMeta; }

#define STRUCT_2_FC595D1A561D8C6F_2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x733FB0)
#define STRUCT_2_FC595D1A561D8C6F_2__CTOR_OFFSET UNITYSDK_OFFSET(0x361050)

inline static constexpr unsigned int Struct_2_FC595D1A561D8C6F_2_TypeDefinitionIndex = 83621;

struct alignas(4) Struct_2_FC595D1A561D8C6F_2
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::MoleMole::Spline::NAPPointMeta* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Spline::NAPPointMeta*))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F_2__CTOR_1_OFFSET))(this, a1);
	}
};
