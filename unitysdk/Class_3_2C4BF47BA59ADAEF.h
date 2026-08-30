#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F69A1738A3628CB.h"

namespace RPG::Client { class PlanetFesFloatingController; }

#define CLASS_3_2C4BF47BA59ADAEF_METHOD_3_DBD36B60C537B341_OFFSET UNITYSDK_OFFSET(0x18225650)
#define CLASS_3_2C4BF47BA59ADAEF_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x182256E0)
#define CLASS_3_2C4BF47BA59ADAEF__CTOR_OFFSET UNITYSDK_OFFSET(0x18225740)

inline static constexpr unsigned int Class_3_2C4BF47BA59ADAEF_TypeDefinitionIndex = 74364;

class Class_3_2C4BF47BA59ADAEF : public ::Class_2_5F69A1738A3628CB
{
public:
	::System::Int32 OBOMNIHKHMM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C4BF47BA59ADAEF__CTOR_OFFSET))(this);
	}

	static ::Class_3_2C4BF47BA59ADAEF* Method_3_DBD36B60C537B341(::RPG::Client::PlanetFesFloatingController* a1, ::System::Int32 a2)
	{
		return ((::Class_3_2C4BF47BA59ADAEF*(*)(::RPG::Client::PlanetFesFloatingController*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_2C4BF47BA59ADAEF_METHOD_3_DBD36B60C537B341_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2C4BF47BA59ADAEF_ONEXECUTE_OFFSET))(this);
	}
};
