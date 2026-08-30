#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_171F9D986BE70A7F.h"

namespace RPG::Client { class FateBuffData; }

#define CLASS_2_23A03E77486DF40D_METHOD_2_4055ECB72605C82D_OFFSET UNITYSDK_OFFSET(0x1985DA30)
#define CLASS_2_23A03E77486DF40D__CTOR_OFFSET UNITYSDK_OFFSET(0x1985DA20)
#define CLASS_2_23A03E77486DF40D__EVALUATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1985DD10)

inline static constexpr unsigned int Class_2_23A03E77486DF40D_TypeDefinitionIndex = 64198;

class Class_2_23A03E77486DF40D : public ::Class_1_171F9D986BE70A7F
{
public:
	::System::UInt32 BDHMCFLOEOC; // 0x10

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D__CTOR_OFFSET))(this, a1);
	}

	::System::Double Method_2_4055ECB72605C82D()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D_METHOD_2_4055ECB72605C82D_OFFSET))(this);
	}

	::System::Boolean _Evaluate_b__1_0(::RPG::Client::FateBuffData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + CLASS_2_23A03E77486DF40D__EVALUATE_B__1_0_OFFSET))(this, a1);
	}
};
