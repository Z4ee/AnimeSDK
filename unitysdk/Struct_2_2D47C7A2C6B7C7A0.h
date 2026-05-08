#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2D47C7A2C6B7C7A0_EQUALS_OFFSET UNITYSDK_OFFSET(0x76A950)
#define STRUCT_2_2D47C7A2C6B7C7A0_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x76A9B0)

inline static constexpr unsigned int Struct_2_2D47C7A2C6B7C7A0_TypeDefinitionIndex = 48900;

struct alignas(1) Struct_2_2D47C7A2C6B7C7A0
{
	::System::Boolean Equals(::MoleMole::Config::CameraDelayMoveMode a1, ::MoleMole::Config::CameraDelayMoveMode a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode, ::MoleMole::Config::CameraDelayMoveMode))((::PBYTE)hIl2Cpp + STRUCT_2_2D47C7A2C6B7C7A0_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::MoleMole::Config::CameraDelayMoveMode a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Config::CameraDelayMoveMode))((::PBYTE)hIl2Cpp + STRUCT_2_2D47C7A2C6B7C7A0_GETHASHCODE_OFFSET))(this, a1);
	}
};
