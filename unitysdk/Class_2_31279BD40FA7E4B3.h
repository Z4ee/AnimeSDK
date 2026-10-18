#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

#define CLASS_2_31279BD40FA7E4B3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC8D400)
#define CLASS_2_31279BD40FA7E4B3_METHOD_2_B0DCF29309694C5D_OFFSET UNITYSDK_OFFSET(0xCC8D440)
#define CLASS_2_31279BD40FA7E4B3__CTOR_OFFSET UNITYSDK_OFFSET(0xCC8D7F0)

inline static constexpr unsigned int Class_2_31279BD40FA7E4B3_TypeDefinitionIndex = 54033;

class Class_2_31279BD40FA7E4B3 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31279BD40FA7E4B3__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_31279BD40FA7E4B3_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B0DCF29309694C5D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_31279BD40FA7E4B3_METHOD_2_B0DCF29309694C5D_OFFSET))(this, a1);
	}
};
