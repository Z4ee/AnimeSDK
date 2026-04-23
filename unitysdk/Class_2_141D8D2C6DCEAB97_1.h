#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_09515A60A00C43B1.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_141D8D2C6DCEAB97_1_METHOD_2_073DAA13F7C35F64_OFFSET UNITYSDK_OFFSET(0x9846220)
#define CLASS_2_141D8D2C6DCEAB97_1_METHOD_2_268F1D1E192244F4_OFFSET UNITYSDK_OFFSET(0x9846020)
#define CLASS_2_141D8D2C6DCEAB97_1_METHOD_2_7B0A407379BA27E7_OFFSET UNITYSDK_OFFSET(0x9845EE0)
#define CLASS_2_141D8D2C6DCEAB97_1_METHOD_2_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x9846210)
#define CLASS_2_141D8D2C6DCEAB97_1__CTOR_OFFSET UNITYSDK_OFFSET(0x98461D0)

inline static constexpr unsigned int Class_2_141D8D2C6DCEAB97_1_TypeDefinitionIndex = 70804;

class Class_2_141D8D2C6DCEAB97_1 : public ::Class_1_09515A60A00C43B1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7B0A407379BA27E7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_1_METHOD_2_7B0A407379BA27E7_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_268F1D1E192244F4(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_1_METHOD_2_268F1D1E192244F4_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_1_METHOD_2_D1F5A654A67BB61C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_073DAA13F7C35F64(::System::Single P0)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_1_METHOD_2_073DAA13F7C35F64_OFFSET))(this, P0);
	}
};
