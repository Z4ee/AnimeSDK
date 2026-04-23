#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_09515A60A00C43B1.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_141D8D2C6DCEAB97_METHOD_2_073DAA13F7C35F64_OFFSET UNITYSDK_OFFSET(0x9822C40)
#define CLASS_2_141D8D2C6DCEAB97_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9822960)
#define CLASS_2_141D8D2C6DCEAB97_METHOD_2_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x9822C30)
#define CLASS_2_141D8D2C6DCEAB97_METHOD_2_DFC96BDC06CD0A44_OFFSET UNITYSDK_OFFSET(0x98229B0)
#define CLASS_2_141D8D2C6DCEAB97__CTOR_OFFSET UNITYSDK_OFFSET(0x9822BF0)

inline static constexpr unsigned int Class_2_141D8D2C6DCEAB97_TypeDefinitionIndex = 70803;

class Class_2_141D8D2C6DCEAB97 : public ::Class_1_09515A60A00C43B1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_DFC96BDC06CD0A44(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_METHOD_2_DFC96BDC06CD0A44_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_METHOD_2_D1F5A654A67BB61C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_073DAA13F7C35F64(::System::Single P0)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_METHOD_2_073DAA13F7C35F64_OFFSET))(this, P0);
	}
};
