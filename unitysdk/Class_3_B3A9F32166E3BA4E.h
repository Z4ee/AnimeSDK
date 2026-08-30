#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_5F69A1738A3628CB.h"

class Class_1_A043D803AC652E6E;
namespace RPG::Client { class PlanetFesFloatingController; }

#define CLASS_3_B3A9F32166E3BA4E_METHOD_3_57F015DFC718ABA3_OFFSET UNITYSDK_OFFSET(0x15784730)
#define CLASS_3_B3A9F32166E3BA4E_METHOD_3_AB46230E800C081B_OFFSET UNITYSDK_OFFSET(0x15784510)
#define CLASS_3_B3A9F32166E3BA4E_METHOD_3_E61C16044B7481FF_OFFSET UNITYSDK_OFFSET(0x157847F0)
#define CLASS_3_B3A9F32166E3BA4E_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x157845B0)
#define CLASS_3_B3A9F32166E3BA4E__CTOR_OFFSET UNITYSDK_OFFSET(0x15784840)

inline static constexpr unsigned int Class_3_B3A9F32166E3BA4E_TypeDefinitionIndex = 74366;

class Class_3_B3A9F32166E3BA4E : public ::Class_2_5F69A1738A3628CB
{
public:
	::Class_1_A043D803AC652E6E* GCFJDABCFGK; // 0x28
	::System::Single GAFENHHEBPG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3A9F32166E3BA4E__CTOR_OFFSET))(this);
	}

	static ::Class_3_B3A9F32166E3BA4E* Method_3_AB46230E800C081B(::RPG::Client::PlanetFesFloatingController* a1, ::System::Single a2)
	{
		return ((::Class_3_B3A9F32166E3BA4E*(*)(::RPG::Client::PlanetFesFloatingController*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_B3A9F32166E3BA4E_METHOD_3_AB46230E800C081B_OFFSET))(a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3A9F32166E3BA4E_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_57F015DFC718ABA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3A9F32166E3BA4E_METHOD_3_57F015DFC718ABA3_OFFSET))(this);
	}

	::System::Void Method_3_E61C16044B7481FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3A9F32166E3BA4E_METHOD_3_E61C16044B7481FF_OFFSET))(this);
	}
};
