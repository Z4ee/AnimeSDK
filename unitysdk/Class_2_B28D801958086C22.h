#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

class Class_2_2DE342D55868E1FE;

#define CLASS_2_B28D801958086C22__CTOR_OFFSET UNITYSDK_OFFSET(0x189D5E20)

inline static constexpr unsigned int Class_2_B28D801958086C22_TypeDefinitionIndex = 34849;

class Class_2_B28D801958086C22 : public ::Entitas::Systems
{
public:
	::System::Void _ctor(::Class_2_2DE342D55868E1FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2DE342D55868E1FE*))((::PBYTE)hIl2Cpp + CLASS_2_B28D801958086C22__CTOR_OFFSET))(this, a1);
	}
};
