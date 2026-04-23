#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_09515A60A00C43B1.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_141D8D2C6DCEAB97_6_METHOD_2_073DAA13F7C35F64_OFFSET UNITYSDK_OFFSET(0x10AF69B0)
#define CLASS_2_141D8D2C6DCEAB97_6_METHOD_2_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x10AF6640)
#define CLASS_2_141D8D2C6DCEAB97_6_METHOD_2_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x10AF69A0)
#define CLASS_2_141D8D2C6DCEAB97_6_METHOD_2_E0DADEE7ED109F5F_OFFSET UNITYSDK_OFFSET(0x10AF6780)
#define CLASS_2_141D8D2C6DCEAB97_6__CTOR_OFFSET UNITYSDK_OFFSET(0x10AF6960)

inline static constexpr unsigned int Class_2_141D8D2C6DCEAB97_6_TypeDefinitionIndex = 70810;

class Class_2_141D8D2C6DCEAB97_6 : public ::Class_1_09515A60A00C43B1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0868EF727040C390()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_6_METHOD_2_0868EF727040C390_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_E0DADEE7ED109F5F(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_6_METHOD_2_E0DADEE7ED109F5F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_6_METHOD_2_D1F5A654A67BB61C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_073DAA13F7C35F64(::System::Single P0)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_141D8D2C6DCEAB97_6_METHOD_2_073DAA13F7C35F64_OFFSET))(this, P0);
	}
};
