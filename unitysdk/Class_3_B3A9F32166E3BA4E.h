#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_17282789426EAD93.h"

class Class_1_A043D803AC652E6E;
namespace RPG::Client { class PlanetFesFloatingController; }

#define CLASS_3_B3A9F32166E3BA4E_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9A3A2A0)
#define CLASS_3_B3A9F32166E3BA4E_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x9A3A1E0)
#define CLASS_3_B3A9F32166E3BA4E_METHOD_3_998E122F46014853_OFFSET UNITYSDK_OFFSET(0x9A3A120)
#define CLASS_3_B3A9F32166E3BA4E_METHOD_3_AB46230E800C081B_OFFSET UNITYSDK_OFFSET(0x9A39F00)
#define CLASS_3_B3A9F32166E3BA4E_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9A39FA0)
#define CLASS_3_B3A9F32166E3BA4E__CTOR_OFFSET UNITYSDK_OFFSET(0x9A3A230)
#define CLASS_3_B3A9F32166E3BA4E___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x9A3A240)

inline static constexpr unsigned int Class_3_B3A9F32166E3BA4E_TypeDefinitionIndex = 68731;

class Class_3_B3A9F32166E3BA4E : public ::Class_2_17282789426EAD93
{
public:
	::Class_1_A043D803AC652E6E* Field_3_1; // 0x28
	::System::Single Field_3_0; // 0x30

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

	::System::Void Method_3_998E122F46014853()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3A9F32166E3BA4E_METHOD_3_998E122F46014853_OFFSET))(this);
	}

	::System::Void Method_3_61929A3103595552()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3A9F32166E3BA4E_METHOD_3_61929A3103595552_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3A9F32166E3BA4E___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_3_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B3A9F32166E3BA4E_METHOD_3_5790A55946AA509D_OFFSET))(this);
	}
};
