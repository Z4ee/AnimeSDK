#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2AE1D80996AD66EA_1_METHOD_1_CCCE9B81D0D84B27_OFFSET UNITYSDK_OFFSET(0x8A069C0)
#define CLASS_1_2AE1D80996AD66EA_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8A069B0)

inline static constexpr unsigned int Class_1_2AE1D80996AD66EA_1_TypeDefinitionIndex = 50831;

class Class_1_2AE1D80996AD66EA_1 : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint Field_1_0; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_1__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_CCCE9B81D0D84B27(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_1_METHOD_1_CCCE9B81D0D84B27_OFFSET))(this, a1);
	}
};
