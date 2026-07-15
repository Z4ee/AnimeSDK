#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F69A1738A3628CB.h"

namespace RPG::Client { class PlanetFesFloatingController; }

#define CLASS_3_18213E2AB832BE68_METHOD_3_FE2D7D66A9B1FF74_OFFSET UNITYSDK_OFFSET(0x16FA16E0)
#define CLASS_3_18213E2AB832BE68_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x16FA1760)
#define CLASS_3_18213E2AB832BE68__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA1820)
#define CLASS_3_18213E2AB832BE68__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x16FA1830)

inline static constexpr unsigned int Class_3_18213E2AB832BE68_TypeDefinitionIndex = 71073;

class Class_3_18213E2AB832BE68 : public ::Class_2_5F69A1738A3628CB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18213E2AB832BE68__CTOR_OFFSET))(this);
	}

	static ::Class_3_18213E2AB832BE68* Method_3_FE2D7D66A9B1FF74(::RPG::Client::PlanetFesFloatingController* a1)
	{
		return ((::Class_3_18213E2AB832BE68*(*)(::RPG::Client::PlanetFesFloatingController*))((::PBYTE)hIl2Cpp + CLASS_3_18213E2AB832BE68_METHOD_3_FE2D7D66A9B1FF74_OFFSET))(a1);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18213E2AB832BE68_ONEXECUTE_OFFSET))(this);
	}

	::System::Void _OnExecute_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_18213E2AB832BE68__ONEXECUTE_B__1_0_OFFSET))(this);
	}
};
