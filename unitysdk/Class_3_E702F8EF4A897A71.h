#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F69A1738A3628CB.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_ItemType.h"

namespace RPG::Client { class PlanetFesFloatingController; }

#define CLASS_3_E702F8EF4A897A71_METHOD_3_13FF6D51638B4EA6_OFFSET UNITYSDK_OFFSET(0x1A8C88B0)
#define CLASS_3_E702F8EF4A897A71_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A8C8940)
#define CLASS_3_E702F8EF4A897A71__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C8A10)
#define CLASS_3_E702F8EF4A897A71__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A8C8A20)

inline static constexpr unsigned int Class_3_E702F8EF4A897A71_TypeDefinitionIndex = 74370;

class Class_3_E702F8EF4A897A71 : public ::Class_2_5F69A1738A3628CB
{
public:
	::RPG::Client::PlanetFesFloatingController_ItemType LINLNNHIBAK; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E702F8EF4A897A71__CTOR_OFFSET))(this);
	}

	static ::Class_3_E702F8EF4A897A71* Method_3_13FF6D51638B4EA6(::RPG::Client::PlanetFesFloatingController* a1, ::RPG::Client::PlanetFesFloatingController_ItemType a2)
	{
		return ((::Class_3_E702F8EF4A897A71*(*)(::RPG::Client::PlanetFesFloatingController*, ::RPG::Client::PlanetFesFloatingController_ItemType))((::PBYTE)hIl2Cpp + CLASS_3_E702F8EF4A897A71_METHOD_3_13FF6D51638B4EA6_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E702F8EF4A897A71_ONEXECUTE_OFFSET))(this);
	}

	::System::Void _OnExecute_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E702F8EF4A897A71__ONEXECUTE_B__1_0_OFFSET))(this);
	}
};
