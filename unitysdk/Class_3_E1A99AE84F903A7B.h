#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_17282789426EAD93.h"
#include "unitysdk/RPG/Client/PlanetFesFloatingController_CoinAmount.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class PlanetFesFloatingController; }
namespace System { class String; }

#define CLASS_3_E1A99AE84F903A7B_METHOD_3_CE621DA0B2A1B7C9_OFFSET UNITYSDK_OFFSET(0x12545860)
#define CLASS_3_E1A99AE84F903A7B_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x12545910)
#define CLASS_3_E1A99AE84F903A7B__CTOR_OFFSET UNITYSDK_OFFSET(0x125459F0)
#define CLASS_3_E1A99AE84F903A7B__ONEXECUTE_B__1_0_OFFSET UNITYSDK_OFFSET(0x12545A00)
#define CLASS_3_E1A99AE84F903A7B___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x12545A10)

inline static constexpr unsigned int Class_3_E1A99AE84F903A7B_TypeDefinitionIndex = 68737;

class Class_3_E1A99AE84F903A7B : public ::Class_2_17282789426EAD93
{
public:
	::System::String* Field_3_1; // 0x28
	::UnityEngine::Vector3 Field_3_0; // 0x30
	::RPG::Client::PlanetFesFloatingController_CoinAmount Field_3_2; // 0x3C

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

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E1A99AE84F903A7B___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
