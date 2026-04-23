#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_09515A60A00C43B1.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"

#define CLASS_2_87BB723548453DAA_METHOD_2_17EF77B56C08F200_OFFSET UNITYSDK_OFFSET(0x8F8B180)
#define CLASS_2_87BB723548453DAA_METHOD_2_D1F5A654A67BB61C_OFFSET UNITYSDK_OFFSET(0x8F8B2F0)
#define CLASS_2_87BB723548453DAA_METHOD_2_D7852DE078ACC1F1_OFFSET UNITYSDK_OFFSET(0x8F8AD50)
#define CLASS_2_87BB723548453DAA_METHOD_2_FF9E295EA63E5469_OFFSET UNITYSDK_OFFSET(0x8F8B300)
#define CLASS_2_87BB723548453DAA__CTOR_OFFSET UNITYSDK_OFFSET(0x8F8B2A0)

inline static constexpr unsigned int Class_2_87BB723548453DAA_TypeDefinitionIndex = 70806;

class Class_2_87BB723548453DAA : public ::Class_1_09515A60A00C43B1
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D7852DE078ACC1F1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA_METHOD_2_D7852DE078ACC1F1_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_17EF77B56C08F200(::System::Single a1)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA_METHOD_2_17EF77B56C08F200_OFFSET))(this, a1);
	}

	::System::Void Method_2_D1F5A654A67BB61C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA_METHOD_2_D1F5A654A67BB61C_OFFSET))(this);
	}

	::RPG::GameCore::FiveDimEvilSmileState Method_2_FF9E295EA63E5469(::System::Single P0)
	{
		return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_87BB723548453DAA_METHOD_2_FF9E295EA63E5469_OFFSET))(this, P0);
	}
};
