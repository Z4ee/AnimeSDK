#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattlePhaseNew; }

#define CLASS_1_85447C2AFDA750E1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x90367E0)
#define CLASS_1_85447C2AFDA750E1_METHOD_1_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0x90361A0)
#define CLASS_1_85447C2AFDA750E1_METHOD_1_652F3820D8B242FF_OFFSET UNITYSDK_OFFSET(0x9036740)
#define CLASS_1_85447C2AFDA750E1_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x9036450)
#define CLASS_1_85447C2AFDA750E1_TICK_OFFSET UNITYSDK_OFFSET(0x9036090)
#define CLASS_1_85447C2AFDA750E1__CTOR_OFFSET UNITYSDK_OFFSET(0x9036080)

inline static constexpr unsigned int Class_1_85447C2AFDA750E1_TypeDefinitionIndex = 56538;

class Class_1_85447C2AFDA750E1 : public ::System::Object
{
public:
	::RPG::Client::BattlePhaseNew* Field_1_0; // 0x10

	::System::Void _ctor(::RPG::Client::BattlePhaseNew* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BattlePhaseNew*))((::PBYTE)hIl2Cpp + CLASS_1_85447C2AFDA750E1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_85447C2AFDA750E1_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85447C2AFDA750E1_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_497833CF065C1894()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85447C2AFDA750E1_METHOD_1_497833CF065C1894_OFFSET))(this);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85447C2AFDA750E1_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}

	::System::Void Method_1_652F3820D8B242FF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_85447C2AFDA750E1_METHOD_1_652F3820D8B242FF_OFFSET))(this);
	}
};
