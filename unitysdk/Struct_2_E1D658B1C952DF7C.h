#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_8FD97C8068FD2492.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace MoleMole { class MonoAirBusSegment; }

#define STRUCT_2_E1D658B1C952DF7C_METHOD_2_01A86BFC2138AD3D_OFFSET UNITYSDK_OFFSET(0x802EB0)
#define STRUCT_2_E1D658B1C952DF7C_METHOD_2_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x802EA0)

inline static constexpr unsigned int Struct_2_E1D658B1C952DF7C_TypeDefinitionIndex = 82313;

struct alignas(8) Struct_2_E1D658B1C952DF7C
{
	::FluffyUnderware::Curvy::CurvySplineSegment* Field_2_0; // 0x10
	::MoleMole::MonoAirBusSegment* Field_2_7; // 0x18
	::System::Int32 Field_2_6; // 0x20
	::System::Int32 Field_2_5; // 0x24
	::System::Int32 Field_2_4; // 0x28

	::System::Boolean Method_2_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E1D658B1C952DF7C_METHOD_2_9CA35E5BF1A50E77_OFFSET))(this);
	}

	::Enum_3_8FD97C8068FD2492 Method_2_01A86BFC2138AD3D()
	{
		return ((::Enum_3_8FD97C8068FD2492(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_E1D658B1C952DF7C_METHOD_2_01A86BFC2138AD3D_OFFSET))(this);
	}
};
