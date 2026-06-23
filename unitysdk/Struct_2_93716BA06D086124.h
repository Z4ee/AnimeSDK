#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace MoleMole::Config { class ConfigZipLine_ConfigExitPointSelection_NavMesh; }

#define STRUCT_2_93716BA06D086124_METHOD_2_8C97CA3BAB7FB2D7_OFFSET UNITYSDK_OFFSET(0x764370)
#define STRUCT_2_93716BA06D086124_METHOD_2_D437D090E63BE8A7_OFFSET UNITYSDK_OFFSET(0x7642E0)

inline static constexpr unsigned int Struct_2_93716BA06D086124_TypeDefinitionIndex = 64213;

struct alignas(8) Struct_2_93716BA06D086124
{
	::MoleMole::Config::ConfigZipLine_ConfigExitPointSelection_NavMesh* Field_2_0; // 0x10
	::FluffyUnderware::Curvy::CurvySpline* Field_2_1; // 0x18
	::System::Single Field_2_2; // 0x20
	::System::Single Field_2_3; // 0x24
	::UnityEngine::Vector3 Field_2_4; // 0x28
	::UnityEngine::Vector3 Field_2_5; // 0x34
	::System::Single Field_2_6; // 0x40
	::System::Nullable_1<::System::Single> Field_2_7; // 0x44
	::System::Nullable_1<::System::Single> Field_2_8; // 0x4C

	::System::Single Method_2_D437D090E63BE8A7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_93716BA06D086124_METHOD_2_D437D090E63BE8A7_OFFSET))(this, a1);
	}

	::System::Single Method_2_8C97CA3BAB7FB2D7(::System::Single a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_93716BA06D086124_METHOD_2_8C97CA3BAB7FB2D7_OFFSET))(this, a1);
	}
};
