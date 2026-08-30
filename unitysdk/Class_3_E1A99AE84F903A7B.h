#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F69A1738A3628CB.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }

#define CLASS_3_E1A99AE84F903A7B_METHOD_3_CE621DA0B2A1B7C9_OFFSET UNITYSDK_OFFSET(0x188DA1B0)
#define CLASS_3_E1A99AE84F903A7B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x188DA260)
#define CLASS_3_E1A99AE84F903A7B__CTOR_OFFSET UNITYSDK_OFFSET(0x188DA350)
#define CLASS_3_E1A99AE84F903A7B__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x188DA360)

inline static constexpr unsigned int Class_3_E1A99AE84F903A7B_TypeDefinitionIndex = 74371;

class Class_3_E1A99AE84F903A7B : public ::Class_2_5F69A1738A3628CB
{
public:
	::System::String* MJPKBIGCFOM; // 0x28
	::RPG::Client::PlanetFesFloatingController_CoinAmount OKMFOGLIGOI; // 0x30
	::UnityEngine::Vector3 FJBPOFJPFNP; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1A99AE84F903A7B__CTOR_OFFSET))(this);
	}

	static ::Class_3_E1A99AE84F903A7B* Method_3_CE621DA0B2A1B7C9(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Vector3 a2, ::System::String* a3)
	{
		return ((::Class_3_E1A99AE84F903A7B*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Vector3, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_E1A99AE84F903A7B_METHOD_3_CE621DA0B2A1B7C9_OFFSET))(a1, a2, a3);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1A99AE84F903A7B_ONEXECUTE_OFFSET))(this);
	}

	::System::Void _OnExecute_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1A99AE84F903A7B__ONEXECUTE_B__1_0_OFFSET))(this);
	}
};
