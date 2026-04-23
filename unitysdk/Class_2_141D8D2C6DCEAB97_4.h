#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_09515A60A00C43B1.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_141D8D2C6DCEAB97_4_METHOD_2_073DAA13F7C35F64_OFFSET UNITYSDK_OFFSET(0xB488210)
#define CLASS_2_141D8D2C6DCEAB97_4_METHOD_2_928CB265FF527D61_OFFSET UNITYSDK_OFFSET(0xB487F80)
#define CLASS_2_141D8D2C6DCEAB97_4_METHOD_2_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0xB488200)
#define CLASS_2_141D8D2C6DCEAB97_4_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0xB487DC0)
#define CLASS_2_141D8D2C6DCEAB97_4__CTOR_OFFSET UNITYSDK_OFFSET(0xB4881C0)

inline static constexpr unsigned int Class_2_141D8D2C6DCEAB97_4_TypeDefinitionIndex = 70808;

class Class_2_141D8D2C6DCEAB97_4 : public ::Class_1_09515A60A00C43B1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_4_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_928CB265FF527D61(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_4_METHOD_2_928CB265FF527D61_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_4_METHOD_2_D1F5A654A67BB61C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_073DAA13F7C35F64(::System::Single P0)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_4_METHOD_2_073DAA13F7C35F64_OFFSET))(this, P0);
	}
};
