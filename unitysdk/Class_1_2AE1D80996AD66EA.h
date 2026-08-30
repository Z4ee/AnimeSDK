#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_2AE1D80996AD66EA_METHOD_1_C099BFAC7CD3CF58_OFFSET UNITYSDK_OFFSET(0x18A5D7E0)
#define CLASS_1_2AE1D80996AD66EA__CTOR_OFFSET UNITYSDK_OFFSET(0x18A5D7D0)

inline static constexpr unsigned int Class_1_2AE1D80996AD66EA_TypeDefinitionIndex = 62615;

class Class_1_2AE1D80996AD66EA : public ::System::Object
{
public:
	::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10

	::System::Void _ctor(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA__CTOR_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixPoint Method_1_C099BFAC7CD3CF58(::RPG::GameCore::FixPoint a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_2AE1D80996AD66EA_METHOD_1_C099BFAC7CD3CF58_OFFSET))(this, a1);
	}
};
