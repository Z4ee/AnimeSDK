#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Entitas/Systems.h"

class Class_2_2DE342D55868E1FE;

#define CLASS_2_3890DAE33452569B__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB2330)

inline static constexpr unsigned int Class_2_3890DAE33452569B_TypeDefinitionIndex = 34566;

class Class_2_3890DAE33452569B : public ::Entitas::Systems
{
public:
	::System::Void _ctor(::Class_2_2DE342D55868E1FE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2DE342D55868E1FE*))((::PBYTE)hIl2Cpp + CLASS_2_3890DAE33452569B__CTOR_OFFSET))(this, a1);
	}
};
