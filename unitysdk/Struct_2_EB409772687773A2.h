#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_EB409772687773A2_METHOD_2_413472096512A213_OFFSET UNITYSDK_OFFSET(0x31EA80)
#define STRUCT_2_EB409772687773A2_METHOD_2_65585810E2458BA4_OFFSET UNITYSDK_OFFSET(0x8480C0)

inline static constexpr unsigned int Struct_2_EB409772687773A2_TypeDefinitionIndex = 40907;

struct alignas(8) Struct_2_EB409772687773A2
{
	::MoleMole::EntityHandle Field_2_0; // 0x10

	::MoleMole::EntityHandle Method_2_413472096512A213()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_EB409772687773A2_METHOD_2_413472096512A213_OFFSET))(this);
	}

	::System::Void Method_2_65585810E2458BA4(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + STRUCT_2_EB409772687773A2_METHOD_2_65585810E2458BA4_OFFSET))(this, a1);
	}
};
