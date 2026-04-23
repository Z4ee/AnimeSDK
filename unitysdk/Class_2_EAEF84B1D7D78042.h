#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

#define CLASS_2_EAEF84B1D7D78042_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12375FE0)
#define CLASS_2_EAEF84B1D7D78042_METHOD_2_E2A966A0A8E61810_OFFSET UNITYSDK_OFFSET(0x12376020)
#define CLASS_2_EAEF84B1D7D78042__CTOR_OFFSET UNITYSDK_OFFSET(0x12376370)

inline static constexpr unsigned int Class_2_EAEF84B1D7D78042_TypeDefinitionIndex = 49814;

class Class_2_EAEF84B1D7D78042 : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAEF84B1D7D78042__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EAEF84B1D7D78042_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E2A966A0A8E61810(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_EAEF84B1D7D78042_METHOD_2_E2A966A0A8E61810_OFFSET))(this, a1);
	}
};
