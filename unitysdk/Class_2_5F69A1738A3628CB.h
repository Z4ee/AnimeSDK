#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client { class PlanetFesFloatingController; }

#define CLASS_2_5F69A1738A3628CB_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1522CA40)
#define CLASS_2_5F69A1738A3628CB__CTOR_OFFSET UNITYSDK_OFFSET(0x1522CA90)

inline static constexpr unsigned int Class_2_5F69A1738A3628CB_TypeDefinitionIndex = 71064;

class Class_2_5F69A1738A3628CB : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::PlanetFesFloatingController* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F69A1738A3628CB__CTOR_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F69A1738A3628CB_ONCLEAR_OFFSET))(this);
	}
};
