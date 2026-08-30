#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F69A1738A3628CB.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_3_BC308DFA84F1AB9C_METHOD_3_1F2113491D806203_OFFSET UNITYSDK_OFFSET(0x1A44A960)
#define CLASS_3_BC308DFA84F1AB9C_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1A44AB00)
#define CLASS_3_BC308DFA84F1AB9C_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A44AA00)
#define CLASS_3_BC308DFA84F1AB9C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A44AB80)
#define CLASS_3_BC308DFA84F1AB9C__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1A44AB90)

inline static constexpr unsigned int Class_3_BC308DFA84F1AB9C_TypeDefinitionIndex = 74366;

class Class_3_BC308DFA84F1AB9C : public ::Class_2_5F69A1738A3628CB
{
public:
	::UnityEngine::Transform* NPAFMEBNFOB; // 0x28
	::System::String* GJEAIKIINML; // 0x30
	::RPG::Client::PlanetFesFloatingController_CoinAmount OKMFOGLIGOI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC308DFA84F1AB9C__CTOR_OFFSET))(this);
	}

	static ::Class_3_BC308DFA84F1AB9C* Method_3_1F2113491D806203(::RPG::Client::PlanetFesFloatingController* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::RPG::Client::PlanetFesFloatingController_CoinAmount a4)
	{
		return ((::Class_3_BC308DFA84F1AB9C*(*)(::RPG::Client::PlanetFesFloatingController*, ::UnityEngine::Transform*, ::System::String*, ::RPG::Client::PlanetFesFloatingController_CoinAmount))((::PBYTE)hIl2Cpp + CLASS_3_BC308DFA84F1AB9C_METHOD_3_1F2113491D806203_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC308DFA84F1AB9C_ONEXECUTE_OFFSET))(this);
	}

	::System::Void OnClear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC308DFA84F1AB9C_ONCLEAR_OFFSET))(this);
	}

	::System::Void _OnExecute_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BC308DFA84F1AB9C__ONEXECUTE_B__1_0_OFFSET))(this);
	}
};
